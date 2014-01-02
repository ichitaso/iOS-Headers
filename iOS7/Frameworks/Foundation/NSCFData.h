/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSMutableData.h"

// Not exported
@interface NSCFData : NSMutableData
{
    unsigned char _cfinfo[4];
    unsigned int _rc;
    long long _length;
    long long _capacity;
    struct __CFAllocator *_bytesDeallocator;
    char *_bytes;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void *)mutableBytes;
- (const void *)bytes;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (unsigned long long)retainCount;
- (_Bool)retainWeakReference;
- (_Bool)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

