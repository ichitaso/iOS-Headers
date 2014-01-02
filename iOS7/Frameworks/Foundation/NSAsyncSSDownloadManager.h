/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SSDownloadManagerObserver-Protocol.h"

@class NSMutableDictionary, NSOperationQueue, SSDownloadManager;

@interface NSAsyncSSDownloadManager : NSObject <SSDownloadManagerObserver>
{
    SSDownloadManager *_manager;
    NSOperationQueue *_queue;
    NSMutableDictionary *_downloads;
    _Bool _reconnectInProgress;
}

- (void)downloadHandlerDisconnected:(_Bool)arg1;
- (void)_attemptReconnect;
- (void)addDownload:(id)arg1 completionBlock:(id)arg2;
- (void)addDownloads:(id)arg1 completionBlock:(id)arg2;
- (void)finishDownload:(long long)arg1;
- (void)withDownloadMatchingIdentifier:(id)arg1 perform:(id)arg2;
- (void)cancelDownload:(long long)arg1 completionBlock:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)withDownload:(long long)arg1 performAsync:(id)arg2;
- (void)withDownload:(long long)arg1 perform:(id)arg2;
- (void)addOperationWithBlock:(id)arg1;
- (void)setDelegate:(id)arg1 forDownload:(long long)arg2;
- (void)dealloc;
- (id)initWithDownloadManager:(id)arg1;

@end

