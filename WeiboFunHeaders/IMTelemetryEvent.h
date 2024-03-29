//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface IMTelemetryEvent : NSObject
{
    NSString *_componentType;
    NSString *_eventType;
    NSDictionary *_payload;
    double _timestamp;
    NSString *_eventUUID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *componentType; // @synthesize componentType=_componentType;
@property(readonly, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) NSString *eventUUID; // @synthesize eventUUID=_eventUUID;
- (id)fromDictionary:(id)arg1;
- (id)initWithComponentType:(id)arg1 eventType:(id)arg2 payload:(id)arg3;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)toDictionary;

@end

