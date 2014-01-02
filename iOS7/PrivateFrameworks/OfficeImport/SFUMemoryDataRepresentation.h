/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OISFUDataRepresentation.h>

@class NSData;

// Not exported
@interface SFUMemoryDataRepresentation : OISFUDataRepresentation
{
    NSData *mData;
}

- (unsigned long long)readIntoData:(id)arg1;
- (_Bool)hasSameLocationAs:(id)arg1;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;
- (id)bufferedInputStream;
- (id)inputStream;
- (long long)dataLength;
- (_Bool)isReadable;
- (id)data;
- (void)dealloc;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithDataNoCopy:(id)arg1;
- (id)initWithData:(id)arg1;

@end

