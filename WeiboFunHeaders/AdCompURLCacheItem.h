//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AdCompURLCacheItem : NSObject
{
    unsigned int fileSize;
    NSString *fullUrl;
    NSString *md5ID;
    NSString *fileName;
    double lastVisit;
}

- (void).cxx_destruct;
- (void)ToVectorData:(vector_5b3bfa18 *)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize;
@property(retain, nonatomic) NSString *fullUrl; // @synthesize fullUrl;
- (id)initWithData:(const char *)arg1 length:(int *)arg2 version:(int)arg3;
- (id)initWithRequest:(id)arg1;
@property(nonatomic) double lastVisit; // @synthesize lastVisit;
@property(retain, nonatomic) NSString *md5ID; // @synthesize md5ID;

@end

