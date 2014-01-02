/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSString, NSTimer, UIView;

@interface QLDisplayBundle : UIViewController
{
    id <QLPreviewItemInteractionDelegate> _delegate;
    id <QLPreviewItem> _previewItem;
    _Bool _overlayHidden;
    int _previewMode;
    _Bool _loaded;
    _Bool _loading;
    NSString *_password;
    NSTimer *_refreshTimer;
    long long _index;
    CDStruct_0109ef53 clientContext;
}

+ (_Bool)needsAVControls;
+ (double)allowedLoadingDelay;
@property long long index; // @synthesize index=_index;
@property CDStruct_0109ef53 clientContext; // @synthesize clientContext;
@property _Bool loading; // @synthesize loading=_loading;
@property _Bool loaded; // @synthesize loaded=_loaded;
@property id <QLPreviewItemInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)gestureRecognizersForFullScreenDisplay;
- (void)togglePlayState;
- (void)endScrubbing;
- (void)scrubToValue:(double)arg1;
- (void)beginScrubbing;
- (id)printPageHelper;
- (id)printPageRenderer;
- (id)pdfPreviewData;
- (void)setNavigationBarVerticalOffset:(double)arg1;
@property(readonly) struct CGRect contentFrame;
- (void)viewDidUpdate;
- (void)discardAirPlayView;
- (void)setupAirPlayView;
- (void)endTrackingViewUpdates;
- (void)beginTrackingViewUpdates;
@property(readonly) UIView *airplayView;
@property(readonly) UIView *accessoryView;
@property(readonly) int airPlayMode;
- (_Bool)canCopyToPasteboard;
- (_Bool)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)requiresDisplayBundle:(id)arg1 withHints:(id)arg2;
- (void)didFailLoadingWithError:(id)arg1;
- (void)didLoad;
- (void)_notifyDidLoadWithError:(id)arg1;
- (void)cancelLoad;
- (void)_performCancelLoad;
- (void)loadWithHints:(id)arg1;
- (void)enterBackground;
- (_Bool)overlayIsHidden;
- (void)setOverlayHidden:(_Bool)arg1 duration:(double)arg2;
@property int previewMode;
@property(retain) NSString *password;
@property(retain) id <QLPreviewItem> previewItem;
- (void)viewDidAppear:(_Bool)arg1;
- (void)cancelLoadIfNeeded;
- (void)loadIfNeededWithHints:(id)arg1;
- (id)description;
- (long long)modalPresentationStyle;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;
- (_Bool)canBeCached;

@end

