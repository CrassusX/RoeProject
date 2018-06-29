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
