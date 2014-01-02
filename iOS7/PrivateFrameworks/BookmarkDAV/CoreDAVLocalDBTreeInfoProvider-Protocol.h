/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVTaskGroupDelegate-Protocol.h"

@protocol CoreDAVLocalDBTreeInfoProvider <CoreDAVTaskGroupDelegate>
- (void)notePutToURL:(id)arg1 withDataPayload:(id)arg2 finishedWithIgnoredError:(id)arg3;
- (void)recursiveContainerSyncTask:(id)arg1 completedFullSyncWithNewCTag:(id)arg2 newPTag:(id)arg3 newSyncToken:(id)arg4 error:(id)arg5;
- (void)recursiveContainerSyncTask:(id)arg1 completedSyncOfFolderWithURL:(id)arg2 newCTag:(id)arg3 newPTag:(id)arg4 addedOrModified:(id)arg5 removed:(id)arg6 error:(id)arg7;
- (void)recursiveContainerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3;
- (void)recursiveContainerSyncTask:(id)arg1 receivedAddedOrModifiedFolder:(id)arg2;
- (_Bool)setLocalETag:(id)arg1 forItemWithURL:(id)arg2;
- (id)copyAllLocalURLsInFolderWithURL:(id)arg1;
- (id)copyLocalETagsForURLs:(id)arg1;
- (_Bool)getCTag:(id *)arg1 pTag:(id *)arg2 forFolderWithURL:(id)arg3;
@end

