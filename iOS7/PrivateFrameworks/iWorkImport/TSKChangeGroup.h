/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray;

// Not exported
@interface TSKChangeGroup : NSObject <NSCopying>
{
    NSMutableArray *mChangesArray;
}

@property(readonly, nonatomic) NSMutableArray *changesArray; // @synthesize changesArray=mChangesArray;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

