/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "TPSuperBottomBarDelegateProtocol-Protocol.h"

@class CNFAlertView, CNFInterfaceOverlayView, CNFStatusBarGradientView, CNFVideoGroupView, IMAVChat, IMAVChatParticipant, NSObject<CNFDisplayControllerDelegate>, NSString, NSTimer, TPAudioDeviceView, TPLCDView, TPSuperBottomBar, UIActivityIndicatorView, UIControl, UIImage, UILabel, UIView, _UIBackdropView;

@interface CNFDisplayController : UIViewController <TPSuperBottomBarDelegateProtocol>
{
    IMAVChat *_currentChat;
    UIControl *_videoGroupView;
    UIView *_localVideoGroupView;
    CNFVideoGroupView *_localVideoContainer;
    UIView *_localVideoView;
    UIView *_localVideoBackView;
    UIView *_localVideoFrameView;
    UIView *_remoteVideoGroupView;
    UIControl *_remoteVideoContainer;
    UIView *_remoteVideoView;
    UIView *_remoteVideoBackView;
    UIView *_localVideoOverlayView;
    UIView *_remoteVideoOverlayView;
    _UIBackdropView *_remoteVideoBackdropView;
    UIView *_localVideoMutedView;
    UIView *_remoteVideoPausedView;
    UIView *_remoteVideoDegradedView;
    UIView *_remoteVideoReconnectingView;
    CNFStatusBarGradientView *_remoteVideoStatusBarGradientView;
    CNFStatusBarGradientView *_localVideoStatusBarGradientView;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_statsHUDTextLabel;
    NSTimer *_statsHUDTimer;
    NSString *_contactName;
    UIImage *_contactImage;
    _Bool _contactNameIsPhoneNumber;
    long long _lastKnownOrientation;
    CNFInterfaceOverlayView *_callBarOverlayView;
    TPLCDView *_topBar;
    TPSuperBottomBar *_bottomBar;
    TPAudioDeviceView *_routeList;
    CNFAlertView *_errorAlert;
    long long _routeListVisible;
    long long _routeListReloadPending;
    NSTimer *_autodismissRouteListTimer;
    _Bool _isShowingFullConferenceDisplay;
    _Bool _isShowingCallWaitingUI;
    _Bool _isShowingLockScreenUI;
    _Bool _isShowingTopBar;
    _Bool _isShowingBottomBar;
    _Bool _isShowingVideoDegradedUI;
    _Bool _isShowingVideoReconnectingUI;
    _Bool _isShowingFailureUI;
    _Bool _waitingForLocalVideoFirstFrame;
    _Bool _supportsAutoRotation;
    _Bool _alwaysVisible;
    _Bool _useLargeTextAndIcons;
    _Bool _useLargePIP;
    _Bool _showsLocalPreviewStatusBarGradient;
    _Bool _userWantsInCallControlsVisible;
    unsigned long long _displayControllerOptions;
    NSObject<CNFDisplayControllerDelegate> *_delegate;
    _Bool _stillAnimatingFromVoiceControl;
    _Bool _callFailedWhileAnimatingFromVoiceControl;
    id _localCameraFlipCompletion;
    CNFInterfaceOverlayView *_hudOverlayView;
}

