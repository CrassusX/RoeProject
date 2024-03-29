//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTURLRequestModel.h"

#import "TTPhotoSource.h"
#import "WFImagePreloadableModel.h"

@class NSDate, NSMutableArray, NSString, WFAlbum;

__attribute__((visibility("hidden")))
@interface WFWeiboModel : TTURLRequestModel <TTPhotoSource, WFImagePreloadableModel>
{
    int _sourceType;
    double _baseTimestamp;
    NSString *_aid;
    WFAlbum *_album;
    _Bool _getAlbum;
    _Bool _canLoadFromProgress;
    int _pageIndex;
    int _weiboTotal;
    int _newWeiboCount;
    NSDate *_minDate;
    NSDate *_maxDate;
    NSString *_searchKeyword;
    _Bool _loadedFromWeb;
    _Bool _loadedFromProgress;
    _Bool _lastLoadSucceed;
    int _weiboType;
    NSMutableArray *_items;
    NSMutableArray *_favItems;
    NSString *_title;
    NSString *_errorMsg;
    NSString *_errorDetail;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFAlbum *album; // @synthesize album=_album;
@property(nonatomic) double baseTimestamp; // @synthesize baseTimestamp=_baseTimestamp;
@property(nonatomic) _Bool canLoadFromProgress; // @synthesize canLoadFromProgress=_canLoadFromProgress;
@property(readonly, nonatomic) _Bool canLoadMore;
- (_Bool)canPreload;
- (void)dealloc;
@property(copy, nonatomic) NSString *errorDetail; // @synthesize errorDetail=_errorDetail;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain, nonatomic) NSMutableArray *favItems; // @synthesize favItems=_favItems;
- (id)favPhotoAtIndexPath:(id)arg1;
- (id)initWithFavoriteType:(int)arg1 keyword:(id)arg2;
- (id)initWithFavoriteType:(int)arg1 minDate:(id)arg2 maxDate:(id)arg3;
- (id)initWithType:(int)arg1 album:(id)arg2;
- (id)initWithType:(int)arg1 albumID:(id)arg2 loadFromProgress:(_Bool)arg3;
- (id)initWithType:(int)arg1 sourceType:(int)arg2 baseTimestamp:(long long)arg3 canLoadFromProgress:(_Bool)arg4;
- (_Bool)isOfficial;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) _Bool lastLoadSucceed; // @synthesize lastLoadSucceed=_lastLoadSucceed;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)loadFromFavorites;
- (_Bool)loadFromProgress;
- (int)loadFromRootObject:(id)arg1 fromProgress:(_Bool)arg2;
@property(readonly, nonatomic) _Bool loadedFromProgress; // @synthesize loadedFromProgress=_loadedFromProgress;
@property(readonly, nonatomic) _Bool loadedFromWeb; // @synthesize loadedFromWeb=_loadedFromWeb;
@property(readonly, nonatomic) long long maxPhotoIndex;
@property(readonly, nonatomic) int newWeiboCount; // @synthesize newWeiboCount=_newWeiboCount;
@property(readonly, nonatomic) long long numberOfPhotos;
@property(readonly, nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
- (id)photoAtIndex:(long long)arg1;
- (id)removeFavItem:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int weiboType; // @synthesize weiboType=_weiboType;
@property(readonly, nonatomic) int weiboTotal; // @synthesize weiboTotal=_weiboTotal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

