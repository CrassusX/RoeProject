//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableURLRequest, NSString;

@interface AdCompAdRequest : NSObject
{
    NSString *adAppId;
    NSMutableURLRequest *httpRequest;
    _Bool bWontVisit;
    _Bool bAsyncReport;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adAppId; // @synthesize adAppId;
@property(nonatomic) _Bool bAsyncReport; // @synthesize bAsyncReport;
@property(nonatomic) _Bool bWontVisit; // @synthesize bWontVisit;
- (void)dealloc;
@property(retain, nonatomic) NSMutableURLRequest *httpRequest; // @synthesize httpRequest;

@end
