/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface AVAudioSessionChannelDescription : NSObject
{
    void *_impl;
}

+ (id)privateCreateArray:(id)arg1 portUID:(id)arg2;
+ (id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned int)arg3;
- (struct ChannelDescriptionImpl *)privateGetImplementation;
- (id)description;
@property(readonly) unsigned int channelLabel;
@property(readonly) unsigned long long channelNumber;
@property(readonly) NSString *owningPortUID;
@property(readonly) NSString *channelName;
- (unsigned long long)hash;
- (_Bool)isEqualToChannel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

