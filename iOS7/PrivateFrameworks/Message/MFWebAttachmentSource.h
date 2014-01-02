/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject
{
    MFLock *_attachmentsLock;
    NSMutableDictionary *_attachmentsByURL;
    NSMutableDictionary *_removedAttachmentsByURL;
}

+ (id)allSources;
+ (id)_setOfAllSources;
- (void)removeAttachmentForURL:(id)arg1;
- (_Bool)setAttachment:(id)arg1 forURL:(id)arg2;
- (id)attachmentForURL:(id)arg1 includeRemoved:(_Bool)arg2;
- (id)attachmentForURL:(id)arg1;
@property _Bool keepRemovedAttachments;
- (void)dealloc;
- (id)description;
- (id)init;

@end

