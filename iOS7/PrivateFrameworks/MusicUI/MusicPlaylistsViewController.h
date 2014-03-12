/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicUI/MusicTableViewController.h>

#import "MusicPickerOverlayDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSCache, UIAlertView, UITextField;

@interface MusicPlaylistsViewController : MusicTableViewController <MusicPickerOverlayDelegate, UITextFieldDelegate>
{
    UITextField *_newPlaylistAlertTextField;
    id _newPlaylistAlertTextFieldChangeObserver;
    UIAlertView *_newPlaylistAlertView;
    NSCache *_playlistMetadataCache;
    long long _addPlaylistActionIndex;
    long long _geniusPlaylistActionIndex;
}

@property(readonly, nonatomic) long long geniusPlaylistActionIndex; // @synthesize geniusPlaylistActionIndex=_geniusPlaylistActionIndex;
@property(readonly, nonatomic) long long addPlaylistActionIndex; // @synthesize addPlaylistActionIndex=_addPlaylistActionIndex;
@property(retain, nonatomic) NSCache *playlistMetadataCache; // @synthesize playlistMetadataCache=_playlistMetadataCache;
- (void).cxx_destruct;
- (void)_updateCloudPlaylist:(id)arg1;
- (void)_updateActionCellIndexes;
- (id)_playlistTitle;
- (void)_geniusPlaylistAction;
- (void)_addPlaylistAction;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)_isSaveButtonEnabled;
- (void)_updateSaveButtonEnabledState;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)pickerOverlayDidFinish:(id)arg1;
- (void)pickerOverlayRequestsFinish:(id)arg1;
- (void)reloadData;
- (_Bool)music_hasContent;
- (_Bool)MPH_supportsCoverFlow;
- (void)switchToShortcutIdentifier:(id)arg1;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;

@end
