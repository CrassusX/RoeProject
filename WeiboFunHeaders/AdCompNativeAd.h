//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AdCompAdCondition, AdCompDataImpl, NSArray, UIView, UIViewController;

@interface AdCompNativeAd : NSObject
{
    _Bool isTest;
    id <AdCompNativeAdDelegate> delegate;
    AdCompDataImpl *_adData;
    AdCompAdCondition *_condition;
    UIView *adView;
    UIViewController *_controller;
    NSArray *_contentArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AdCompDataImpl *adData; // @synthesize adData=_adData;
@property(retain, nonatomic) UIView *adView; // @synthesize adView;
- (void)clickNativeAdWithData:(id)arg1 withClickPoint:(struct CGPoint)arg2;
@property(retain, nonatomic) AdCompAdCondition *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSArray *contentArr; // @synthesize contentArr=_contentArr;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <AdCompNativeAdDelegate> delegate; // @synthesize delegate;
- (id)exchangeContentAdToNativeData;
- (id)initWithAppKey:(id)arg1 positionID:(id)arg2;
@property(nonatomic) _Bool isTest; // @synthesize isTest;
- (void)loadNativeAdWithCount:(int)arg1;
- (id)matchNativeAdIDWith:(id)arg1;
- (void)nativeAdResignActive:(id)arg1;
- (void)setTestMode;
- (void)showNativeAdWithData:(id)arg1 onView:(id)arg2;

@end
