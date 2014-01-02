/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSDetailController.h>

@class NSString, UIBarButtonItem;

@interface DevicePINController : PSDetailController
{
    int _mode;
    int _substate;
    NSString *_oldPassword;
    NSString *_lastEntry;
    _Bool _success;
    id _pinDelegate;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    NSString *_error1;
    NSString *_error2;
    _Bool _hidesNavigationButtons;
}

+ (_Bool)settingEnabled;
@property(nonatomic) _Bool hidesNavigationButtons; // @synthesize hidesNavigationButtons=_hidesNavigationButtons;
@property(nonatomic) id <DevicePINControllerDelegate> pinDelegate; // @synthesize pinDelegate=_pinDelegate;
- (_Bool)success;
- (void)setPane:(id)arg1;
- (struct CGRect)paneFrame;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)pinInstructionsPromptFont;
- (id)pinInstructionsPrompt;
- (void)cancelButtonTapped;
- (void)pinEntered:(id)arg1;
- (void)_slidePasscodeField;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (_Bool)completedInputIsValid:(id)arg1;
- (void)adjustButtonsForPasswordLength:(unsigned long long)arg1;
- (void)_updatePINButtons;
- (void)_showPINConfirmationError;
- (void)_showUnacceptablePINError:(id)arg1 password:(id)arg2;
- (void)_updateUI;
- (void)_updateErrorTextAndFailureCount:(_Bool)arg1;
- (void)_showFailedAttempts;
- (void)suspend;
- (void)performActionAfterPINRemove;
- (void)performActionAfterPINSet;
- (void)performActionAfterPINEntry;
- (_Bool)attemptValidationWithPIN:(id)arg1;
- (void)_setUnblockTime:(double)arg1;
- (_Bool)isBlocked;
- (double)unblockTime;
- (void)_clearBlockedState;
- (void)_setNumberOfFailedAttempts:(int)arg1;
- (int)numberOfFailedAttempts;
- (_Bool)simplePIN;
- (_Bool)requiresKeyboard;
- (int)_getScreenType;
- (struct __CFString *)blockedStateKey;
- (struct __CFString *)blockTimeIntervalKey;
- (struct __CFString *)failedAttemptsKey;
- (struct __CFString *)defaultsID;
- (int)pinLength;
- (_Bool)useProgressiveDelays;
- (_Bool)validatePIN:(id)arg1;
- (void)setPIN:(id)arg1;
- (_Bool)pinIsAcceptable:(id)arg1 outError:(id *)arg2;
- (void)setLastEntry:(id)arg1;
- (void)setOldPassword:(id)arg1;
- (void)dealloc;
- (id)stringsBundle;
- (id)stringsTable;
- (void)_dismiss;
- (struct CGSize)overallContentSizeForViewInPopover;
- (struct CGSize)pinContentSizeForViewInPopover;
- (void)setMode:(int)arg1;
- (void)setSpecifier:(id)arg1;
- (id)init;
- (void)willUnlock;

@end

