//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface BaiduMobAdRequestInfo : NSObject
{
    _Bool _autoplayEnabled;
    _Bool _enableLocation;
    int _userGender;
    double _timestamp;
    NSString *_publisherId;
    NSString *_adId;
    NSString *_channelId;
    NSArray *_keywords;
    NSDate *_userBirthday;
    NSString *_userCity;
    NSString *_userPostalCode;
    NSString *_userWork;
    long long _userEducation;
    long long _userSalary;
    NSArray *_userHobbies;
    NSDictionary *_userOtherAttributes;
    NSNumber *_w;
    NSNumber *_h;
    NSNumber *_lw;
    NSNumber *_lh;
    CLLocation *_mapSdkLocation;
    double _startTimeStamp;
    double _containerBeforeCreatedTimeStamp;
    double _containerAfterCreatedTimeStamp;
    double _startLoadHtmlTimeStamp;
    NSNumber *_adAmount;
    struct CLLocationCoordinate2D _currentLocation;
}

- (id)act;
@property(retain, nonatomic) NSNumber *adAmount; // @synthesize adAmount=_adAmount;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
- (int)adType;
- (_Bool)addMSSP;
- (id)additionalParameters;
- (id)appProperty;
- (id)appPropertyJsonString;
@property(nonatomic) _Bool autoplayEnabled; // @synthesize autoplayEnabled=_autoplayEnabled;
- (_Bool)canAddVideo;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(nonatomic) double containerAfterCreatedTimeStamp; // @synthesize containerAfterCreatedTimeStamp=_containerAfterCreatedTimeStamp;
@property(nonatomic) double containerBeforeCreatedTimeStamp; // @synthesize containerBeforeCreatedTimeStamp=_containerBeforeCreatedTimeStamp;
@property(nonatomic) struct CLLocationCoordinate2D currentLocation; // @synthesize currentLocation=_currentLocation;
- (void)dealloc;
- (id)duration;
@property(nonatomic) _Bool enableLocation; // @synthesize enableLocation=_enableLocation;
- (int)frameWrokType;
- (id)getAdUnitProperty;
- (id)getAppInfo;
- (id)getDeviceInfo;
- (id)getNativeTimeStampDic;
- (id)getPersonProperty;
- (id)getSensorProperty;
@property(retain, nonatomic) NSNumber *h; // @synthesize h=_h;
- (id)init;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSNumber *lh; // @synthesize lh=_lh;
@property(retain, nonatomic) NSNumber *lw; // @synthesize lw=_lw;
@property(retain, nonatomic) CLLocation *mapSdkLocation; // @synthesize mapSdkLocation=_mapSdkLocation;
- (_Bool)preLoad;
- (id)prodProp;
@property(copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
- (id)queryURL;
- (id)requestId;
@property(nonatomic) double startLoadHtmlTimeStamp; // @synthesize startLoadHtmlTimeStamp=_startLoadHtmlTimeStamp;
@property(nonatomic) double startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSDate *userBirthday; // @synthesize userBirthday=_userBirthday;
@property(copy, nonatomic) NSString *userCity; // @synthesize userCity=_userCity;
@property(nonatomic) long long userEducation; // @synthesize userEducation=_userEducation;
@property(nonatomic) int userGender; // @synthesize userGender=_userGender;
@property(retain, nonatomic) NSArray *userHobbies; // @synthesize userHobbies=_userHobbies;
@property(retain, nonatomic) NSDictionary *userOtherAttributes; // @synthesize userOtherAttributes=_userOtherAttributes;
@property(copy, nonatomic) NSString *userPostalCode; // @synthesize userPostalCode=_userPostalCode;
@property(nonatomic) long long userSalary; // @synthesize userSalary=_userSalary;
@property(copy, nonatomic) NSString *userWork; // @synthesize userWork=_userWork;
@property(retain, nonatomic) NSNumber *w; // @synthesize w=_w;
- (id)signApp;
- (_Bool)sound;
- (void)updateLocationOnce;

@end

