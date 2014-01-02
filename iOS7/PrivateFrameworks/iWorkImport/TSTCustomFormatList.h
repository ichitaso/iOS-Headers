/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSTTableDataList.h>

@class NSMutableDictionary;

// Not exported
@interface TSTCustomFormatList : TSTTableDataList
{
    NSMutableDictionary *mNamesList;
}

- (id)newUniqueNameFromName:(id)arg1 preserveSeed:(_Bool)arg2;
- (id)newUniqueNameFromName:(id)arg1;
- (void)p_setupNamesList;
- (id)allNumberKeys;
- (unsigned int)maxKey;
- (long long)count;
- (id)customFormatWrapperForKey:(unsigned int)arg1;
- (struct TSUCustomFormat *)customFormatForKey:(unsigned int)arg1;
- (unsigned int)addCustomFormat:(struct TSUCustomFormat *)arg1 withOldKey:(unsigned int)arg2;
- (unsigned int)addCustomFormat:(struct TSUCustomFormat *)arg1 duringImport:(_Bool)arg2;
- (_Bool)supportsIDMapForType:(int)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

