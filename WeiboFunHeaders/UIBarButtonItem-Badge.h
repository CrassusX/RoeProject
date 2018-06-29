//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

@class NSString, UIColor, UIFont, UILabel;

@interface UIBarButtonItem (Badge)
@property(retain) UILabel *badge;
@property(retain, nonatomic) UIColor *badgeBGColor; // @dynamic badgeBGColor;
- (struct CGSize)badgeExpectedSize;
@property(retain, nonatomic) UIFont *badgeFont; // @dynamic badgeFont;
- (void)badgeInit;
@property(nonatomic) double badgeMinSize; // @dynamic badgeMinSize;
@property(nonatomic) double badgeOriginX; // @dynamic badgeOriginX;
@property(nonatomic) double badgeOriginY; // @dynamic badgeOriginY;
@property(nonatomic) double badgePadding; // @dynamic badgePadding;
@property(retain, nonatomic) UIColor *badgeTextColor; // @dynamic badgeTextColor;
@property(retain, nonatomic) NSString *badgeValue; // @dynamic badgeValue;
- (id)duplicateLabel:(id)arg1;
- (void)refreshBadge;
- (void)removeBadge;
@property _Bool shouldAnimateBadge; // @dynamic shouldAnimateBadge;
@property _Bool shouldHideBadgeAtZero; // @dynamic shouldHideBadgeAtZero;
- (void)updateBadgeFrame;
- (void)updateBadgeValueAnimated:(_Bool)arg1;
@end
