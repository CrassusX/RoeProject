//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AbsInteractiveStrategy.h"

@class CMMotionManager;

__attribute__((visibility("hidden")))
@interface MDMotionStrategy : AbsInteractiveStrategy
{
    CMMotionManager *_motionManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void)off;
- (void)on;
- (void)startDeviceMotion;
- (void)stopDeviceMotion;

@end

