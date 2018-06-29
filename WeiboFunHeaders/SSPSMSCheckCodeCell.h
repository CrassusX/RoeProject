//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSPSMSCell.h"

#import "UITextFieldDelegate.h"

@class NSDate, NSString, NSTimer, UIButton, UILabel, UITextField;

@interface SSPSMSCheckCodeCell : SSPSMSCell <UITextFieldDelegate>
{
    _Bool _isCountdown;
    NSTimer *_timer;
    NSDate *startTime;
    long long sendTimes;
    UILabel *titleLabel;
    UIButton *_checkCodeButton;
    UITextField *_textField;
    CDUnknownBlockType _resultHanler;
}

- (void).cxx_destruct;
- (void)_countDown;
- (void)_setTitleWithCount:(long long)arg1;
- (_Bool)checkCode;
@property(retain, nonatomic) UIButton *checkCodeButton; // @synthesize checkCodeButton=_checkCodeButton;
- (id)init;
@property(copy, nonatomic) CDUnknownBlockType resultHanler; // @synthesize resultHanler=_resultHanler;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)startCountdown;
- (void)stopCountdown;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
