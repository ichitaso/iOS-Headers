/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "WebBookmarksXPCConnectionDelegate-Protocol.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, WebBookmarksXPCConnection;

@interface SSReadingList : NSObject <WebBookmarksXPCConnectionDelegate>
{
    WebBookmarksXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_xpc_object> *_batchedReadingListItems;
    _Bool _batchScheduled;
}

+ (id)defaultReadingList;
+ (_Bool)supportsURL:(id)arg1;
- (_Bool)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)_init;
- (id)init;
- (void)_sendBatchedReadingListItems;
- (void)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;

@end

