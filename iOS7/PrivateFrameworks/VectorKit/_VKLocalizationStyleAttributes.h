/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver-Protocol.h"

@class NSDictionary;

// Not exported
@interface _VKLocalizationStyleAttributes : NSObject <GEOResourceManifestTileGroupObserver>
{
    struct _opaque_pthread_mutex_t _lock;
    NSDictionary *_localizationToAttributeValue;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (int)styleAttributeValueForLocalization:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)dealloc;
- (id)init;

@end

