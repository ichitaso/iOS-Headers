/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MRMarimbaLayer.h>

#import "MRMarimbaPlayback-Protocol.h"

@interface MRMarimbaLayer (MRMarimbaPlaybackSupport) <MRMarimbaPlayback>
- (void)_postNotificationForSlideChange:(id)arg1;
- (void)_slideDidAppear:(id)arg1;
- (void)gotoSlide:(id)arg1;
- (void)gotoPreviousSlide;
- (void)gotoNextSlide;
- (void)removeEffectContainersBeforeTime:(double)arg1;
- (id)currentSlide;
- (id)currentSlides;
- (void)watcherThread:(id)arg1;
- (void)callbackThread:(id)arg1;
- (long long)_mainLayerIndex;
- (id)_effectContainerForTime:(double)arg1;
- (id)_firstEffectContainer;
- (void)whenTransitionIsFinishedSendAction:(SEL)arg1 toTarget:(id)arg2;
- (_Bool)isInTransition;
- (id)_currentEffectContainer;
- (id)_currentEffectLayer;
- (void)moveToSubtitleForSlide:(id)arg1;
- (void)moveToTitleSlide;
- (void)moveToPreviousEffectContainer;
- (void)moveToNextEffectContainer;
- (void)moveToEffectContainer:(id)arg1 withStartOffset:(double)arg2 toStopOffset:(double)arg3 blocking:(_Bool)arg4;
- (id)displayedEffectContainers;
- (double)relativeTimeForLayer:(id)arg1;
- (double)relativeTimeForBackgroundAudio;
- (double)relativeTime;
@end

