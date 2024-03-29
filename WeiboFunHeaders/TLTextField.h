//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface TLTextField : UITextField
{
    UILabel *placeholderLabel;
    NSString *placeholder;
    UIColor *placeholderColor;
}

- (void).cxx_destruct;
- (void)__layoutSubviews;
- (void)dealloc;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor;
- (id)placeholderLabel;
- (void)setText:(id)arg1;
- (void)textChanged:(id)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;

@end

