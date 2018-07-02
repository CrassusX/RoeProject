### 越狱开发实践破解内涵福利社的广告
## 1.找到App,打开App情况下，终端连接到手机执行以下命令
```
ps -e 
```
找到app信息:/var/containers/Bundle/Application/417CCB95-B920-44B8-AB9B-ECD495E628A1/WeiboFun.app/WeiboFun


## 2.砸壳：
```
// 注入程序执行下面获取沙盒目录
cycript -p WeiboFun 
[[NSFileManager defaultManager]URLsForDirectory:NSDocumentDirectory inDomains:NSUserDomainMask][0]
```
拷贝dumpdecrypted.dylib 文件到里面（从电脑拷贝到手机上）
注意copy文件命令都是在本地电脑命令下执行
```
scp -P 2222 testarm root@localhost:/tmp
scp -P 2222 /Users/crassus/Documents/GithubProjects/dumpdecrypted/dumpdecrypted.dylib root@localhost:/var/mobile/Containers/Data/Application/B5286EAD-07D8-41F0-A52A-014C55D990D5/Documents/
```

运行动态库注入执行程序
```
DYLD_INSERT_LIBRARIES=dumpdecrypted.dylib /var/containers/Bundle/Application/417CCB95-B920-44B8-AB9B-ECD495E628A1/WeiboFun.app/WeiboFun
```

 沙盒多出砸壳后的执行程序WeiboFun.decrypted
将程序拷贝到mac上 (从手机拷贝到电脑上)
```
scp -P 2222 root@localhost:/var/mobile/Containers/Data/Application/B5286EAD-07D8-41F0-A52A-014C55D990D5/Documents/WeiboFun.decrypted /Users/crassus/Downloads/Roe/WeiboFun
```

## 3.解析头文件
终端运行到WeiboFun.decrypted目录下
```
class-dump -s -S -H WeiboFun.decrypted -o ./WeiboFunHeaders
```

## 4.界面分析（借助工具Reval或者cycript）
cycript（http://www.cycript.org/）
此刻终端连接手机，app处于打开状态
```
_printHierarchy － 直接打印所有UIViewController
[[[UIWindow keyWindow] rootViewController] _printHierarchy].toString()

"<WFRootController 0x156823400>, state: appeared, view: <UILayoutContainerView 0x155d2c8d0>\n   | <WFSlideSegmentController 0x156052800>, state: appeared, view: <UIView 0x155e66b80>\n   |    | <WFWeiboController 0x155d19960>, state: appeared, view: <UIView 0x155d114b0>"

_autolayoutTrace - recursiveDescription的简化版，去掉了UIView的一些描述
[[UIApp keyWindow] _autolayoutTrace].toString()
获取bundle info
[[NSBundle mainBundle] infoDictionary].toString()

CFBundleIdentifier = "com.lunchsoft.weibofun";

```
- 通过分析视图结构 WFSlideSegmentController控制器有广告视图AdViewViewImpl
查找解析头文件含有该类
find -H WFSlideSegmentController*
JYSlideSegmentController

发现WFSlideSegmentController 有属性_shouldHideAd 和 广告代理 LSBannerAdManagerDelegate
假设通过设置_shouldHideAd = YES 是否就能够实现关闭广告
```
@interface WFSlideSegmentController : JYSlideSegmentController <LSBannerAdManagerDelegate>
{
    _Bool _shouldAdjustUI;
    _Bool _shouldHideAd;
}

- (void)adjustTheme:(id)arg1;
- (void)adjustViewColors;
- (void)dealloc;
- (void)getMoney;
@property(nonatomic) _Bool shouldHideAd; // @synthesize shouldHideAd=_shouldHideAd;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
```

### 5.创建tweak工程来实现以上猜测
```
 创建tweak工程
 $THEOS/bin/nic.pl
 Choose a Template (required): 11
 Project Name (required): WeiboFunTweak
 Package Name [com.yourcompany.weibofuntweak]: com.iosre.WeiboFunTweak    //deb包的名字（类似于bundle identifier)
 Author/Maintainer Name [Crassus]: Crassus
 [iphone/tweak] MobileSubstrate Bundle filter [com.apple.springboard]: com.lunchsoft.weibofun   // tweak作用对象的bundle identifier，上面第4步已经获取到 
 [iphone/tweak] List of applications to terminate upon installation (space-separated, '-' for none) [SpringBoard]: WeiboFun  // tweak安装完成后需要重启的应用
```

- thoes模块Logify来精确定位消息响应方法
在Tweak 目录下执行以下命令批量生成相关代码
```
THEOS/bin/logify.pl ../WeiboFunHeaders/WFSlideSegmentController.h > Tweak.xm
```
- 执行安装命令,并注释掉会导致冲突的代码
```
首次执行
make
make install
make package // 在手机上打包
```

### 6.开启监听打印log信息
监听手机打印log信息：tail -f /var/log/syslog | grep SpringBoard  // tail命令不可用，通过cydia 安装core utilities
Ios10系统日志变更
使用deviceconsole解决
	http://qinken.site/2017/07/iOS10%E4%B8%8B%E6%89%93%E5%8D%B0NSLog-syslog%E4%BF%A1%E6%81%AF/
https://github.com/MegaCookie/deviceconsole  
比如打印iOSRETargetApp这个app的信息，可用deviceconsole -i -f iOSRETargetApp命令
或者Mac安装工具./cinject -w 查看日志信息

### 7.打印日志分析代码验证，最终确定只要把此代码返回YES，广告页面就不再显示

```
- (_Bool )shouldHideAd { 
	%log; 
	_Bool  r = %orig; 
	HBLogDebug(@"iOSRE:shouldHideAd = %d", r); 
	return YES; 
 }
```

### 8.尝试插件化打包，重新签名App到非越狱手机上使用
AppStore下载Keka，修改deb包文件后缀为zip，并通过Keka解压缩后得到WeiboFunTweak.dylib和WeiboFunTweak.plist两个文件。
参考[免越狱iOS插件注入](https://www.jianshu.com/p/8236249edd35)
            


