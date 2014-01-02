/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSException.h"

@class CPMessageEntry;

// Not exported
@interface CPMessageException : NSException
{
    CPMessageEntry *m_entry;
}

+ (id)nsError:(id)arg1 domain:(id)arg2;
+ (void)raiseUntaggedMessage:(id)arg1;
+ (void)raise:(struct CPTaggedMessageStructure *)arg1;
+ (id)exceptionWithUntaggedMessage:(id)arg1;
+ (id)exceptionWithMessage:(struct CPTaggedMessageStructure *)arg1;
+ (void)initialize;
- (id)description;
- (id)getEntry;
- (void)dealloc;
- (id)initWithUntaggedMessage:(id)arg1;
- (id)initWithMessage:(struct CPTaggedMessageStructure *)arg1;

@end

