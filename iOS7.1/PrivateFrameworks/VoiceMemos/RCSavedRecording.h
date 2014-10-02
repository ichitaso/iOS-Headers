//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "UIActivityItemSource.h"

@class AVItem, NSDate, NSString, NSURL;

@interface RCSavedRecording : NSManagedObject <UIActivityItemSource>
{
    AVItem *_avItem;
    NSString *_path;
}

+ (id)localizedStringForRecordingLabel:(int)arg1;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)_activityURLCreateIfNecessary:(BOOL)arg1;
@property(nonatomic, getter=isBeingMade) BOOL beingMade; // @dynamic beingMade;
- (id)_inProgressBeingMadeLockfilePath;
- (id)_temporaryDirectoryCreateIfNecessary:(BOOL)arg1;
@property(readonly, nonatomic) AVItem *avItem;
@property(readonly, nonatomic) NSString *detailLabel;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic, getter=isSynced) BOOL synced;
@property(nonatomic, getter=isPendingRestore) BOOL pendingRestore; // @dynamic pendingRestore;
@property(nonatomic) long long iTunesPersistentID;
@property(nonatomic) int labelPreset;
@property(nonatomic) double duration;
- (void)willSave;
- (void)awakeFromFetch;
- (void)awakeFromInsert;

// Remaining properties
@property(copy, nonatomic) NSString *customLabel; // @dynamic customLabel;
@property(copy, nonatomic) NSDate *date; // @dynamic date;

@end
