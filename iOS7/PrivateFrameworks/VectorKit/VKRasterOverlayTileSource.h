/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKTileSource.h>

@class NSArray, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>;

// Not exported
@interface VKRasterOverlayTileSource : VKTileSource
{
    NSMutableArray *_overlays;
    NSObject<OS_dispatch_group> *_renderGroup;
    NSObject<OS_dispatch_queue> *_homeQ;
}

@property(readonly, nonatomic) NSArray *overlays;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)invalidate;
- (void)_flush;
- (void)invalidateRect:(const CDStruct_d2b197d1 *)arg1 level:(long long)arg2;
- (void)_queueDraw:(const struct VKTileKey *)arg1;
- (_Bool)cancelFetchForKey:(const struct VKTileKey *)arg1;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1 sourceKey:(const struct VKTileKey *)arg2;
- (_Bool)maximumZoomLevelBoundsCamera;
- (_Bool)minimumZoomLevelBoundsCamera;
- (long long)maximumDownloadZoomLevel;
- (long long)minimumDownloadZoomLevel;
- (long long)tileSize;
- (_Bool)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (void)dealloc;
- (id)init;

@end

