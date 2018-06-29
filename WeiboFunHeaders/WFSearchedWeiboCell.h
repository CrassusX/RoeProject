//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSDateFormatter, TLThumbView, UIImageView, UILabel, WFSearchedWeibo;

__attribute__((visibility("hidden")))
@interface WFSearchedWeiboCell : UITableViewCell
{
    UILabel *_bodyLabel;
    UILabel *_timeLabel;
    TLThumbView *_imageView2;
    UIImageView *_contentBackView;
    NSDateFormatter *_dateFormatter;
    WFSearchedWeibo *_result;
}

+ (id)attributedStringForBody:(id)arg1;
+ (double)heightForResult:(id)arg1;
+ (struct CGSize)sizeForBody:(id)arg1 inWidth:(double)arg2 restrictHeight:(_Bool)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
- (void)dealloc;
@property(readonly, nonatomic) TLThumbView *imageView2; // @synthesize imageView2=_imageView2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)refreshLastUpdated;
@property(retain, nonatomic) WFSearchedWeibo *result; // @synthesize result=_result;
- (void)setBody:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;

@end
