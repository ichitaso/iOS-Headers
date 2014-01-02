/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIStatusBar, _UIBackdropView;

@interface ADVideoAdOverlayView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _fullscreen;
    _Bool _titleActivityIndicatorVisible;
    _Bool _barsVisible;
    _Bool _skipButtonCountingDown;
    id <ADVideoAdOverlayViewDelegate> _delegate;
    UIButton *_moreButton;
    UILabel *_titleLabel;
    _UIBackdropView *_topBarView;
    UIStatusBar *_statusBar;
    UIButton *_doneButton;
    UIActivityIndicatorView *_titleActivityIndicator;
    UIImageView *_bottomBarView;
    UIButton *_skipButton;
    UILabel *_skipLabel;
    double _startEnablingSkipTime;
    double _skipDuration;
    UIImageView *_isolatedBrandingView;
    UIImageView *_toolbarSynchronizedBrandingView;
}

@property(retain, nonatomic) UIImageView *toolbarSynchronizedBrandingView; // @synthesize toolbarSynchronizedBrandingView=_toolbarSynchronizedBrandingView;
@property(retain, nonatomic) UIImageView *isolatedBrandingView; // @synthesize isolatedBrandingView=_isolatedBrandingView;
@property(nonatomic) double skipDuration; // @synthesize skipDuration=_skipDuration;
@property(nonatomic) double startEnablingSkipTime; // @synthesize startEnablingSkipTime=_startEnablingSkipTime;
@property(nonatomic) UILabel *skipLabel; // @synthesize skipLabel=_skipLabel;
@property(nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(nonatomic) _Bool skipButtonCountingDown; // @synthesize skipButtonCountingDown=_skipButtonCountingDown;
@property(nonatomic) UIImageView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(nonatomic) UIActivityIndicatorView *titleActivityIndicator; // @synthesize titleActivityIndicator=_titleActivityIndicator;
@property(nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(nonatomic) _UIBackdropView *topBarView; // @synthesize topBarView=_topBarView;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) _Bool barsVisible; // @synthesize barsVisible=_barsVisible;
@property(nonatomic) _Bool titleActivityIndicatorVisible; // @synthesize titleActivityIndicatorVisible=_titleActivityIndicatorVisible;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) id <ADVideoAdOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)accessibilityPerformEscape;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_singleTapGestureRecognized:(id)arg1;
- (void)_skipButtonTapped:(id)arg1;
- (void)_moreButtonTapped:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (_Bool)isSkipButtonCountingDownOrEnabled;
- (void)startEnablingSkipButtonWithCountdownDuration:(double)arg1 completionHandler:(id)arg2;
- (void)updateSkipLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

