/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/SFUZipArchiveOutputStream.h>

@interface SFUZipArchiveOutputStream (Private)
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1;
- (void)writeEndOfCentralDirectoryWithOffset:(long long)arg1;
- (void)writeCentralFileHeaderUsingEntry:(id)arg1 isFirstEntry:(_Bool)arg2;
- (unsigned long long)writeLocalFileHeaderForEntry:(id)arg1;
- (void)coalesceAndTruncateFreeSpace;
- (void)finishEntry;
@end

