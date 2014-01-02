/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIStatusBarForegroundStyleAttributes, UIStatusBarStyleRequest;

// Not exported
@interface UIStatusBarStyleAttributes : NSObject
{
    UIStatusBarStyleRequest *_request;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

- (_Bool)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2;
- (double)glowAnimationDuration;
- (id)newForegroundStyleWithHeight:(double)arg1;
- (double)foregroundAlpha;
- (id)backgroundImageName;
- (id)backgroundColorWithTintColor:(id)arg1;
- (_Bool)shouldUseVisualAltitude;
- (_Bool)isDoubleHeight;
- (_Bool)isTransparent;
- (_Bool)isTranslucent;
- (_Bool)areTopCornersRounded;
- (int)cornerStyle;
- (double)heightForMetrics:(long long)arg1;
- (double)heightForOrientation:(long long)arg1;
- (long long)idiom;
- (id)foregroundStyle;
- (_Bool)supportsRasterization;
- (long long)legibilityStyle;
- (long long)style;
- (void)dealloc;
- (id)init;
- (id)initWithRequest:(id)arg1;

@end

