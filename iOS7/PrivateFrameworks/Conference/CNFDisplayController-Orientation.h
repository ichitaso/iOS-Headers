/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Conference/CNFDisplayController.h>

@interface CNFDisplayController (Orientation)
- (unsigned long long)_flipAnimationOptionsForOrientation:(long long)arg1;
- (void)_updateLocalVideoOrientationAnimated:(_Bool)arg1;
- (void)_adjustForOrientationAnimated:(_Bool)arg1;
- (void)_adjustForOrientationAnimated:(_Bool)arg1 completion:(id)arg2;
- (struct CGRect)_boundsForRemoteVideoInLocalOrientation:(long long)arg1;
- (struct CGRect)_boundsForLocalMutedViewInLocalOrientation:(long long)arg1;
- (_Bool)_fillRemoteVideoOnScreenWithLocalOrientation:(long long)arg1 remoteAspectRatio:(struct CGSize)arg2;
- (struct CGSize)_normalizedScreenSizeForOrientation:(long long)arg1;
- (void)_adjustCallBarsForOrientation:(long long)arg1;
- (_Bool)_isValidFaceTimeOrientation:(long long)arg1;
- (double)_angleForLocalOrientation:(long long)arg1 remoteOrientation:(long long)arg2;
- (long long)_deviceOrientationForIMAVCameraOrientation:(unsigned int)arg1;
- (unsigned int)_imAVCameraOrientationForDeviceOrientation:(long long)arg1;
- (void)_applyAutoRotationCorrectionForOrientation:(long long)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_deviceOrientationDidChange:(id)arg1;
- (void)_removeDeviceOrientationChangeObserver;
- (void)_addDeviceOrientationChangeObserver;
@end

