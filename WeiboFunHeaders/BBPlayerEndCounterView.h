//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BBPlayerViewController<BBPlayerControlViewDelegate>, CircleProgressBar, NSTimer, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface BBPlayerEndCounterView : UIView
{
    CircleProgressBar *progressBar;
    UILabel *titleLabel;
    UIButton *skipButton;
    UIButton *cancelButton;
    NSTimer *progressTimer;
    double secondsRemaining;
    BBPlayerViewController<BBPlayerControlViewDelegate> *_playerController;
}

- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (void)hide;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onUpdateProgress:(id)arg1;
@property(nonatomic) BBPlayerViewController<BBPlayerControlViewDelegate> *playerController; // @synthesize playerController=_playerController;
- (void)setProgress:(double)arg1;
- (void)setTitle:(id)arg1;

@end

