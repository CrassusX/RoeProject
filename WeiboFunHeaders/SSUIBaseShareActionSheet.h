//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray;

@interface SSUIBaseShareActionSheet : UIControl
{
    NSArray *_items;
    CDUnknownBlockType _itemClickHandler;
    CDUnknownBlockType _cancelHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
- (void)dismiss;
- (id)initWithItems:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType itemClickHandler; // @synthesize itemClickHandler=_itemClickHandler;
@property(nonatomic) __weak NSArray *items; // @synthesize items=_items;
- (void)onCancel:(CDUnknownBlockType)arg1;
- (void)onItemClick:(CDUnknownBlockType)arg1;
- (void)showInView:(id)arg1;

@end

