/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVMultiMoveWithFallbackTaskGroup.h"

@class NSDictionary, NSMutableDictionary;

@interface CalDAVMultiMoveWithFallbackTaskGroup : CoreDAVMultiMoveWithFallbackTaskGroup
{
    NSDictionary *_sourceEntityScheduleTags;
    _Bool _isAutoScheduleSupported;
    NSMutableDictionary *_destinationEntityScheduleTags;
}

@property(readonly) _Bool isAutoScheduleSupported; // @synthesize isAutoScheduleSupported=_isAutoScheduleSupported;
@property(readonly, nonatomic) NSMutableDictionary *destinationEntityScheduleTags; // @synthesize destinationEntityScheduleTags=_destinationEntityScheduleTags;
@property(readonly, nonatomic) NSDictionary *sourceEntityScheduleTags; // @synthesize sourceEntityScheduleTags=_sourceEntityScheduleTags;
- (void)_completedPropFindTask:(id)arg1 intermediateETag:(id)arg2 intermediateScheduleTag:(id)arg3 destinationFilename:(id)arg4;
- (void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(id)arg3;
- (void)dealloc;
- (id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(_Bool)arg3 useFallback:(_Bool)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 sourceEntityScheduleTags:(id)arg8 accountInfoProvider:(id)arg9 taskManager:(id)arg10 isAutoScheduleSupported:(_Bool)arg11;

@end

