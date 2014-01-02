/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIAppearanceContainer-Protocol.h"
#import "UIDimmingViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegatePrivate-Protocol.h"

@class NSArray, UIBarButtonItem, UIColor, UIDimmingView, UIPanGestureRecognizer, UIView, UIViewController, _UIPopoverLayoutInfo, _UIPopoverView;

@interface UIPopoverController : NSObject <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate, UIAppearanceContainer>
{
    id _delegate;
    UIViewController *_contentViewController;
    UIViewController *_splitParentController;
    _UIPopoverView *_popoverView;
    UIDimmingView *_dimmingView;
    UIView *_layoutConstraintView;
    struct CGRect _targetRectInEmbeddingView;
    UIBarButtonItem *_targetBarButtonItem;
    unsigned long long _requestedArrowDirections;
    unsigned long long _currentArrowDirection;
    long long _popoverBackgroundStyle;
    UIColor *_backgroundColor;
    _UIPopoverLayoutInfo *_preferredLayoutInfo;
    Class _popoverBackgroundViewClass;
    struct CGSize _popoverContentSize;
    struct CGRect _targetRectInDimmingView;
    struct CGRect _embeddedTargetRect;
    long long _popoverControllerStyle;
    _Bool _ignoresKeyboardNotifications;
    UIView *_currentPresentationView;
    struct CGRect _currentPresentationRectInView;
    unsigned long long _originalArrowDirections;
    unsigned int draggingChildScrollViewCount;
    id _target;
    SEL _didEndSelector;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    unsigned long long _toViewAutoResizingMask;
    UIViewController *_slidingViewController;
    UIView *_presentingView;
    unsigned long long _presentationEdge;
    long long _presentationDirection;
    int _presentationState;
    _Bool _didPresentInActiveSequence;
    unsigned long long _slideTransitionCount;
    UIPanGestureRecognizer *_vendedGestureRecognizer;
    UIPanGestureRecognizer *_dimmingViewGestureRecognizer;
    struct {
        unsigned int isPresentingModalViewController:1;
        unsigned int isPresentingActionSheet:1;
        unsigned int wasIgnoringDimmingViewTouchesBeforeScrolling:1;
        unsigned int isInTextEffectsWindow:1;
        unsigned int isEmbeddingInView:1;
        unsigned int embeddedPresentationBounces:1;
    } _popoverControllerFlags;
    _Bool _allowResizePastTargetRect;
    _Bool _dismissesOnRotation;
    _Bool _showsTargetRect;
    _Bool _showsOrientationMarker;
    _Bool _showsPresentationArea;
    _Bool _retainsSelfWhilePresented;
    unsigned long long _popoverArrowDirection;
    struct UIEdgeInsets _popoverLayoutMargins;
}

