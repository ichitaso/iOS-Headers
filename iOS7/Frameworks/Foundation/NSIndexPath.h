/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface NSIndexPath : NSObject <NSCopying, NSCoding>
{
    unsigned long long *_indexes;
    unsigned long long _length;
    void *_reserved;
}

+ (id)indexPathWithIndexes:(const unsigned long long *)arg1 length:(unsigned long long)arg2;
+ (id)indexPathWithIndex:(unsigned long long)arg1;
+ (id)indexPath;
+ (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (id)indexPathByAddingIndex:(unsigned long long)arg1;
- (id)indexPathByRemovingLastIndex;
- (void)getIndexes:(unsigned long long *)arg1;
- (void)getIndexes:(unsigned long long *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)indexAtPosition:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithIndexes:(const unsigned long long *)arg1 length:(unsigned long long)arg2;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)init;

@end

