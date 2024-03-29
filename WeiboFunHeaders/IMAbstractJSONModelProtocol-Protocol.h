//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSData, NSDictionary;

@protocol IMAbstractJSONModelProtocol <NSCopying, NSCoding>
- (id)initWithData:(NSData *)arg1 error:(id *)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1 error:(id *)arg2;
- (NSDictionary *)toDictionary;
- (NSDictionary *)toDictionaryWithKeys:(NSArray *)arg1;
@end

