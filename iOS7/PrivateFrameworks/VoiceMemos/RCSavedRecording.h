/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSManagedObject.h"

#import "UIActivityItemSource-Protocol.h"

@class AVItem, NSDate, NSString, NSURL;

@interface RCSavedRecording : NSManagedObject <UIActivityItemSource>
{
    AVItem *_avItem;
    NSString *_path;
}

+ (id)localizedStringForRecordingLabel:(long long)arg1;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)_activityURLCreateIfNecessary:(_Bool)arg1;
@property(nonatomic, getter=isBeingMade) _Bool beingMade; // @dynamic beingMade;
@property(readonly, nonatomic) AVItem *avItem;
@property(readonly, nonatomic) NSString *detailLabel;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic, getter=isSynced) _Bool synced;
@property(nonatomic, getter=isPendingRestore) _Bool pendingRestore; // @dynamic pendingRestore;
@property(nonatomic) long long iTunesPersistentID;
@property(nonatomic) long long labelPreset;
@property(nonatomic) double duration;
- (void)willSave;
- (void)awakeFromFetch;
- (void)awakeFromInsert;

// Remaining properties
@property(copy, nonatomic) NSString *customLabel; // @dynamic customLabel;
@property(copy, nonatomic) NSDate *date; // @dynamic date;

@end

