/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SADomainCommand.h>

@class NSURL;

@interface SAPhonePlayVoiceMail : SADomainCommand
{
}

+ (id)playVoiceMailWithDictionary:(id)arg1 context:(id)arg2;
+ (id)playVoiceMail;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSURL *voiceMailId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

