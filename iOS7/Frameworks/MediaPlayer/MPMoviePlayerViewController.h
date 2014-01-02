/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController
{
    id _internal;
    _Bool _statusBarWasHidden;
}

- (void).cxx_destruct;
- (void)_moviePlayerViewController_playbackDidFinishNotification:(id)arg1;
- (void)_moviePlayerViewController_applicationDidEnterBackgroundNotification:(id)arg1;
- (_Bool)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (_Bool)_canReloadView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldAutorotate;
- (void)loadView;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (_Bool)canBecomeFirstResponder;
@property(readonly, nonatomic) MPMoviePlayerController *moviePlayer;
- (void)dealloc;
- (id)initWithContentURL:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)init;

@end