+ (_Bool)_forceAttemptsToAvoidKeyboard;
+ (struct UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(long long)arg1 andContentViewController:(id)arg2;
+ (Class)_popoverViewClass;
+ (_Bool)_showTargetRectPref;
+ (_Bool)_popoversDisabled;
@property(nonatomic) unsigned long long popoverArrowDirection; // @synthesize popoverArrowDirection=_popoverArrowDirection;
@property(nonatomic, getter=_presentationEdge, setter=_setPresentationEdge:) unsigned long long presentationEdge; // @synthesize presentationEdge=_presentationEdge;
@property(nonatomic, getter=_presentingView, setter=_setPresentingView:) UIView *presentingView; // @synthesize presentingView=_presentingView;
@property(retain, nonatomic) _UIPopoverLayoutInfo *preferredLayoutInfo; // @synthesize preferredLayoutInfo=_preferredLayoutInfo;
@property(nonatomic, getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:) _Bool retainsSelfWhilePresented; // @synthesize retainsSelfWhilePresented=_retainsSelfWhilePresented;
@property(nonatomic) _Bool showsPresentationArea; // @synthesize showsPresentationArea=_showsPresentationArea;
@property(nonatomic) _Bool showsOrientationMarker; // @synthesize showsOrientationMarker=_showsOrientationMarker;
@property(nonatomic) _Bool showsTargetRect; // @synthesize showsTargetRect=_showsTargetRect;
@property(retain, nonatomic) Class popoverBackgroundViewClass; // @synthesize popoverBackgroundViewClass=_popoverBackgroundViewClass;
@property(nonatomic) struct UIEdgeInsets popoverLayoutMargins; // @synthesize popoverLayoutMargins=_popoverLayoutMargins;
@property(nonatomic) _Bool dismissesOnRotation; // @synthesize dismissesOnRotation=_dismissesOnRotation;
@property(nonatomic) _Bool allowResizePastTargetRect; // @synthesize allowResizePastTargetRect=_allowResizePastTargetRect;
@property(retain, nonatomic) UIDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) id <UIPopoverControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_modalAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_modalTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;
- (id)_dimmingView;
- (_Bool)_embedsInView;
- (id)_managingSplitViewController;
- (void)_setManagingSplitViewController:(id)arg1;
- (_Bool)isPresentingOrDismissing;
- (_Bool)_isDismissing;
- (_Bool)_isPresenting;
- (void)_containedViewControllerModalStateChanged;
- (void)_stopWatchingForNotifications;
@property(nonatomic, setter=_setIgnoresKeyboardNotifications:) _Bool _ignoresKeyboardNotifications; // @dynamic _ignoresKeyboardNotifications;
- (void)_stopWatchingForScrollViewNotifications;
- (void)_startWatchingForScrollViewNotifications;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_stopWatchingForWindowRotations;
- (void)_startWatchingForWindowRotations;
- (void)_hostingWindowDidRotate:(id)arg1;
- (void)_hostingWindowWillRotate:(id)arg1;
- (_Bool)_canRepresentAutomatically;
- (void)_stopWatchingForKeyboardNotifications;
- (void)_startWatchingForKeyboardNotificationsIfNecessary;
- (void)_keyboardStateChanged:(id)arg1;
- (void)_moveAwayFromTheKeyboard:(id)arg1;
- (id)_layoutInfoForCurrentKeyboardState;
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;
- (id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2;
- (_Bool)_attemptsToAvoidKeyboard;
- (void)_stopWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_startWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_newViewControllerWasPushed:(id)arg1;
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(_Bool)arg2;
- (void)_newViewControllerWillBePushed:(id)arg1;
- (void)_setGesturesEnabled:(_Bool)arg1;
- (void)_swipe:(id)arg1;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (id)_gestureRecognizerForPresentationFromEdge:(unsigned long long)arg1;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)_dismissPopoverAnimated:(_Bool)arg1 stateOnly:(_Bool)arg2 notifyDelegate:(_Bool)arg3;
- (void)_postludeForDismissal;
- (id)_completionBlockForDismissalWhenNotifyingDelegate:(SEL)arg1;
- (void)_beginMapsTransitionToNewViewController:(id)arg1 arrowDirections:(unsigned long long)arg2 slideDuration:(double)arg3 expandDuration:(double)arg4;
- (void)_beginMapsTransitionToNewViewController:(id)arg1 newTargetRect:(struct CGRect)arg2 inView:(id)arg3 arrowDirections:(unsigned long long)arg4 slideDuration:(double)arg5 expandDuration:(double)arg6;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(long long)arg2 animated:(_Bool)arg3;
- (long long)_popoverBackgroundStyle;
- (void)_setPopoverBackgroundStyle:(long long)arg1;
- (_Bool)_manuallyHandlesContentViewControllerAppearanceCalls;
- (long long)_popoverControllerStyle;
- (void)_performHierarchyCheckOnViewController:(id)arg1;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_layoutDimmingViewForInterfaceOrientationOfHostingWindow:(id)arg1;
- (void)_updateDimmingViewTransformForInterfaceOrientationOfHostingWindow:(id)arg1;
- (double)_dismissalAnimationDuration;
- (double)_presentationAnimationDuration;
- (struct CGSize)_currentPopoverContentSize;
- (id)_splitParentController;
- (void)_setSplitParentController:(id)arg1;
- (void)_setPopoverView:(id)arg1;
- (id)popoverView;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)presentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)_commonPresentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
- (_Bool)_shimPresentSlidingPopoverAnimated:(_Bool)arg1;
- (struct CGPoint)_centerPointForScale:(double)arg1 frame:(struct CGRect)arg2 anchor:(struct CGPoint)arg3;
- (void)_presentPopoverFromRect:(struct CGRect)arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned long long)arg4;
- (void)_presentPopoverFromRect:(struct CGRect)arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 animate:(_Bool)arg5;
- (void)_presentPopoverFromEdge:(unsigned long long)arg1 ofView:(id)arg2 animated:(_Bool)arg3;
- (void)_presentPopoverBySlidingIn:(_Bool)arg1 fromEdge:(unsigned long long)arg2 ofView:(id)arg3 animated:(_Bool)arg4 stateOnly:(_Bool)arg5 notifyDelegate:(_Bool)arg6;
- (void)_invalidateLayoutInfo;
- (void)_resetSlideTransitionCount;
- (void)_incrementSlideTransitionCount:(_Bool)arg1;
- (unsigned long long)_slideTransitionCount;
- (void)_setPresentationState:(int)arg1;
- (int)_presentationState;
- (Class)_defaultChromeViewClass;
- (Class)_popoverLayoutInfoForChromeClass:(Class)arg1;
- (_Bool)_popoverBackgroundViewWantsDefaultContentAppearance;
@property(copy, nonatomic) NSArray *passthroughViews;
@property(copy, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic, getter=isPopoverVisible) _Bool popoverVisible;
- (void)setPopoverContentSize:(struct CGSize)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CGSize popoverContentSize;
- (void)setPopoverFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setContentViewController:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIViewController *contentViewController;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;
- (id)_initWithContentViewController:(id)arg1 popoverControllerStyle:(long long)arg2;
- (id)init;

@end

