//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSError;

@interface IMResponse : NSObject
{
    int _statusCode;
    NSData *_responseBody;
    NSDictionary *_header;
    NSError *_networkError;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *header; // @synthesize header=_header;
- (id)initWithError:(id)arg1;
- (id)initWithStatusCode:(int)arg1 responseBody:(id)arg2 header:(id)arg3 request:(id)arg4 error:(id)arg5;
@property(readonly, nonatomic) NSError *networkError; // @synthesize networkError=_networkError;
@property(retain, nonatomic) NSData *responseBody; // @synthesize responseBody=_responseBody;
@property(readonly, nonatomic) int statusCode; // @synthesize statusCode=_statusCode;

@end

