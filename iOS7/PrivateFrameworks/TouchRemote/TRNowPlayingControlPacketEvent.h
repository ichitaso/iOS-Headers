/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TouchRemote/TRPacketEvent.h>

@interface TRNowPlayingControlPacketEvent : TRPacketEvent
{
    long long _controlCommand;
}

+ (unsigned int)_packetEventType;
@property(readonly, nonatomic) long long controlCommand; // @synthesize controlCommand=_controlCommand;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)description;
- (id)initWithControlCommand:(long long)arg1;

@end

