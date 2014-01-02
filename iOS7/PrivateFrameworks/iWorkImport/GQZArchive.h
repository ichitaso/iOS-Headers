/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

// Not exported
@interface GQZArchive : NSObject
{
    NSMutableDictionary *mEntries;
    id <GQZArchiveInputStream> mInput;
    _Bool mIsEncrypted;
    NSString *mFilename;
}

- (id)filename;
- (_Bool)isEncrypted;
- (id)entryNames;
- (id)entryWithName:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(_Bool)arg2;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(_Bool)arg2;

@end

