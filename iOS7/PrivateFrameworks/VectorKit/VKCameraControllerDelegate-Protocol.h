/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol VKCameraControllerDelegate <NSObject>
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(_Bool)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(_Bool)arg2;
- (void)cameraControllerDidStopRegionAnimation:(id)arg1 completed:(_Bool)arg2;
- (void)cameraControllerWillStartRegionAnimation:(id)arg1;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;
- (void)runAnimation:(id)arg1;
@end

