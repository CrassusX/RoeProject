//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYAbstraceLogger.h"

#import "BLYLoggerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface BLYSTDLogger : BLYAbstraceLogger <BLYLoggerDelegate>
{
    unsigned long long _calendarUnitFlags;
    NSString *_appName;
    char *_app;
    unsigned long long _appLen;
    NSString *_processID;
    char *_pid;
    unsigned long long _pidLen;
}

+ (id)defaultLogger;
- (void).cxx_destruct;
- (id)init;
- (void)logMessage:(id)arg1;
@property(readonly, nonatomic) NSString *loggerName;
- (void)printMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property(readonly) Class superclass;

@end

