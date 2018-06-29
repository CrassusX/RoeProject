//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "UMTBase.h"

@class NSMutableDictionary, NSString;

@interface UMTImprint : NSObject <UMTBase, NSCoding>
{
    NSMutableDictionary *__property;
    int __version;
    NSString *__checksum;
    _Bool __property_isset;
    _Bool __version_isset;
    _Bool __checksum_isset;
}

@property(retain, nonatomic, getter=checksum, setter=setChecksum:) NSString *checksum;
- (_Bool)checksumIsSet;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1 version:(int)arg2 checksum:(id)arg3;
@property(retain, nonatomic, getter=property, setter=setProperty:) NSMutableDictionary *property;
- (_Bool)propertyIsSet;
- (void)read:(id)arg1;
@property(nonatomic, getter=version, setter=setVersion:) int version;
- (void)unsetChecksum;
- (void)unsetProperty;
- (void)unsetVersion;
- (void)validate;
- (_Bool)versionIsSet;
- (void)write:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
