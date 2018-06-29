//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, UIViewController<LSBannerAdManagerDelegate>;

@protocol WFBannerManagerDelegate <NSObject>
@property(readonly, retain, nonatomic) UIViewController<LSBannerAdManagerDelegate> *adController;
@property(readonly, nonatomic) _Bool adLoaded;
@property(readonly, retain, nonatomic) UIView *adView;
- (void)detachAdView;
- (void)pauseAdView;
- (void)resumeAdView;
- (void)showAdViewInController:(UIViewController<LSBannerAdManagerDelegate> *)arg1 onLoadFinish:(void (^)(void))arg2 onBannerRemoved:(void (^)(void))arg3;
@end
