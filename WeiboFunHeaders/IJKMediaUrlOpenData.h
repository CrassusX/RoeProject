//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IJKMediaUrlOpenData : NSObject
{
    NSString *_url;
    _Bool _handled;
    _Bool _urlChanged;
    int _segmentIndex;
    int _retryCounter;
    int _fd;
    int _error;
    long long _event;
    NSString *_msg;
}

- (void).cxx_destruct;
@property(nonatomic) int error; // @synthesize error=_error;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
@property(nonatomic) int fd; // @synthesize fd=_fd;
- (id)initWithUrl:(id)arg1 event:(long long)arg2 segmentIndex:(int)arg3 retryCounter:(int)arg4;
@property(nonatomic, getter=isHandled) _Bool handled;
@property(nonatomic, getter=isUrlChanged) _Bool urlChanged; // @synthesize urlChanged=_urlChanged;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(readonly, nonatomic) int retryCounter; // @synthesize retryCounter=_retryCounter;
@property(readonly, nonatomic) int segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(retain, nonatomic) NSString *url;

@end
