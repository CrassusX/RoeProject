//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMNativeVideoProperties : NSObject
{
    _Bool _autoplay;
    _Bool _playMuted;
    _Bool _touchToFullScreen;
    _Bool _autoReplay;
    _Bool _showMuteButton;
    _Bool _enablefallbackTimers;
    _Bool _enableBgFgControl;
    _Bool _shouldShowSeekBar;
}

@property(nonatomic) _Bool autoReplay; // @synthesize autoReplay=_autoReplay;
@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) _Bool enableBgFgControl; // @synthesize enableBgFgControl=_enableBgFgControl;
@property(nonatomic) _Bool enablefallbackTimers; // @synthesize enablefallbackTimers=_enablefallbackTimers;
- (id)fillWithFullScreenProperties;
- (id)fillWithInlineProperties;
- (id)initWithNativeVideoProps:(id)arg1;
- (id)initWithNativeVideoType:(unsigned long long)arg1;
@property(nonatomic) _Bool playMuted; // @synthesize playMuted=_playMuted;
@property(nonatomic) _Bool shouldShowSeekBar; // @synthesize shouldShowSeekBar=_shouldShowSeekBar;
@property(nonatomic) _Bool showMuteButton; // @synthesize showMuteButton=_showMuteButton;
@property(nonatomic) _Bool touchToFullScreen; // @synthesize touchToFullScreen=_touchToFullScreen;

@end

