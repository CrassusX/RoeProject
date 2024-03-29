//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMAdStoreDelegate.h"
#import "IMConfigDelegate.h"
#import "IMIASViewability.h"
#import "IMMoatViewability.h"
#import "IMRenderViewDelegate.h"
#import "IMTimerDelegate.h"

@class IMAdStore, IMAdsConfig, IMIASViewability, IMMoatViewability, IMRenderView, IMTimerManager, NSData, NSDictionary, NSString, UIColor;

@interface IMAdUnit : NSObject <IMRenderViewDelegate, IMMoatViewability, IMIASViewability, IMConfigDelegate, IMTimerDelegate, IMAdStoreDelegate>
{
    _Bool _firedInteractionEvent;
    int _displayedScreens;
    int _placementType;
    long long _placementId;
    NSDictionary *_extras;
    NSString *_keywords;
    double _insertionTS;
    long long _requestState;
    IMTimerManager *_timer;
    NSData *_vastTag;
    IMMoatViewability *_moatViewability;
    IMIASViewability *_iasViewability;
    NSString *_clientID;
    long long _currentState;
    long long _creativeType;
    long long _trackingType;
    NSString *_markupType;
    NSString *_context;
    NSDictionary *_adContent;
    NSString *_pubContent;
    NSDictionary *_jsonPubContent;
    IMAdsConfig *_config;
    id <IMAdUnitDelegate> _delegate;
    IMRenderView *_renderView;
    NSString *_impId;
    NSString *_adType;
    double _renderStartTS;
    long long _adExpiry;
    IMAdStore *_store;
    UIColor *_unsafeAreaColor;
    NSDictionary *_adBidInfo;
    NSString *_creativeId;
    struct CGRect _frame;
    struct CGRect _safeAreaFrame;
}

