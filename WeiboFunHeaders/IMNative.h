//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMAdPoolDelegate.h"
#import "IMAdUnitDelegate.h"
#import "IMConfigDelegate.h"

@class IMAdsConfig, IMNativeAdPool, IMNativeAdUnit, NSDictionary, NSString, NSURL, UIImage;

@interface IMNative : NSObject <IMAdUnitDelegate, IMAdPoolDelegate, IMConfigDelegate>
{
    _Bool _isInitialized;
    id <IMNativeDelegate> _delegate;
    NSString *_keywords;
    NSDictionary *_extras;
    IMNativeAdUnit *_adUnit;
    double _loadTimeStamp;
    IMNativeAdPool *_adPool;
    IMAdsConfig *_adsConfig;
    unsigned long long _state;
    long long _placementId;
}

- (void).cxx_destruct;
- (void)ad:(id)arg1 didFailToLoadWithErrorCode:(int)arg2 andDescription:(id)arg3;
- (void)ad:(id)arg1 didInteractWithParams:(id)arg2;
@property(readonly, nonatomic) NSString *adCtaText;
@property(readonly, nonatomic) NSString *adDescription;
- (void)adDidDismissScreen:(id)arg1;
- (void)adDidFinishLoad:(id)arg1;
- (void)adDidLeaveApplication:(id)arg1;
- (void)adDidPresentScreen:(id)arg1;
- (void)adFinishedPlayingMedia:(id)arg1;
@property(readonly, nonatomic) UIImage *adIcon;
- (void)adIsAvailable:(id)arg1;
@property(readonly, nonatomic) NSURL *adLandingPageUrl;
@property(retain, nonatomic) IMNativeAdPool *adPool; // @synthesize adPool=_adPool;
- (void)adPoolAdAvailableforAdPool:(id)arg1;
- (void)adPoolAdNotAvailableforAdPool:(id)arg1 withError:(int)arg2 andDescription:(id)arg3;
- (void)adPoolAdReceivedForAdPool:(id)arg1;
@property(readonly, nonatomic) NSString *adRating;
@property(readonly, nonatomic) NSString *adTitle;
@property(retain, nonatomic) IMNativeAdUnit *adUnit; // @synthesize adUnit=_adUnit;
- (void)adWillDismissScreen:(id)arg1;
- (void)adWillPresentScreen:(id)arg1;
@property(retain, nonatomic) IMAdsConfig *adsConfig; // @synthesize adsConfig=_adsConfig;
- (void)callFireClientFillBeacon;
- (void)configUpdated:(id)arg1;
- (void)createAdUnitAndLoad;
@property(readonly, nonatomic) NSString *creativeId;
@property(readonly, nonatomic) NSString *customAdContent;
@property(nonatomic) __weak id <IMNativeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
- (void)fireTRCEvent:(id)arg1;
- (void)fireTRCEvent:(id)arg1 withEventType:(id)arg2;
- (id)getAdMetaInfo;
- (void)imNativeAdUnitViewablilityTracked:(id)arg1;
- (id)initWithPlacementId:(long long)arg1;
- (id)initWithPlacementId:(long long)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) _Bool isAppDownload;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
- (_Bool)isReady;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
- (void)load;
@property double loadTimeStamp; // @synthesize loadTimeStamp=_loadTimeStamp;
@property long long placementId; // @synthesize placementId=_placementId;
- (id)primaryViewOfWidth:(double)arg1;
- (void)recyclePrimaryView;
- (void)reportAdClickAndOpenLandingPage;
- (void)sendAdFailedCallbackWithError:(int)arg1 andDescription:(id)arg2 withEventFireTRCAdFail:(_Bool)arg3;
- (void)sendAdSuccessCallback;
- (void)setFailedStateAndSendCallbackWithError:(int)arg1 andDescription:(id)arg2;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)userSkippedMedia:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
