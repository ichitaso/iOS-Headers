/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/SFUDataRepresentation.h>

#import "SFUZipArchiveDataRepresentation-Protocol.h"

@class SFUFileDataRepresentation;

// Not exported
@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation>
{
    SFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}

- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)path;
- (_Bool)hasSameLocationAs:(id)arg1;
- (id)inputStream;
- (_Bool)isEncrypted;
- (long long)dataLength;
- (_Bool)isReadable;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

