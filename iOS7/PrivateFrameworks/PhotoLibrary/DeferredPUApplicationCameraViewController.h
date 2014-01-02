/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibrary/PLApplicationCameraViewController.h>

@class CAMCameraRollSpec, DeferredFrameworkLoader;

@interface DeferredPUApplicationCameraViewController : PLApplicationCameraViewController
{
    CAMCameraRollSpec *_spec;
    DeferredFrameworkLoader *_deferredLoader;
}

@property(retain, nonatomic) DeferredFrameworkLoader *deferredLoader; // @synthesize deferredLoader=_deferredLoader;
@property(retain, nonatomic) CAMCameraRollSpec *spec; // @synthesize spec=_spec;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (_Bool)definesPresentationContext;
- (id)navigationController:(id)arg1 animatorForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerUsingAnimator:(id)arg2;
- (_Bool)_navigationControllerShouldCrossFadeBottomBars:(id)arg1;
- (void)prepareAlbumNavigationControllerForReuse:(id)arg1 withAlbum:(struct NSObject *)arg2;
- (id)newAlbumNavigationControllerForAlbum:(struct NSObject *)arg1;
- (void)dealloc;
- (id)initForCurrentPlatformWithSessionID:(id)arg1 usesCameraLocationBundleID:(_Bool)arg2 startPreviewImmediately:(_Bool)arg3;
- (id)initForCurrentPlatformWithSessionID:(id)arg1 startPreviewImmediately:(_Bool)arg2;
- (id)_initWithSessionID:(id)arg1 usesCameraLocationBundleID:(_Bool)arg2 startPreviewImmediately:(_Bool)arg3;

@end

