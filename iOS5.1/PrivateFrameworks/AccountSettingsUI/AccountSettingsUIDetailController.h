/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSListController.h"

@class NSTimer, UIActivityIndicatorView, UIBarButtonItem;

@interface AccountSettingsUIDetailController : PSListController
{
    UIActivityIndicatorView *_progressIndicator;
    NSTimer *_idleJiggleTimer;
    void *_powerAssertion;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    BOOL _addedToTaskList;
    BOOL _validationInProgress;
}

+ (BOOL)shouldPresentAsModalSheet;
- (id)init;
- (BOOL)presentedAsModalSheet;
- (void)viewDidLoad;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)setTaskCompletionEnabled:(BOOL)arg1;
- (void)dealloc;
- (void)dismissWithAnimation:(BOOL)arg1;
- (id)specifiers;
- (void)cancelButtonClicked:(id)arg1;
- (void)doneButtonClicked:(id)arg1;
- (void)startValidationWithPrompt:(id)arg1;
- (void)startValidationWithPrompt:(id)arg1 userInteraction:(BOOL)arg2;
- (void)updateValidationPrompt:(id)arg1;
- (void)stopValidationWithPrompt:(id)arg1 showButtons:(BOOL)arg2;
- (void)stopValidationWithPrompt:(id)arg1 showButtons:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setCellsChecked:(BOOL)arg1;
- (void)reloadParentSpecifier;
- (void)reloadParentSpecifiers;
- (void)removeParentSpecifier;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 cancelButtonIndex:(int)arg5 context:(id)arg6;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 context:(id)arg5;
- (id)confirmDeleteAccountWithDataclasses:(id)arg1 context:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)_alertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonIndex:(int)arg4 context:(id)arg5;
- (id)_actionSheetWithButtons:(id)arg1 title:(id)arg2 destructive:(BOOL)arg3 cancelButtonIndex:(int)arg4 context:(id)arg5;
- (void)_layoutProgressIndicator;
- (void)_jiggleIdleTimer;
- (void)_preventSleepAndDimming:(BOOL)arg1;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;

@end

