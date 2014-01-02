/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSMutableArray, UIStatusBarComposedData, UIStatusBarForegroundStyleAttributes, UIStatusBarLayoutManager;

// Not exported
@interface UIStatusBarForegroundView : UIView
{
    _Bool _itemIsEnabled[32];
    UIStatusBarLayoutManager *_layoutManagers[3];
    int _ignoreDataLevel;
    NSMutableArray *_actionAnimationStack;
    UIStatusBarComposedData *_pendedData;
    int _pendedActions;
    long long _idiom;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

@property(readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // @synthesize foregroundStyle=_foregroundStyle;
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setPersistentAnimationsEnabled:(_Bool)arg1;
- (double)edgePadding;
- (_Bool)_tryToPlaceItem:(id)arg1 inItemArray:(id)arg2 layoutManager:(id)arg3 roomRemaining:(double *)arg4 allowSwap:(_Bool)arg5 swappedItem:(id *)arg6;
- (id)_computeVisibleItemsPreservingHistory:(_Bool)arg1;
- (void)_reflowItemViewsWithDuration:(double)arg1 preserveHistory:(_Bool)arg2;
- (void)_cleanUpAfterDataChange;
- (void)_cleanUpAfterSimpleReflow;
- (_Bool)ignoringData;
- (void)stopIgnoringData:(_Bool)arg1;
- (void)startIgnoringData;
- (void)reflowItemViewsForgettingEitherSideItemHistory;
- (void)reflowItemViews:(_Bool)arg1;
- (void)_reflowItemViewsCrossfadingCenterWithDuration:(double)arg1;
- (void)reflowItemViewsCrossfadingCenter:(id)arg1 duration:(double)arg2;
- (void)setStatusBarData:(id)arg1 actions:(int)arg2 animated:(_Bool)arg3;
- (void)_setStatusBarData:(id)arg1 actions:(int)arg2 animated:(_Bool)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 foregroundStyle:(id)arg2;

@end

