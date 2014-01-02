/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOActiveTileSet.h>

@interface GEOActiveTileSet (GEOResourceManifestManagerAdditions)
- (void)_resetBestLanguage;
- (id)bestLanguage;
- (id)dataForGenericTileType:(int)arg1;
- (_Bool)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)largestZoomLevelLEQ:(unsigned int)arg1 inRect:(CDStruct_90e2a262)arg2;
- (unsigned int)maximumZoomLevelInRect:(CDStruct_90e2a262)arg1;
- (unsigned int)minimumZoomLevelInRect:(CDStruct_90e2a262)arg1;
@end

