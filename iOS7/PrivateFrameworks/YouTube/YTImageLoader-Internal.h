/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <YouTube/YTImageLoader.h>

@interface YTImageLoader (Internal)
- (id)_locked_loadImageCache:(id)arg1;
- (id)_locked_saveImageCache:(id)arg1;
- (void)_imageLoadFinished:(id)arg1;
- (void)_locked_imageLoadStarted:(id)arg1;
- (void)_postImageLoadedNotification:(id)arg1;
- (void)_setImageData:(id)arg1 videoID:(id)arg2 forURL:(id)arg3 cacheLocked:(_Bool)arg4;
- (void)_loadImageURL:(id)arg1 videoID:(id)arg2;
- (void)_locked_loadImageForURL:(id)arg1 videoID:(id)arg2;
- (_Bool)_locked_URLIsLoading:(id)arg1;
- (void)_startLoader;
- (void)_loadingStatusChanged;
- (void)_postLoadingStatusChanged;
- (void)_mainThread_postLoadingStatusChanged;
@end

