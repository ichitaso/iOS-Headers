/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ACDTCCUtilities : NSObject
{
}

+ (struct __CFString *)_TCCServiceForAccountTypeID:(id)arg1;
+ (_Bool)clearAllTCCStatesForAccountType:(id)arg1;
+ (id)allTCCStatesForAccountType:(id)arg1;
+ (_Bool)clearTCCStateForClient:(id)arg1 accountType:(id)arg2;
+ (_Bool)setTCCStateForClient:(id)arg1 accountType:(id)arg2 toGranted:(_Bool)arg3;
+ (int)TCCStateForClient:(id)arg1 accountType:(id)arg2;
+ (_Bool)TCCSupportedForAccountType:(id)arg1;

@end

