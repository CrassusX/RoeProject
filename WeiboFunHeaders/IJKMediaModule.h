//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IJKMediaModule : NSObject
{
    _Bool _appIdleTimerDisabled;
    _Bool _mediaModuleIdleTimerDisabled;
}

+ (id)sharedModule;
@property(getter=isAppIdleTimerDisabled) _Bool appIdleTimerDisabled; // @synthesize appIdleTimerDisabled=_appIdleTimerDisabled;
@property(getter=isMediaModuleIdleTimerDisabled) _Bool mediaModuleIdleTimerDisabled; // @synthesize mediaModuleIdleTimerDisabled=_mediaModuleIdleTimerDisabled;
- (void)updateIdleTimer;

@end
