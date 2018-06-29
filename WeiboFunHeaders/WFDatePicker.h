//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIDatePicker, UIToolbar;

__attribute__((visibility("hidden")))
@interface WFDatePicker : UIView
{
    UIView *_parentView;
    UIButton *_backgroundButton;
    UIView *_pickerBackView;
    UIDatePicker *_datePicker;
    UIToolbar *_toolbar;
    id <WFDatePickerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)close;
- (void)close:(id)arg1;
@property(nonatomic) id <WFDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)done:(id)arg1;
- (id)initWithParentView:(id)arg1 minDate:(id)arg2 selectedDate:(id)arg3;
- (void)show;

@end
