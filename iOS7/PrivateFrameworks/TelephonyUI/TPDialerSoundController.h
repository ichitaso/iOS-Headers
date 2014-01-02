/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface TPDialerSoundController : NSObject
{
    struct __CFSet *_inflightSounds;
    unsigned int _soundsActivated:1;
    unsigned long long _incompleteSoundCount;
}

+ (void)_delayedDeactivate;
@property unsigned long long incompleteSoundCount; // @synthesize incompleteSoundCount=_incompleteSoundCount;
- (void)_stopAllSoundsForcingCallbacks:(_Bool)arg1;
- (void)setSoundsActivated:(_Bool)arg1;
- (void)soundCompletedPlaying:(unsigned int)arg1;
- (void)stopSoundForDialerCharacter:(unsigned int)arg1;
- (void)playSoundForDialerCharacter:(unsigned int)arg1;
- (void)applicationSuspendedNotification:(id)arg1;
- (void)applicationResumedNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

