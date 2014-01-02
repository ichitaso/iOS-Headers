/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLSortedAlbumList;

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification
{
    PLSortedAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_backingNotification;
}

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;
- (id)_changedObjects;
- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (id)description;
- (_Bool)countDidChange;
- (_Bool)shouldReload;
- (id)albumList;
- (id)object;
- (void)dealloc;
- (id)initWithSortedAlbumList:(id)arg1 albumListChangeNotification:(id)arg2;
- (id)init;

@end

