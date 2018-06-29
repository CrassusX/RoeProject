//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaiduMobAdInterstitial, NSArray, NSDate, NSDictionary, NSString;

@protocol BaiduMobAdInterstitialDelegate <NSObject>
- (NSString *)publisherId;

@optional
- (NSString *)channelId;
- (_Bool)enableLocation;
- (void)interstitialDidAdClicked:(BaiduMobAdInterstitial *)arg1;
- (void)interstitialDidDismissLandingPage:(BaiduMobAdInterstitial *)arg1;
- (void)interstitialDidDismissScreen:(BaiduMobAdInterstitial *)arg1;
- (void)interstitialFailPresentScreen:(BaiduMobAdInterstitial *)arg1 withError:(int)arg2;
- (void)interstitialFailToLoadAd:(BaiduMobAdInterstitial *)arg1;
- (void)interstitialSuccessPresentScreen:(BaiduMobAdInterstitial *)arg1;
- (void)interstitialSuccessToLoadAd:(BaiduMobAdInterstitial *)arg1;
- (void)interstitialWillPresentScreen:(BaiduMobAdInterstitial *)arg1;
- (NSArray *)keywords;
- (NSDate *)userBirthday;
- (NSString *)userCity;
- (long long)userEducation;
- (int)userGender;
- (NSArray *)userHobbies;
- (NSDictionary *)userOtherAttributes;
- (NSString *)userPostalCode;
- (long long)userSalary;
- (NSString *)userWork;
@end
