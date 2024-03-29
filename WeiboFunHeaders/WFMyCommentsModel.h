//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTURLRequestModel.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface WFMyCommentsModel : TTURLRequestModel
{
    int _wtype;
    _Bool _shouldLoadFromWeb;
    _Bool _lastLoadSucceed;
    NSMutableArray *_items;
    long long _commentTotal;
    long long _pageIndex;
    NSString *_errorMsg;
    NSString *_errorDetail;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canLoadMore;
@property(readonly, nonatomic) long long commentTotal; // @synthesize commentTotal=_commentTotal;
- (void)dealloc;
@property(copy, nonatomic) NSString *errorDetail; // @synthesize errorDetail=_errorDetail;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
- (id)initWithWtype:(int)arg1;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) _Bool lastLoadSucceed; // @synthesize lastLoadSucceed=_lastLoadSucceed;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (id)loadFromEntries:(id)arg1;
- (unsigned long long)loadFromRootObject:(id)arg1;
@property(readonly, nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;

@end

