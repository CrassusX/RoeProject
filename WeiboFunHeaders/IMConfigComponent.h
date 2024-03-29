//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMConfigNetworkDelegate.h"

@class IMConfigNetworkInterface, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface IMConfigComponent : NSObject <IMConfigNetworkDelegate>
{
    _Bool _isAppInForeground;
    int _noOfConfigFetchInProgress;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableDictionary *_requestedConfigs;
    NSMutableDictionary *_registeredListeners;
    IMConfigNetworkInterface *_configNetworkInterface;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addToRegisteredListeners:(id)arg1 forConfigType:(id)arg2;
- (void)addToRequestedConfigs:(id)arg1;
- (void)cancelTimer;
- (_Bool)configBatchContainsRootConfig:(id)arg1;
@property(retain, nonatomic) IMConfigNetworkInterface *configNetworkInterface; // @synthesize configNetworkInterface=_configNetworkInterface;
- (void)configResponseReceived:(id)arg1;
- (_Bool)countOfRequestedConfigs;
- (id)createConfigBatch;
- (void)fetchConfigFromNetwork;
- (void)fetchConfigs:(id)arg1;
- (void)getConfig:(id)arg1 delegate:(id)arg2;
- (id)getFromRegisteredListenersForConfigType:(id)arg1;
- (id)getFromRequestedConfigs:(id)arg1;
- (id)init;
- (id)initWithDefaults;
@property(nonatomic) _Bool isAppInForeground; // @synthesize isAppInForeground=_isAppInForeground;
- (_Bool)isConfigExpired:(double)arg1 expiry:(double)arg2;
- (_Bool)isConfigPresentInConfigRequested:(id)arg1;
@property int noOfConfigFetchInProgress; // @synthesize noOfConfigFetchInProgress=_noOfConfigFetchInProgress;
- (void)registerForConfig:(id)arg1 delegate:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *registeredListeners; // @synthesize registeredListeners=_registeredListeners;
- (void)removeFromRegisteredListenersForConfigType:(id)arg1;
- (void)removeFromRequestedConfigs:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *requestedConfigs; // @synthesize requestedConfigs=_requestedConfigs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
- (void)start;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

