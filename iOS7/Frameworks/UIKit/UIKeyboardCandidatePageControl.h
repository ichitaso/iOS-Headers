/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIKeyboardCandidateBarSegmentControl;

// Not exported
@interface UIKeyboardCandidatePageControl : UIView
{
    UIKeyboardCandidateBarSegmentControl *_pageControl;
    _Bool _usingVerticalArrows;
}

- (void)layoutSubviews;
- (void)updatePageControlWithStatus:(_Bool)arg1 rightControlButtonEnabled:(_Bool)arg2;
- (void)_changePage:(id)arg1;
- (void)setUseVerticalArrows:(_Bool)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

