//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WeiboSDK : NSObject
{
}

+ (id)activityViewController;
+ (id)callbackSchemePrefix;
+ (void)commentToWeibo:(id)arg1;
+ (void)didReceiveUnSupportedRequest:(id)arg1;
+ (void)didReceiveUnSupportedResponse:(id)arg1;
+ (void)directlySendResponseToCurrentApp:(id)arg1;
+ (void)enableDebugMode:(_Bool)arg1;
+ (id)getSDKVersion;
+ (id)getWeiboAid;
+ (id)getWeiboAppInstallUrl;
+ (id)getWeiboSDKUA;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (id)hashKey;
+ (_Bool)isCanSSOAndShareInWeiboApp;
+ (_Bool)isCanSSOInWeiboApp;
+ (_Bool)isCanShareInWeiboAPP;
+ (_Bool)isEmptyOrWhitespace:(id)arg1;
+ (_Bool)isWeiboAppInstalled;
+ (void)linkToArticle:(id)arg1;
+ (void)linkToProfile;
+ (void)linkToSearch:(id)arg1;
+ (void)linkToSingleBlog:(id)arg1 blogID:(id)arg2;
+ (void)linkToTimeLine;
+ (void)linkToUser:(id)arg1;
+ (void)logOutWithToken:(id)arg1 delegate:(id)arg2 withTag:(id)arg3;
+ (_Bool)openAppWithTransferObject:(id)arg1;
+ (_Bool)openWeiboApp;
+ (id)queryDictionaryOfURLQuery:(id)arg1 usingEncoding:(unsigned long long)arg2;
+ (id)queryValueWithName:(id)arg1 urlString:(id)arg2;
+ (id)registedAppsPasteboardName;
+ (_Bool)registerApp:(id)arg1;
+ (_Bool)registerAppWithApp:(id)arg1;
+ (_Bool)registerAppWithAppKey:(id)arg1;
+ (id)requestUserInfoCache;
+ (_Bool)sendRequest:(id)arg1;
+ (_Bool)sendResponse:(id)arg1;
+ (id)serializeURLString:(id)arg1 withParams:(id)arg2;
+ (void)shareToWeibo:(id)arg1;
+ (_Bool)unregisterApp;
+ (id)wbsdk_platform;

@end
