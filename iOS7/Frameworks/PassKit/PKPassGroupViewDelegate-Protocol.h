/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PKPassGroupViewDelegate <NSObject>

@optional
- (long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;
- (id)groupViewReusablePassViewQueue:(id)arg1;
- (_Bool)groupViewPassesSuppressedContent:(id)arg1;
- (_Bool)groupViewPassesGrowCenteredWhenFlipped:(id)arg1;
- (_Bool)groupViewPassesGrowWhenFlipped:(id)arg1;
- (void)groupView:(id)arg1 flipButtonPressedForPass:(id)arg2;
- (_Bool)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)groupViewFrontPassDidFlip:(id)arg1 animated:(_Bool)arg2;
- (_Bool)groupViewShouldAllowPassFlip:(id)arg1;
- (void)groupViewDidUpdatePageControlVisibility:(id)arg1;
- (void)groupView:(id)arg1 panned:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (void)groupViewPanDidEnd:(id)arg1;
- (void)groupViewPanDidBegin:(id)arg1;
- (_Bool)groupViewShouldAllowPanning:(id)arg1;
- (void)groupViewTapped:(id)arg1;
@end

