/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPViewController.h>

@interface MPAbstractAlternateTracksViewController : MPViewController
{
    unsigned long long _selectedTracks[2];
    unsigned long long _previousTracks[2];
}

- (_Bool)_hasSubtitlesGroup;
- (_Bool)_hasAudioGroup;
- (unsigned long long)typeForGroup:(long long)arg1;
- (unsigned long long)indexForGroup:(long long)arg1;
- (id)arrayForGroup:(long long)arg1;
- (unsigned long long)countOfGroups;
- (id)alternateTracks;
- (void)saveChanges;
- (void)removeLoadingUI;
- (void)addLoadingUI;
- (void)reloadData;
- (void)_alternateTypesChangedNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

