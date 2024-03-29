//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMMoatViewability.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableString, NSString;

@interface IMMoatNativeViewability : IMMoatViewability
{
    _Bool _instrumentVideo;
    NSString *_partnerCode;
    NSMutableDictionary *_moatTrackingIDs;
    NSString *_levelsKeyPrefix;
    NSString *_slicersKeyPrefix;
    NSMutableString *_vastXMLString;
    NSArray *_clientLevels;
    NSArray *_clientSlicers;
    NSDictionary *_zMoatExtrasParameters;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *clientLevelParameters;
@property(retain, nonatomic) NSArray *clientLevels; // @synthesize clientLevels=_clientLevels;
@property(readonly, nonatomic) NSDictionary *clientSlicerParameters;
@property(retain, nonatomic) NSArray *clientSlicers; // @synthesize clientSlicers=_clientSlicers;
- (id)getmoatTrackingIDsDict;
- (id)initWithMoatParameters:(id)arg1;
@property(nonatomic) _Bool instrumentVideo; // @synthesize instrumentVideo=_instrumentVideo;
@property(retain, nonatomic) NSString *levelsKeyPrefix; // @synthesize levelsKeyPrefix=_levelsKeyPrefix;
- (_Bool)moatParametersValid;
@property(retain, nonatomic) NSMutableDictionary *moatTrackingIDs; // @synthesize moatTrackingIDs=_moatTrackingIDs;
@property(retain, nonatomic) NSString *partnerCode; // @synthesize partnerCode=_partnerCode;
@property(retain, nonatomic) NSString *slicersKeyPrefix; // @synthesize slicersKeyPrefix=_slicersKeyPrefix;
@property(retain, nonatomic) NSMutableString *vastXMLString; // @synthesize vastXMLString=_vastXMLString;
@property(retain, nonatomic) NSDictionary *zMoatExtrasParameters; // @synthesize zMoatExtrasParameters=_zMoatExtrasParameters;
@property(readonly, nonatomic) NSDictionary *vastLevelParameters;

@end

