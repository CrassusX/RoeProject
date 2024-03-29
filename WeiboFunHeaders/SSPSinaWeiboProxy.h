//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMOBFPlugin.h"

@class NSMutableSet, NSString;

@interface SSPSinaWeiboProxy : NSObject <IMOBFPlugin>
{
    NSString *_tmpText;
    NSString *_tmpToken;
    id _tmpImageObj;
    id _tmpVideoObj;
    NSString *_tmpCallback;
    NSMutableSet *_shareCallbackSet;
    NSMutableSet *_authCallbackSet;
}

- (void).cxx_destruct;
- (void)_getImages:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)_sendMessageWithTmps;
@property(retain, nonatomic) NSMutableSet *authCallbackSet; // @synthesize authCallbackSet=_authCallbackSet;
- (_Bool)canAuth:(id)arg1 callback:(id)arg2;
- (_Bool)canShare:(id)arg1 callback:(id)arg2;
- (void)dealloc;
- (void)didReceiveWeiboRequest:(id)arg1;
- (void)didReceiveWeiboResponse:(id)arg1;
- (id)getMFP;
- (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
- (id)init;
- (_Bool)isCanSSOInWeiboApp;
- (_Bool)isCanShareInWeiboAPP;
- (_Bool)isClientInstalled;
- (void)load:(id)arg1;
- (_Bool)registerApp:(id)arg1;
- (void)registerAuthMethod;
- (void)registerGetAid;
- (void)registerHandleSSOCallbackMethod;
- (void)registerHandlerShareCallbackMethod;
- (void)registerMethod;
- (void)registerNOSDKShareMethod;
- (void)registerSetupApp;
- (void)registerShareMethod;
@property(retain, nonatomic) NSMutableSet *shareCallbackSet; // @synthesize shareCallbackSet=_shareCallbackSet;
- (void)setupAppKey:(id)arg1;
- (void)unload;
- (void)wbsdk_TransferDidFailWithErrorCode:(long long)arg1 andError:(id)arg2;
- (void)wbsdk_TransferDidReceiveObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

