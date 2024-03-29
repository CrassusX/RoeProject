//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RennJsonBase.h"

#import "RennJsonParser.h"

@class RennJsonParser;

@interface RennJson : RennJsonBase <RennJsonParser>
{
    RennJsonParser *jsonParser;
}

- (void)dealloc;
- (id)fragmentWithString:(id)arg1 error:(id *)arg2;
- (id)init;
- (unsigned long long)maxDepth;
- (id)objectWithString:(id)arg1;
- (id)objectWithString:(id)arg1 allowScalar:(_Bool)arg2 error:(id *)arg3;
- (id)objectWithString:(id)arg1 error:(id *)arg2;

@end

