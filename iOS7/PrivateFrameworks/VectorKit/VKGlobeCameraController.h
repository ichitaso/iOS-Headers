/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKMapCameraController.h>

#import "VKCameraControllerDelegate-Protocol.h"

@class VKAnimation, VKGlobeAnnotationTrackingCameraController;

// Not exported
@interface VKGlobeCameraController : VKMapCameraController <VKCameraControllerDelegate>
{
    struct GlobeView *_globeView;
    VKGlobeAnnotationTrackingCameraController *_globeAnnotationTrackingCameraController;
    id <VKMotionProvider> _motionProvider;
    _Bool _motionActive;
    VKAnimation *_wiggleAnimation;
    VKAnimation *_positionAnimation;
    VKAnimation *_motionAnimation;
    VKAnimation *_decelerationAnimation;
    VKAnimation *_regionAnimation;
    struct CameraManager _cameraManager;
    double _currentDoublePanPitch;
    _Bool _isPitching;
    _Bool _isRotating;
}

@property(nonatomic) struct GlobeView *globeView; // @synthesize globeView=_globeView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(_Bool)arg2;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(_Bool)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraControllerDidStopRegionAnimation:(id)arg1 completed:(_Bool)arg2;
- (void)cameraControllerWillStartRegionAnimation:(id)arg1;
- (void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;
- (void)runAnimation:(id)arg1;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id)arg5;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(_Bool)arg4 completion:(id)arg5;
- (double)zoomForMapRegion:(id)arg1;
- (id)mapRegionOfInterest;
- (id)mapRegion;
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;
- (double)presentationYaw;
- (double)yaw;
- (double)pitch;
- (void)updateCameraManager;
- (_Bool)isAnimatingToTrackAnnotation;
- (void)didAnimateInAnnotationMarkers:(id)arg1;
- (void)willAnimateInAnnotationMarkers:(id)arg1;
- (_Bool)isTrackingHeading;
- (id)trackingAnnotation;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setGesturing:(_Bool)arg1;
- (void)_performMotionAnimation;
- (void)_animateToStartPosition;
- (void)stopMotion;
- (void)startWithMotionProvider:(id)arg1;
- (void)_stopAnimations;
@property(readonly, nonatomic, getter=isMotionActive) _Bool motionActive;
- (_Bool)isFullyPitched;
- (_Bool)isPitched;
- (_Bool)canEnter3DMode;
- (void)exit3DMode;
- (void)enter3DMode;
- (void)stopGlobeAnimations;
- (void)stopPlaceCardAnimation;
- (void)showPlaceCardAnimationAtCoordinate:(CDStruct_c3b9c2ee)arg1 andDistance:(double)arg2;
- (void)stopSearchResultAnimation;
- (void)_rotateAroundTargetWithDuration:(double)arg1 rotations:(double)arg2;
- (void)showSearchResultAnimationAtCoordinate:(CDStruct_c3b9c2ee)arg1 withZoom:(double)arg2;
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(id)arg6 completion:(void)arg7;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(id)arg5;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(id)arg3;
- (void)tiltTo:(double)arg1 animated:(_Bool)arg2 exaggerate:(_Bool)arg3;
- (void)rotateTo:(double)arg1 animated:(_Bool)arg2;
- (void)snapMapIfNecessary:(const struct VKPoint *)arg1 animated:(_Bool)arg2;
- (void)stopPinching:(struct CGPoint)arg1;
- (void)pinch:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinching:(struct CGPoint)arg1;
- (void)stopPanning:(struct CGPoint)arg1;
- (void)pan:(struct CGPoint)arg1;
- (void)startPanning:(struct CGPoint)arg1;
- (void)stopPitching:(struct CGPoint)arg1;
- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)startPitching:(struct CGPoint)arg1;
- (void)stopRotating:(struct CGPoint)arg1;
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)startRotating:(struct CGPoint)arg1;
- (struct Vector2i)_cursorFromScreenPoint:(struct CGPoint)arg1;
- (struct CGPoint)_centerScreenPoint;
- (void)updateGlobeFromCamera;
- (long long)maximumNormalizedZoomLevel;
- (long long)minimumNormalizedZoomLevel;
- (long long)tileSize;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
- (void)setAnnotationTrackingZoomStyle:(long long)arg1;
@property(readonly, nonatomic) double pitchThreshold;
- (_Bool)restoreViewportFromInfo:(id)arg1;
- (_Bool)currentZoomLevelAllowsRotation;
- (void)dealloc;
- (id)init;

@end

