/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, UIImage;

// Not exported
@interface _UIImageViewExtendedStorage : NSObject
{
    _Bool _highlighted;
    UIImage *_image;
    UIImage *_highlightedImage;
    NSArray *_animationImages;
    NSArray *_highlightedAnimationImages;
    double _animationDuration;
    long long _animationRepeatCount;
    int _drawMode;
    long long _defaultRenderingMode;
    _Bool _masksTemplateImages;
    unsigned long long _templateImageRenderingEffects;
}

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)dealloc;

@end

