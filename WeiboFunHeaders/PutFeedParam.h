//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RennParam.h"

@class NSString;

@interface PutFeedParam : RennParam
{
    NSString *_message;
    NSString *_title;
    NSString *_actionTargetUrl;
    NSString *_imageUrl;
    NSString *_desc;
    NSString *_subtitle;
    NSString *_actionName;
    NSString *_targetUrl;
}

@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) NSString *actionTargetUrl; // @synthesize actionTargetUrl=_actionTargetUrl;
- (void)dealloc;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (id)init;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end
