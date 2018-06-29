//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WBBaseMediaObject, WBImageObject, WBNewVideoObject;

@interface WBMessageObject : NSObject
{
    NSString *text;
    WBImageObject *imageObject;
    WBBaseMediaObject *mediaObject;
    WBNewVideoObject *videoObject;
}

+ (id)dictionaryWithMessage:(id)arg1;
+ (id)message;
+ (id)messageWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WBImageObject *imageObject; // @synthesize imageObject;
@property(retain, nonatomic) WBBaseMediaObject *mediaObject; // @synthesize mediaObject;
@property(retain, nonatomic) NSString *text; // @synthesize text;
@property(retain, nonatomic) WBNewVideoObject *videoObject; // @synthesize videoObject;
- (id)validate;

@end
