/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

@class UIImageView;

@interface PLSlalomRegionEditor : UIControl
{
    UIImageView *_startHandleView;
    UIImageView *_endHandleView;
    UIImageView *_trackImageView;
    UIImageView *_trackSnapshotView;
    _Bool _draggingStart;
    _Bool _draggingEnd;
    double _touchOffset;
    _Bool _zoomed;
    _Bool _trackingZoom;
    struct CGPoint _touchLocationWhenTrackingZoomBegan;
    _Bool _forceLayout;
    double _zoomMinValue;
    double _zoomMaxValue;
    _Bool _zoomAnimating;
    id <PLSlalomRegionEditorDelegate> _delegate;
    double _trimHandleWidth;
    double _minValue;
    double _maxValue;
    double _startValue;
    double _endValue;
    double _zoomDelay;
    struct UIEdgeInsets _trackInsets;
}

@property(nonatomic, getter=isZoomAnimating, setter=setZoomAnimating:) _Bool zoomAnimating; // @synthesize zoomAnimating=_zoomAnimating;
@property(nonatomic) double zoomDelay; // @synthesize zoomDelay=_zoomDelay;
@property(nonatomic) double endValue; // @synthesize endValue=_endValue;
@property(nonatomic) double startValue; // @synthesize startValue=_startValue;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double trimHandleWidth; // @synthesize trimHandleWidth=_trimHandleWidth;
@property(nonatomic) struct UIEdgeInsets trackInsets; // @synthesize trackInsets=_trackInsets;
@property(nonatomic) id <PLSlalomRegionEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_handleImage;
- (void)_drawCurveWithFlatEndsFromX:(double)arg1 fromY:(double)arg2 toX:(double)arg3 toY:(double)arg4;
- (id)_trackImageForZoom:(_Bool)arg1;
- (void)_updateTrack;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_cancelZoom;
- (void)_zoomPressWasHeld;
- (void)_cancelTrackingZoom;
- (void)_cancelZoomTrackingIfNeccessaryWithTouch:(id)arg1;
- (void)_beginTrackingZoomWithTouch:(id)arg1;
- (void)_updateSlidersWithTouch:(id)arg1;
- (void)_stopTrackingAndSendControlEvents:(unsigned long long)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)_isTouch:(id)arg1 inHandleIsStart:(_Bool)arg2 outTouchOffset:(double *)arg3;
- (double)_valueFromHandleFrame:(struct CGRect)arg1 isStart:(_Bool)arg2;
- (struct CGRect)_handleFrameForValue:(double)arg1 isStart:(_Bool)arg2;
- (double)_trimHandleWidth;
- (double)_trackScale;
- (struct CGRect)_trackFrame;
- (struct CGRect)_trackFrameNoZoom;
- (double)_valueFromEndHandleFrame:(struct CGRect)arg1;
- (double)_valueFromStartHandleFrame:(struct CGRect)arg1;
- (struct CGRect)_endHandleFrame;
- (struct CGRect)_startHandleFrame;
- (_Bool)_isZoomed;
- (double)_zoomMaxValue;
- (double)_zoomMinValue;
- (void)setZoomMinValue:(double)arg1 maxValue:(double)arg2;
- (void)setEndValue:(double)arg1 notify:(_Bool)arg2;
- (void)setStartValue:(double)arg1 notify:(_Bool)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

