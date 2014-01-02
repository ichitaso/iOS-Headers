/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIWindow.h>

#import "NSISEngineDelegate-Protocol.h"

@interface UIWindow (AdditionalLayoutSupport) <NSISEngineDelegate>
- (void)_constraints_subviewWillChangeSuperview:(id)arg1;
- (void)_updateConstraintsAtWindowLevelIfNeeded;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_windowInternalConstraints_centerDidChange;
- (void)_windowInternalConstraints_sizeDidChange;
- (unsigned long long)_expectedWindowInternalConstraintsCount;
- (void)_uiib_invalidateWindowInternalConstraints;
- (void)_invalidateWindowInternalConstraints;
- (id)_centerExpressionInContainer:(id)arg1 vertical:(_Bool)arg2;
- (_Bool)_isLoweringAnchoringConstraints;
- (void)_setIsLoweringAnchoringConstraints:(_Bool)arg1;
- (void)updateConstraints;
@end

