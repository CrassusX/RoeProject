//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, UIButton, UIDatePicker, UILabel, UIToolbar;

__attribute__((visibility("hidden")))
@interface WFDateRangePicker : UIView
{
    UILabel *_minDateLabel;
    UILabel *_maxDateLabel;
    UIButton *_doneButton;
    UIView *_parentView;
    UIView *_topBackView;
    UIView *_bottomBackView;
    UIButton *_backgroundButton;
    UIDatePicker *_datePicker;
    UIToolbar *_bottomToolbar;
    NSDate *_selectableMinDate;
    NSDate *_selectableMaxDate;
    NSDate *_selectedMinDate;
    NSDate *_selectedMaxDate;
    _Bool _isPicking;
    _Bool _isPickingMinDate;
    _Bool _hasFiltered;
    id <WFDateRangePickerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)backgroundButton;
- (void)cancelPickingADate:(id)arg1;
- (void)cancelRangePicker:(id)arg1;
- (void)clearADate:(id)arg1;
- (void)close:(_Bool)arg1;
- (void)collapseRangePicker;
- (void)dateLabelTapped:(id)arg1;
- (void)dealloc;
@property(nonatomic) id <WFDateRangePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)done:(id)arg1;
- (void)donePickingADate:(id)arg1;
- (id)initWithParentView:(id)arg1 minDate:(id)arg2 maxDate:(id)arg3;
- (void)removeBottomPickerView:(_Bool)arg1;
- (void)show;

@end