@property(retain, nonatomic) CNFInterfaceOverlayView *hudOverlayView; // @synthesize hudOverlayView=_hudOverlayView;
@property(copy, nonatomic) id localCameraFlipCompletion; // @synthesize localCameraFlipCompletion=_localCameraFlipCompletion;
@property(retain, nonatomic) TPSuperBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) TPLCDView *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) CNFInterfaceOverlayView *callBarOverlayView; // @synthesize callBarOverlayView=_callBarOverlayView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIView *remoteVideoReconnectingView; // @synthesize remoteVideoReconnectingView=_remoteVideoReconnectingView;
@property(retain, nonatomic) UIView *remoteVideoDegradedView; // @synthesize remoteVideoDegradedView=_remoteVideoDegradedView;
@property(retain, nonatomic) UIView *remoteVideoPausedView; // @synthesize remoteVideoPausedView=_remoteVideoPausedView;
@property(retain, nonatomic) UIView *localVideoMutedView; // @synthesize localVideoMutedView=_localVideoMutedView;
@property(retain, nonatomic) UIView *remoteVideoBackdropView; // @synthesize remoteVideoBackdropView=_remoteVideoBackdropView;
@property(retain, nonatomic) UIView *remoteVideoOverlayView; // @synthesize remoteVideoOverlayView=_remoteVideoOverlayView;
@property(retain, nonatomic) UIView *localVideoOverlayView; // @synthesize localVideoOverlayView=_localVideoOverlayView;
@property(retain, nonatomic) UIView *remoteVideoBackView; // @synthesize remoteVideoBackView=_remoteVideoBackView;
@property(retain, nonatomic) UIView *remoteVideoView; // @synthesize remoteVideoView=_remoteVideoView;
@property(retain, nonatomic) UIControl *remoteVideoContainer; // @synthesize remoteVideoContainer=_remoteVideoContainer;
@property(retain, nonatomic) UIView *remoteVideoGroupView; // @synthesize remoteVideoGroupView=_remoteVideoGroupView;
@property(retain, nonatomic) UIView *localVideoFrameView; // @synthesize localVideoFrameView=_localVideoFrameView;
@property(retain, nonatomic) UIView *localVideoBackView; // @synthesize localVideoBackView=_localVideoBackView;
@property(retain, nonatomic) UIView *localVideoView; // @synthesize localVideoView=_localVideoView;
@property(retain, nonatomic) UIControl *localVideoContainer; // @synthesize localVideoContainer=_localVideoContainer;
@property(retain, nonatomic) UIView *localVideoGroupView; // @synthesize localVideoGroupView=_localVideoGroupView;
@property(retain, nonatomic) UIControl *videoGroupView; // @synthesize videoGroupView=_videoGroupView;
@property(nonatomic) _Bool userWantsInCallControlsVisible; // @synthesize userWantsInCallControlsVisible=_userWantsInCallControlsVisible;
@property(nonatomic) _Bool alwaysVisible; // @synthesize alwaysVisible=_alwaysVisible;
@property(nonatomic) _Bool supportsAutoRotation; // @synthesize supportsAutoRotation=_supportsAutoRotation;
@property(readonly, nonatomic) _Bool contactNameIsPhoneNumber; // @synthesize contactNameIsPhoneNumber=_contactNameIsPhoneNumber;
@property(retain, nonatomic) UIImage *contactImage; // @synthesize contactImage=_contactImage;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(nonatomic) id <CNFDisplayControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IMAVChat *currentChat; // @synthesize currentChat=_currentChat;
- (void)fakeVideoDegradedNotification;
- (void)fakeNoRemotePacketsNotification;
- (void)_avVideoStalledDidChange:(id)arg1;
- (void)_avVideoQualityDidChange:(id)arg1;
- (void)_avRemotePauseDidChange:(id)arg1;
- (void)_avRemoteScreenDidChange:(id)arg1;
- (void)_avRemoteVideoDidChange:(id)arg1;
- (void)_avFirstRemoteFrameArrived:(id)arg1;
- (void)_avFirstPreviewFrameArrived:(id)arg1;
- (_Bool)isShowingBottomBar;
- (_Bool)isShowingTopBar;
- (_Bool)isShowingFailureUI;
- (_Bool)isShowingCallWaiting;
- (_Bool)isShowingLock;
- (_Bool)isShowingFaceTimeUI;
- (void)animateShowUnlocked;
- (void)didFinishLocking;
- (void)showLockedAnimated:(_Bool)arg1 contactImage:(id)arg2 lockScreenImageView:(id)arg3 withCompletion:(id)arg4;
- (void)setLocalCameraType:(unsigned int)arg1 withCompletion:(id)arg2;
- (void)toggleLocalCameraType;
- (void)showRemoteViewAsReconnecting:(_Bool)arg1;
- (void)showRemoteViewAsDegraded:(_Bool)arg1;
- (void)showRemoteViewAsPaused:(_Bool)arg1;
- (void)showLocalViewAsMuted:(_Bool)arg1;
- (id)_viewWithActivityIndicatorAndTitle:(id)arg1 bounds:(struct CGRect)arg2 center:(struct CGPoint)arg3;
- (id)_viewWithTitle:(id)arg1 message:(id)arg2 bounds:(struct CGRect)arg3 center:(struct CGPoint)arg4;
- (id)_viewWithImage:(id)arg1 title:(id)arg2 bounds:(struct CGRect)arg3 center:(struct CGPoint)arg4;
- (id)_viewWithCenteredTitle:(id)arg1 bounds:(struct CGRect)arg2 center:(struct CGPoint)arg3;
- (id)_viewWithCenteredImage:(id)arg1 title:(id)arg2 fontSize:(double)arg3 bounds:(struct CGRect)arg4 center:(struct CGPoint)arg5;
- (void)_ensureRemoteVideoOverlayViewExistsForDegradedView;
- (void)_ensureRemoteVideoBackdropViewExists;
- (void)_ensureRemoteVideoOverlayViewExists;
- (void)_ensureLocalVideoOverlayViewExists;
- (void)setAudioDevicesButtonSelected:(_Bool)arg1;
- (void)setMuteButtonSelected:(_Bool)arg1;
- (void)resumeFromCallWaitingAnimated:(_Bool)arg1;
- (void)prepareForCallWaitingAnimated:(_Bool)arg1;
- (void)resetToFullScreenPreview;
- (void)returnToFullScreenPreviewWithAnimations:(id)arg1 completion:(void)arg2;
- (void)returnToFullScreenPreviewWithDuration:(double)arg1 animations:(id)arg2 completion:(void)arg3;
- (void)animateOutWithAnimations:(id)arg1 completion:(void)arg2;
- (_Bool)shouldPerformCleanupCompletion;
- (void)hideInCallUIWithDuration:(double)arg1 animations:(id)arg2 completion:(void)arg3;
- (void)returnToInCallUIWithDuration:(double)arg1 animations:(id)arg2 completion:(void)arg3;
- (void)stopPreview;
- (void)startPreview;
- (void)updateViewControllerForOrientation:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)_applicationResumed:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)updateAudioButton:(_Bool)arg1;
- (void)showInCallControlsAnimated:(_Bool)arg1;
- (_Bool)auxiliaryAudioRoutesAvailable;
- (void)_resetDisplayControllerForNewFaceTimeCall;
- (void)bottomBarActionPerformed:(int)arg1 fromBar:(id)arg2;
- (void)handleThreeFingerPress:(id)arg1;
- (void)resetStatsHUDTimer;
- (void)setupStatsHUDTimer;
- (void)_updateStatsHUD;
- (void)_createStatsHUD;
- (void)_flipRemoteCameraViewToCameraType:(unsigned int)arg1 animated:(_Bool)arg2 withCompletion:(id)arg3;
- (void)_flipLocalCameraViewToCameraType:(unsigned int)arg1 animated:(_Bool)arg2 withCompletion:(id)arg3;
- (void)updateCallBarStatusAndNameAnimated:(_Bool)arg1;
- (void)updateContactInfoForOriginationURL:(id)arg1;
- (void)setStatusForState:(unsigned int)arg1 animated:(_Bool)arg2;
- (void)setStatus:(int)arg1 animated:(_Bool)arg2;
- (void)updateStatusAnimated:(_Bool)arg1;
- (_Bool)shouldHideStatusBar;
- (void)_teardownVideoLayers;
- (void)_setupVideoLayers;
- (void)_ensureVideoLayersExist;
- (void)changeToFullConferenceDisplayAnimated:(_Bool)arg1;
- (_Bool)shouldBeInFullConferenceDisplay;
- (_Bool)isShowingFullConferenceDisplay;
- (void)_syncSublayerFrameSizeToParent:(id)arg1 withDuration:(double)arg2;
- (void)showRemoteHangUp;
- (void)showLocalHangup;
- (void)showCallFailedWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showLocationErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showDateAndTimeErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showNetworkErrorAlertWithTitle:(id)arg1 message:(id)arg2 supportsWLAN:(_Bool)arg3;
- (void)showWifiErrorAlertWithTitle:(id)arg1 message:(id)arg2 supportsWLAN:(_Bool)arg3;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2 alternateButton:(id)arg3 alternateButtonURL:(id)arg4;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2 alternateButton:(id)arg3 alternateButtonURL:(id)arg4 otherButton:(id)arg5 otherButtonURL:(id)arg6;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)postUserNotificationWithTitle:(id)arg1 message:(id)arg2;
- (void)_animateFromVoiceControlWithName:(id)arg1 andSubtitle:(id)arg2;
- (void)_showErrorUIWithStatus:(id)arg1 showDoubleBottomBar:(_Bool)arg2 animateOut:(_Bool)arg3;
- (void)_updateStatusLabel;
- (id)_defaultStringForEndedReason:(unsigned int)arg1 error:(int)arg2;
- (void)_delayedEndFaceTimeDisplayAnimation;
- (void)_endFaceTimeDisplayAnimation;
- (void)_deselectEndVideoButton;
- (void)_selectEndVideoButton;
- (void)_endCallBarDisplayAnimation;
- (void)_didFinishAnimatingEndCall;
- (void)_animateEndCallUIForCallBars;
- (void)_disableBottomBarButtonAndAnimateOutCallBars;
- (void)_updateStatusAndAnimateOutCallBars;
- (void)showAcceptCallBarsAnimated:(_Bool)arg1 callBarsOffscreen:(_Bool)arg2 wasLocked:(_Bool)arg3 wasCallWaiting:(_Bool)arg4;
- (void)showCallBarsAnimated:(_Bool)arg1;
- (void)_hideExistingUI;
- (void)_removeErrorAlert;
- (void)_removeOverlayViews;
- (void)autoFadeOutBottomBar;
- (void)_hideBottomBar;
- (void)_showBottomBar;
- (void)_hideTopBar;
- (void)_showTopBar;
- (void)_teardownCallBars;
- (void)_setupCallBars;
- (void)_dissociateVideoLayers;
- (void)_dissociateRemoteVideoLayersForParticipant:(id)arg1;
- (void)associateRemoteVideoLayers;
- (void)associateLocalVideoLayers;
- (void)_endVideoAction:(id)arg1;
- (_Bool)_isOutgoingInvitation;
- (_Bool)_isInPhoneCall;
- (_Bool)_useLargeTextAndIcons;
- (_Bool)_supportsAutoRotation;
- (_Bool)_showsLocalPreviewStatusBarGradient;
- (_Bool)_shouldChangeBottomBar;
- (_Bool)_shouldChangeStatusBar;
- (_Bool)_showsFullFaceTimeUI;
- (_Bool)shouldDisableEdgeClip;
@property(readonly, nonatomic) IMAVChatParticipant *remoteParticipant;
- (void)setupDisplayControllerForIMAVChat:(id)arg1;
- (void)prepareForIncomingFaceTime;
- (_Bool)hidePIPWithOverlays;
- (_Bool)supportsBackFacingCamera;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 options:(unsigned long long)arg2;

@end

