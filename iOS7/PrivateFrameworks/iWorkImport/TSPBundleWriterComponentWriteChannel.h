/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSPComponentWriteChannel-Protocol.h"

@class TSUZipFileWriter;

// Not exported
@interface TSPBundleWriterComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    TSUZipFileWriter *_archiveWriter;
    _Bool _isClosed;
}

- (void).cxx_destruct;
- (void)close;
- (void)writeData:(id)arg1;
- (id)initWithArchiveWriter:(id)arg1;

@end

