/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface GEOTileLoaderConfiguration : NSObject <NSCopying>
{
    _Bool _useRemoteLoader;
    _Bool _trackUsage;
    unsigned long long _memoryCacheCountLimit;
    unsigned long long _memoryCacheCostLimit;
    NSString *_diskCacheLocation;
}

@property(copy, nonatomic) NSString *diskCacheLocation; // @synthesize diskCacheLocation=_diskCacheLocation;
@property(nonatomic) unsigned long long memoryCacheCostLimit; // @synthesize memoryCacheCostLimit=_memoryCacheCostLimit;
@property(nonatomic) unsigned long long memoryCacheCountLimit; // @synthesize memoryCacheCountLimit=_memoryCacheCountLimit;
@property(nonatomic) _Bool trackUsage; // @synthesize trackUsage=_trackUsage;
@property(nonatomic) _Bool useRemoteLoader; // @synthesize useRemoteLoader=_useRemoteLoader;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

