/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSException.h"

@class NSString;

// Not exported
@interface _NSCoreDataException : NSException
{
    long long _code;
    NSString *_domain;
}

+ (id)exceptionWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4;
- (id)domain;
- (long long)code;
- (void)_setDomain:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (id)initWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4;

@end

