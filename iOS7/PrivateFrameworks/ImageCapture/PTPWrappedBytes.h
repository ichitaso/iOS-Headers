/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PTPWrappedBytes : NSObject
{
    unsigned long long _offset;
    unsigned long long _capacity;
    _Bool _allocatedBytes;
    char *_bytes;
    int _fd;
    _Bool _useByteBuffer;
    unsigned long long _excessDataLength;
    double _progressNotificationTime;
    void *_progressNotifier;
    void *_progressNotifierContext;
    int _lastNotifiedProgress;
}

+ (id)wrappedBytesWithBytes:(void *)arg1 capacity64:(unsigned long long)arg2;
+ (id)wrappedBytesWithCapacity64:(unsigned long long)arg1;
- (id)description;
- (double)percentFull;
- (unsigned long long)excessDataLength;
- (unsigned long long)rewindBytesToPosition64:(unsigned long long)arg1;
- (unsigned long long)appendBytes:(const void *)arg1 length64:(unsigned long long)arg2;
- (unsigned long long)appendData:(id)arg1;
- (unsigned long long)offset;
- (_Bool)wasInitWithFD;
- (void *)mutableBytes;
- (const void *)bytes;
- (void)setLength64:(unsigned long long)arg1;
- (unsigned long long)length64;
- (unsigned long long)setCapacity64:(unsigned long long)arg1;
- (unsigned long long)capacity64;
- (void)dealloc;
- (void)setProgressNotifierCallback:(void *)arg1 context:(void *)arg2;
- (id)initWithFileDescriptor:(int)arg1 capacity64:(unsigned long long)arg2;
- (id)initWithBytes:(void *)arg1 capacity64:(unsigned long long)arg2;
- (id)init;
- (id)initWithCapacity64:(unsigned long long)arg1;

@end

