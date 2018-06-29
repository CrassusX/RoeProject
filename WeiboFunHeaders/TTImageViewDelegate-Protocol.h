//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, TTImageView, TTURLRequest, UIImage;

@protocol TTImageViewDelegate <NSObject>

@optional
- (void)imageView:(TTImageView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)imageView:(TTImageView *)arg1 didLoadImage:(UIImage *)arg2;
- (void)imageView:(TTImageView *)arg1 willSendARequest:(TTURLRequest *)arg2;
- (void)imageViewDidStartLoad:(TTImageView *)arg1;
@end
