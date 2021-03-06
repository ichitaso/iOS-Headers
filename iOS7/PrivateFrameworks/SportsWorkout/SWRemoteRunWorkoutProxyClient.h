/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SportsWorkout/SWRunWorkoutProxy.h>

@class NSDictionary, NSString, NSTimer;

@interface SWRemoteRunWorkoutProxyClient : SWRunWorkoutProxy
{
    NSTimer *_updateTimer;
    NSString *_goalType;
    NSString *_presetGoal;
    float _goal;
    NSString *_sensorSearchState;
    NSString *_workoutState;
    NSDictionary *_workoutData;
    _Bool _hasEverStarted;
    _Bool _hasPowerSong;
    NSString *_powerSongName;
    _Bool _shouldControlMusic;
    long long _musicSelection;
    NSString *_currentSongName;
    NSString *_currentAlbumName;
    NSString *_currentArtistName;
}

- (_Bool)hasEverStarted;
- (id)currentArtistName;
- (id)currentAlbumName;
- (id)currentSongName;
- (long long)musicSelection;
- (_Bool)shouldControlMusic;
- (id)powerSongName;
- (_Bool)hasPowerSong;
- (id)workoutData;
- (id)workoutState;
- (id)sensorSearchState;
- (float)goal;
- (id)presetGoal;
- (id)goalType;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)selectNextSong;
- (void)selectPreviousSong;
- (void)playMusic;
- (void)pauseMusic;
- (void)goToNowPlaying;
- (void)playPowerSong;
- (void)playOnDemandPrompt;
- (void)_nowPlayingChanged:(id)arg1;
- (void)endWorkout;
- (void)pauseWorkout;
- (void)activateWorkout;
- (void)prepareToActivateWorkout;
- (void)_checkinWithServer;
- (void)_workoutStateChanged:(id)arg1;
- (void)_sensorSearchStateChanged:(id)arg1;
- (void)_handlePropertyUpdateNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

