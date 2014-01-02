/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class Decomposer, Player;

@interface WordsSpeaker : NSObject
{
    Decomposer *_matcher;
    Player *_player;
}

- (void)stopAllSounds;
- (_Bool)playSoundsForWords:(id)arg1;
@property(readonly, nonatomic) _Bool isPlaying; // @dynamic isPlaying;
- (id)initWithGender:(id)arg1 language:(id)arg2;

@end

