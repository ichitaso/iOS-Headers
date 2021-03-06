/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UIDimmingViewDelegate-Protocol.h"
#import <UIKit/UITableViewDataSource-Protocol.h>
#import "UITableViewDelegate-Protocol.h"

@class NSTimer, UIDimmingView, UIInputSwitcherShadowView, UITableView;

@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate>
{
    UITableView *m_table;
    UIInputSwitcherShadowView *m_shadowView;
    UIView *m_selExtraView;
    struct CGRect m_referenceRect;
    float m_pointerOffset;
    BOOL m_scrollable;
    BOOL m_scrolling;
    BOOL m_shouldFade;
    struct CGPoint m_point;
    double m_scrollStartTime;
    int m_scrollDirection;
    NSTimer *m_scrollTimer;
    int m_visibleRows;
    int m_firstVisibleRow;
    int m_mode;
    double dismissDelay;
    UIDimmingView *m_dimmingView;
    double _dismissDelay;
}

@property double dismissDelay; // @synthesize dismissDelay=_dismissDelay;
@property(nonatomic) int mode; // @synthesize mode=m_mode;
- (void)didSelectItemAtIndex:(int)arg1;
- (id)subtitleForItemAtIndex:(int)arg1;
- (id)titleForItemAtIndex:(int)arg1;
- (struct CGSize)preferredSize;
- (int)defaultSelectedIndex;
- (int)numberOfItems;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)indexForIndexPath:(id)arg1;
- (void)selectItemAtPoint:(struct CGPoint)arg1;
- (void)highlightRow:(int)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)autoscrollTimerFired:(id)arg1;
- (void)stopAnyAutoscrolling;
- (void)endScrolling:(id)arg1;
- (void)setNeedsDisplayForTopBottomCells;
- (void)setNeedsDisplayForCell:(id)arg1;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)hide;
- (void)removeFromSuperview;
- (void)fadeWithDelay:(double)arg1;
- (void)fade;
- (void)_delayedFade;
- (void)showAsPopupFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)showAsHUD;
- (void)show;
- (void)dimmingViewWasTapped:(id)arg1;
- (id)dimmingView;
- (void)performShowAnimation;
- (BOOL)isVisible;
- (void)setFrame:(struct CGRect)arg1;
- (id)font;
- (id)subtitleFont;
- (void)applicationWillSuspend:(id)arg1;
- (BOOL)centerPopUpOverKey;
@property(readonly) BOOL usesTable;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

