//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AdSpreadScreenManager, AdViewAdNetworkConfig, AdViewConfig, UIViewController;

@interface AdSpreadScreenAdNetworkAdapter : NSObject
{
    id <AdSpreadScreenManagerDelegate> adSpreadScreenDelegate;
    AdSpreadScreenManager *adSpreadScreenManager;
    AdViewConfig *adViewConfig;
    AdViewAdNetworkConfig *networkConfig;
    UIViewController *adSpreadScreenController;
    int loadType;
    _Bool _bWaitAd;
}

+ (int)networkType;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *adSpreadScreenController; // @synthesize adSpreadScreenController;
@property(nonatomic) __weak id <AdSpreadScreenManagerDelegate> adSpreadScreenDelegate; // @synthesize adSpreadScreenDelegate;
@property(nonatomic) __weak AdSpreadScreenManager *adSpreadScreenManager; // @synthesize adSpreadScreenManager;
@property(retain, nonatomic) AdViewConfig *adViewConfig; // @synthesize adViewConfig;
@property(nonatomic) _Bool bWaitAd; // @synthesize bWaitAd=_bWaitAd;
- (void)dealloc;
- (id)initWithAdSpreadScreenDelegate:(id)arg1 manager:(id)arg2 config:(id)arg3 networkConfig:(id)arg4;
- (_Bool)isBannerAnimationOK:(int)arg1;
- (_Bool)isOpenGps;
- (_Bool)isTestMode;
- (_Bool)loadAdSpreadScreen:(id)arg1;
@property(nonatomic) int loadType; // @synthesize loadType;
@property(retain, nonatomic) AdViewAdNetworkConfig *networkConfig; // @synthesize networkConfig;
- (void)rotateToOrientation:(long long)arg1;
- (_Bool)shouldSendExMetric;
- (void)stopBeingDelegate;

@end