+ (void)logMonetizationDisabledWithAdType:(id)arg1 andComponentType:(id)arg2;
- (void).cxx_destruct;
- (void)adActive;
- (void)adAttached;
- (void)adAvailable;
@property(retain, nonatomic) NSDictionary *adBidInfo; // @synthesize adBidInfo=_adBidInfo;
@property(retain, nonatomic) NSDictionary *adContent; // @synthesize adContent=_adContent;
- (void)adDestroyed;
@property(nonatomic) long long adExpiry; // @synthesize adExpiry=_adExpiry;
- (void)adFailed;
- (void)adLoaded;
- (void)adReady;
- (void)adRendered;
- (id)adStateToString;
- (void)adStore:(id)arg1 didLoadAdWithResponse:(id)arg2 impId:(id)arg3 insertionTS:(id)arg4 vastTag:(id)arg5 clientID:(id)arg6;
- (void)adStore:(id)arg1 failedToLoadAdWithErrorCode:(int)arg2 andDescription:(id)arg3 clientID:(id)arg4;
- (_Bool)adStore:(id)arg1 shouldDeleteAdOnFetchFromDBForMarkupType:(id)arg2;
- (_Bool)adStoreShouldHandlePrefetch;
@property(retain, nonatomic) NSString *adType; // @synthesize adType=_adType;
- (void)clearMarkupFromDB;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) IMAdsConfig *config; // @synthesize config=_config;
- (void)configUpdated:(id)arg1;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
- (id)createAdStoreRequest;
- (void)createIASViewability;
- (void)createMoatViewabilityWithParameters:(id)arg1 forCreativeType:(long long)arg2;
- (void)created;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(nonatomic) long long creativeType; // @synthesize creativeType=_creativeType;
@property long long currentState; // @synthesize currentState=_currentState;
- (void)dealloc;
- (void)deinit;
@property(nonatomic) __weak id <IMAdUnitDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)deleteAdForImpressionID:(id)arg1;
- (id)displayName;
@property(nonatomic) int displayedScreens; // @synthesize displayedScreens=_displayedScreens;
- (_Bool)extractAdContent:(id)arg1;
@property(retain, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
- (id)fetchAdsBlobForImpId:(id)arg1;
@property(nonatomic) _Bool firedInteractionEvent; // @synthesize firedInteractionEvent=_firedInteractionEvent;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)genericTelemetryPayload;
- (id)getAdMetaInfo;
- (id)getAdReqParams;
- (id)getRenderContent;
@property(retain, nonatomic) IMIASViewability *iasViewability; // @synthesize iasViewability=_iasViewability;
- (void)imRenderView:(id)arg1 failedToLoad:(id)arg2;
- (void)imRenderView:(id)arg1 gotCommand:(id)arg2 onScheme:(id)arg3;
- (void)imRenderView:(id)arg1 shouldFireEvent:(id)arg2 withPayload:(id)arg3;
- (void)imRenderViewAdWasInteracted:(id)arg1;
- (void)imRenderViewAdWillLeaveApplication:(id)arg1;
- (void)imRenderViewAppearOnScreen:(id)arg1;
- (void)imRenderViewDidDismissScreen:(id)arg1;
- (void)imRenderViewDidInteractWithParams:(id)arg1 onRenderView:(id)arg2;
- (void)imRenderViewDidPresentScreen:(id)arg1;
- (void)imRenderViewFinishedLoading:(id)arg1;
- (void)imRenderViewFireAdFailed:(id)arg1;
- (void)imRenderViewFireAdReady:(id)arg1;
- (void)imRenderViewIncentActionComplete:(id)arg1;
- (void)imRenderViewWillDismissScreeen:(id)arg1;
- (void)imRenderViewWillPresentScreen:(id)arg1;
@property(retain, nonatomic) NSString *impId; // @synthesize impId=_impId;
- (id)init;
- (id)initWithPlacementId:(long long)arg1 adType:(id)arg2;
@property(readonly, nonatomic) double insertionTS; // @synthesize insertionTS=_insertionTS;
@property(nonatomic, getter=isAdRenderedTelemetryFired) _Bool adRenderedTelemetryFired; // @dynamic adRenderedTelemetryFired;
- (_Bool)isEqualToThisAd:(id)arg1;
- (_Bool)isNativeMarkupAd;
@property(retain, nonatomic) NSDictionary *jsonPubContent; // @synthesize jsonPubContent=_jsonPubContent;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
- (void)load;
- (void)loadRenderViewWithFrame:(struct CGRect)arg1 content:(id)arg2 placementType:(int)arg3 safeAreaGeometry:(struct CGRect)arg4 unsafeAreaColor:(id)arg5;
- (void)loading;
@property(retain, nonatomic) NSString *markupType; // @synthesize markupType=_markupType;
@property(retain, nonatomic) IMMoatViewability *moatViewability; // @synthesize moatViewability=_moatViewability;
- (_Bool)parseAdResponse:(id)arg1;
@property(nonatomic) long long placementId; // @synthesize placementId=_placementId;
@property(nonatomic) int placementType; // @synthesize placementType=_placementType;
- (void)processIASViewability:(_Bool)arg1;
- (void)processMetaInfo:(id)arg1;
- (void)processViewabilities:(id)arg1;
@property(retain, nonatomic) NSString *pubContent; // @synthesize pubContent=_pubContent;
@property(nonatomic) double renderStartTS; // @synthesize renderStartTS=_renderStartTS;
@property(retain, nonatomic) IMRenderView *renderView; // @synthesize renderView=_renderView;
- (void)renderViewDismissScreen;
- (void)renderViewFailedToLoad;
- (void)renderViewWillDismissScreen;
- (void)reportEvent:(id)arg1;
@property long long requestState; // @synthesize requestState=_requestState;
@property(nonatomic) struct CGRect safeAreaFrame; // @synthesize safeAreaFrame=_safeAreaFrame;
- (_Bool)saveAdsBlob:(id)arg1 forImpressionId:(id)arg2;
- (void)sendCallBackForAdLoadFailure:(int)arg1 description:(id)arg2 extras:(id)arg3;
- (void)sendRenderTimeOutError;
@property(retain, nonatomic) IMAdStore *store; // @synthesize store=_store;
@property(retain, nonatomic) IMTimerManager *timer; // @synthesize timer=_timer;
@property(nonatomic) long long trackingType; // @synthesize trackingType=_trackingType;
@property(retain, nonatomic) UIColor *unsafeAreaColor; // @synthesize unsafeAreaColor=_unsafeAreaColor;
@property(retain, nonatomic) NSData *vastTag; // @synthesize vastTag=_vastTag;
- (void)submitEventForLoadFailedOnEarlyRefresh;
- (void)timerHitForManager:(id)arg1;
- (void)updateCreativeType:(id)arg1;
- (void)updateVastTag:(id)arg1 withRequestID:(id)arg2;
- (long long)webViewPreference;
- (id)webviewBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

