//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSMutableSet, NSSet, UIGestureRecognizer;

@interface MFComposeScrollView : UIScrollView
{
    UIGestureRecognizer *_singleTapGestureRecognizer;
    NSMutableSet *_disabledSubviews;
    struct CGPoint _tapLocation;
    int _scrollBlocked;
    BOOL _shouldScrollToFirstResponder;
    BOOL _subviewsDisabled;
}

@property(nonatomic) BOOL subviewsDisabled; // @synthesize subviewsDisabled=_subviewsDisabled;
@property(readonly, nonatomic) NSSet *disabledSubviews; // @synthesize disabledSubviews=_disabledSubviews;
@property(nonatomic) BOOL shouldScrollToFirstResponder; // @synthesize shouldScrollToFirstResponder=_shouldScrollToFirstResponder;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)endBlockingScroll;
- (void)beginBlockingScroll;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)enableSubview:(id)arg1;
- (void)disableSubview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

