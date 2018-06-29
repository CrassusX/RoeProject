//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MobClickApp : NSObject
{
    _Bool _crashReportEnabled;
    _Bool _backgroundTaskEnabled;
    _Bool _logEnabled;
    double _logSendInterval;
    unsigned long long _backgroundTaskIdentifier;
    NSString *_appVersion;
    NSString *_channel;
    int _reportPolicy;
    _Bool _encryptEnabled;
    _Bool _appCrashedHandlerInstalled;
    unsigned long long _activateMsgTS;
    NSString *_appid;
    unsigned long long _scenarioType;
    NSString *_wrapperType;
    NSString *_wrapperVersion;
    NSString *_vcName;
}

+ (_Bool)isIntegratedTestModel;
+ (double)minReportInterval;
+ (id)sessionId;
+ (void)setAppVersion:(id)arg1;
+ (void)setBackgroundTaskEnabled:(_Bool)arg1;
+ (void)setCrashReportEnabled:(_Bool)arg1;
+ (void)setEncryptEnabled:(_Bool)arg1;
+ (void)setLogEnabled:(_Bool)arg1;
+ (id)sharedInstance;
+ (int)verifyReportPolicy:(int)arg1;
@property(nonatomic) unsigned long long activateMsgTS; // @synthesize activateMsgTS=_activateMsgTS;
@property(nonatomic) _Bool appCrashedHandlerInstalled; // @synthesize appCrashedHandlerInstalled=_appCrashedHandlerInstalled;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) _Bool backgroundTaskEnabled; // @synthesize backgroundTaskEnabled=_backgroundTaskEnabled;
- (void)beginBackgroundTask;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(nonatomic) _Bool crashReportEnabled; // @synthesize crashReportEnabled=_crashReportEnabled;
- (void)dealloc;
@property(nonatomic) _Bool encryptEnabled; // @synthesize encryptEnabled=_encryptEnabled;
- (void)endBackgroundTask;
@property(nonatomic) _Bool logEnabled; // @synthesize logEnabled=_logEnabled;
@property(nonatomic) double logSendInterval; // @synthesize logSendInterval=_logSendInterval;
- (void)noAppKeyException;
@property(nonatomic, getter=reportPolicy) int reportPolicy; // @synthesize reportPolicy=_reportPolicy;
@property(nonatomic) unsigned long long scenarioType; // @synthesize scenarioType=_scenarioType;
- (void)setActivateMsgFlag;
@property(copy) NSString *vcName; // @synthesize vcName=_vcName;
@property(copy, nonatomic) NSString *wrapperType; // @synthesize wrapperType=_wrapperType;
@property(copy, nonatomic) NSString *wrapperVersion; // @synthesize wrapperVersion=_wrapperVersion;

@end
