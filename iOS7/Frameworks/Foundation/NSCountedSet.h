/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSMutableSet.h"

@interface NSCountedSet : NSMutableSet
{
    id _table;
    void *_reserved;
}

+ (_Bool)supportsSecureCoding;
- (void)dealloc;
- (id)initWithSet:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(_Bool)arg2;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)countForObject:(id)arg1;
- (Class)classForCoder;
- (id)descriptionWithLocale:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;

@end

