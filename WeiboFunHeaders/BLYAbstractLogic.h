//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError, NSRecursiveLock;

@interface BLYAbstractLogic : NSOperation
{
    _Bool _shouldRetry;
    _Bool _logicExecuting;
    _Bool _logicFinished;
    _Bool _logicReady;
    _Bool _logicCanceled;
    unsigned long long _executionTimes;
    unsigned long long _logicNumber;
    NSError *_error;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
- (void)cancel;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)errorWithDescription:(id)arg1;
@property(nonatomic) unsigned long long executionTimes; // @synthesize executionTimes=_executionTimes;
- (void)finish;
- (id)init;
- (_Bool)isAsynchronous;
- (_Bool)isCancelled;
- (_Bool)isConcurrent;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isReady;
- (id)jceCMDString;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property _Bool logicCanceled; // @synthesize logicCanceled=_logicCanceled;
@property _Bool logicExecuting; // @synthesize logicExecuting=_logicExecuting;
@property _Bool logicFinished; // @synthesize logicFinished=_logicFinished;
@property(nonatomic) unsigned long long logicNumber; // @synthesize logicNumber=_logicNumber;
@property _Bool logicReady; // @synthesize logicReady=_logicReady;
- (id)persistFileKey;
- (long long)persistType;
@property(nonatomic) _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;

@end

