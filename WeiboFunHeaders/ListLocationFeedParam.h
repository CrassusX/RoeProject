//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RennParam.h"

@class NSString;

@interface ListLocationFeedParam : RennParam
{
    long long _pageSize;
    long long _pageNumber;
    NSString *_locationFeedType;
    NSString *_radius;
    NSString *_longitude;
    NSString *_latitude;
}

- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *locationFeedType; // @synthesize locationFeedType=_locationFeedType;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *radius; // @synthesize radius=_radius;

@end

