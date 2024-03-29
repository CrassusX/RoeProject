//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface WFAlbum : NSObject
{
    _Bool _isLongAlbum;
    _Bool _isSerial;
    _Bool _isSubscribed;
    _Bool _showTypeTag;
    _Bool _hideUpdateTime;
    int _wtype;
    int _publishType;
    int _topState;
    NSString *_aid;
    NSString *_aname;
    NSString *_icon;
    NSString *_adesc;
    long long _weiboCount;
    long long _likesCount;
    long long _dislikesCount;
    NSDate *_updateTime;
    NSDate *_refreshTime;
    NSDate *_favoritedTime;
    NSDate *_cloudFavoritedTime;
    NSString *_seriesID;
    NSString *_seriesName;
    NSDate *_hotTime;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *adesc; // @synthesize adesc=_adesc;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(copy, nonatomic) NSString *aname; // @synthesize aname=_aname;
@property(retain, nonatomic) NSDate *cloudFavoritedTime; // @synthesize cloudFavoritedTime=_cloudFavoritedTime;
@property(nonatomic) long long dislikesCount; // @synthesize dislikesCount=_dislikesCount;
@property(retain, nonatomic) NSDate *favoritedTime; // @synthesize favoritedTime=_favoritedTime;
@property(nonatomic) _Bool hideUpdateTime; // @synthesize hideUpdateTime=_hideUpdateTime;
@property(retain, nonatomic) NSDate *hotTime; // @synthesize hotTime=_hotTime;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool isLongAlbum; // @synthesize isLongAlbum=_isLongAlbum;
@property(nonatomic) _Bool isSerial; // @synthesize isSerial=_isSerial;
@property(nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(nonatomic) long long likesCount; // @synthesize likesCount=_likesCount;
@property(nonatomic) int publishType; // @synthesize publishType=_publishType;
@property(retain, nonatomic) NSDate *refreshTime; // @synthesize refreshTime=_refreshTime;
@property(copy, nonatomic) NSString *seriesID; // @synthesize seriesID=_seriesID;
@property(copy, nonatomic) NSString *seriesName; // @synthesize seriesName=_seriesName;
@property(nonatomic) _Bool showTypeTag; // @synthesize showTypeTag=_showTypeTag;
@property(nonatomic) int topState; // @synthesize topState=_topState;
@property(retain, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) long long weiboCount; // @synthesize weiboCount=_weiboCount;
@property(nonatomic) int wtype; // @synthesize wtype=_wtype;

@end

