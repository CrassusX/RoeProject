//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, UIActivityIndicatorView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface TTTableHeaderDragRefreshView : UIView
{
    NSDate *_lastUpdatedDate;
    UILabel *_lastUpdatedLabel;
    UILabel *_statusLabel;
    UIImageView *_arrowImage;
    UIActivityIndicatorView *_activityView;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCurrentDate;
- (void)setImageFlipped:(_Bool)arg1;
- (void)setStatus:(int)arg1;
- (void)setUpdateDate:(id)arg1;
- (void)showActivity:(_Bool)arg1 animated:(_Bool)arg2;

@end

