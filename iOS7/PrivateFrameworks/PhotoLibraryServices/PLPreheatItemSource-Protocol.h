/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PLPreheatItemSource <NSObject>
- (id)preheatItemForAsset:(id)arg1 options:(unsigned int)arg2;

@optional
- (id)imageDataAtIndex:(unsigned long long)arg1 width:(int *)arg2 height:(int *)arg3 bytesPerRow:(int *)arg4 dataWidth:(int *)arg5 dataHeight:(int *)arg6 dataOffset:(int *)arg7;
- (void)preheatImageDataAtIndexes:(id)arg1;
@end

