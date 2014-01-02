/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPMediaDownloadObserver.h>

@class NSMutableArray;

@interface MPMediaCollectionDownloadObserver : MPMediaDownloadObserver
{
    NSMutableArray *_downloadObservers;
    _Bool _callingProgressHandler;
}

- (void).cxx_destruct;
- (void)_callProgressHandler;
- (_Bool)isPurchasing;
- (_Bool)isCurrentlyPlayable;
- (void)invalidate;
- (double)downloadProgress;
- (unsigned long long)downloadsCount;
- (void)dealloc;
- (id)initWithCollection:(id)arg1;

@end

