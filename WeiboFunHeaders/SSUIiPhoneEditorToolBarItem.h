//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSUIHorizontalTableViewItem.h"

@class NSMutableDictionary, UIImageView;

@interface SSUIiPhoneEditorToolBarItem : SSUIHorizontalTableViewItem
{
    UIImageView *_iconView;
    NSMutableDictionary *_data;
    _Bool _needLayout;
    id <SSUIHorizontalTableViewItemDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(nonatomic) __weak id <SSUIHorizontalTableViewItemDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getGrayImage:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

