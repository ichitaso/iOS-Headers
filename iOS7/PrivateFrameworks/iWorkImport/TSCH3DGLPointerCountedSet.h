/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSUPointerKeyDictionary;

// Not exported
@interface TSCH3DGLPointerCountedSet : NSObject
{
    TSUPointerKeyDictionary *mSet;
    unsigned long long mCount;
    unsigned long long mByteCount;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=mCount;
- (void)addObject:(id)arg1;
- (id)description;
- (id)descriptionWithFrames:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

