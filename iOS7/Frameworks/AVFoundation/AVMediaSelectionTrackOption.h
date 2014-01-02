/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetTrack, AVWeakReference, NSDictionary;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption
{
    id _groupID;
    AVAssetTrack *_track;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    _Bool _displaysNonForcedSubtitles;
}

- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)locale;
- (_Bool)isPlayable;
- (_Bool)hasMediaCharacteristic:(id)arg1;
- (id)mediaSubTypes;
- (id)mediaType;
- (int)trackID;
- (_Bool)displaysNonForcedSubtitles;
- (id)track;
- (id)_groupID;
- (id)group;
- (id)dictionary;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;

@end

