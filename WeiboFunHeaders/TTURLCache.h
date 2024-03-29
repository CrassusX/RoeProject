//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TTURLCache : NSObject
{
    NSString *_name;
    NSString *_cachePath;
    NSMutableDictionary *_imageCache;
    NSMutableArray *_imageSortedList;
    unsigned long long _totalPixelCount;
    unsigned long long _maxPixelCount;
    long long _totalLoading;
    double _invalidationAge;
    _Bool _disableDiskCache;
    _Bool _disableImageCache;
}

+ (id)cachePathWithName:(id)arg1;
+ (id)cacheWithName:(id)arg1;
+ (_Bool)createPathIfNecessary:(id)arg1;
+ (id)doubleImageURLPath:(id)arg1;
+ (void)setSharedCache:(id)arg1;
+ (id)sharedCache;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (id)cachePathForKey:(id)arg1;
- (id)cachePathForURL:(id)arg1;
- (id)createTemporaryURL;
- (id)createUniqueTemporaryURL;
- (id)dataForKey:(id)arg1 expires:(double)arg2 timestamp:(id *)arg3;
- (id)dataForURL:(id)arg1;
- (id)dataForURL:(id)arg1 expires:(double)arg2 timestamp:(id *)arg3;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(void *)arg1;
@property(nonatomic) _Bool disableDiskCache; // @synthesize disableDiskCache=_disableDiskCache;
@property(nonatomic) _Bool disableImageCache; // @synthesize disableImageCache=_disableImageCache;
@property(readonly, nonatomic) NSString *etagCachePath;
- (id)etagCachePathForKey:(id)arg1;
- (id)etagForKey:(id)arg1;
- (void)expireImagesFromMemory;
- (_Bool)hasDataForKey:(id)arg1 expires:(double)arg2;
- (_Bool)hasDataForURL:(id)arg1;
- (_Bool)hasImageForURL:(id)arg1 fromDisk:(_Bool)arg2;
- (_Bool)imageExistsFromBundle:(id)arg1;
- (_Bool)imageExistsFromDocuments:(id)arg1;
- (id)imageForURL:(id)arg1;
- (id)imageForURL:(id)arg1 fromDisk:(_Bool)arg2;
- (id)init;
- (id)initWithName:(id)arg1;
- (void)invalidateAll;
- (void)invalidateKey:(id)arg1;
- (void)invalidateURL:(id)arg1;
@property(nonatomic) double invalidationAge; // @synthesize invalidationAge=_invalidationAge;
- (id)keyForURL:(id)arg1;
- (id)loadEtagFromCacheWithKey:(id)arg1;
- (id)loadImageFromBundle:(id)arg1;
- (id)loadImageFromDocuments:(id)arg1;
- (void)logMemoryUsage;
@property(nonatomic) unsigned long long maxPixelCount; // @synthesize maxPixelCount=_maxPixelCount;
- (void)moveDataForURL:(id)arg1 toURL:(id)arg2;
- (void)moveDataFromPath:(id)arg1 toURL:(id)arg2;
- (id)moveDataFromPathToTemporaryURL:(id)arg1;
- (void)removeAll:(_Bool)arg1;
- (void)removeKey:(id)arg1;
- (void)removeURL:(id)arg1 fromDisk:(_Bool)arg2;
- (void)storeData:(id)arg1 forKey:(id)arg2;
- (void)storeData:(id)arg1 forURL:(id)arg2;
- (void)storeEtag:(id)arg1 forKey:(id)arg2;
- (void)storeImage:(id)arg1 forURL:(id)arg2;
- (void)storeImage:(id)arg1 forURL:(id)arg2 force:(_Bool)arg3;
- (id)storeTemporaryData:(id)arg1;
- (id)storeTemporaryFile:(id)arg1;
- (id)storeTemporaryImage:(id)arg1 toDisk:(_Bool)arg2;

@end

