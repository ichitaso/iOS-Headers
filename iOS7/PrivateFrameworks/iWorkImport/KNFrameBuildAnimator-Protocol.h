/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "KNAnimationPluginFrameRendering-Protocol.h"

@protocol KNFrameBuildAnimator <KNAnimationPluginFrameRendering>
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;

@optional
+ (_Bool)requiresSingleTexturePerStage;
+ (unsigned long long)maxChunkCountToAnimate;
@end

