//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UIImage;

@interface SSUIShareActionSheetItem : UIControl
{
    UIImage *_icon;
    NSString *_label;
}

+ (id)itemWithIcon:(id)arg1 label:(id)arg2 onClick:(CDUnknownBlockType)arg3;
+ (id)itemWithPlatformType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;

@end

