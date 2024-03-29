//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTURLResponse.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface TTURLJSONResponse : NSObject <TTURLResponse>
{
    id _rootObject;
    NSData *_data;
}

@property(readonly, retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)dealloc;
- (id)request:(id)arg1 processResponse:(id)arg2 data:(id)arg3;
@property(readonly, retain, nonatomic) id rootObject; // @synthesize rootObject=_rootObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

