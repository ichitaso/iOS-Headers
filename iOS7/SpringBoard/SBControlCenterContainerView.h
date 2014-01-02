/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "SBControlCenterObserver-Protocol.h"

@class SBChevronView, SBControlCenterContentContainerView;

@interface SBControlCenterContainerView : UIView <SBControlCenterObserver>
{
    UIView *_darkeningView;
    double _revealPercentage;
    SBChevronView *_chevronToTrack;
    SBControlCenterContentContainerView *_contentContainerView;
}

@property(readonly, nonatomic) SBControlCenterContentContainerView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillFinishTransitionOpen:(_Bool)arg1 withDuration:(double)arg2;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)updateBackgroundSettings:(id)arg1;
@property(nonatomic) double revealPercentage;
- (id)_contentChevronView;
- (id)_currentBGColor;
- (void)_updateContentFrame;
- (void)_updateDarkeningFrame;
- (void)trackChevronView:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

