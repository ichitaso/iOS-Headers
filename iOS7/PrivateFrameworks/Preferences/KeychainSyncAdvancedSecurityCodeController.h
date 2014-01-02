/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSKeychainSyncViewController.h>

#import "UIAlertViewDelegate-Protocol.h"

@class UIAlertView, UIFont;

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate>
{
    double _cellTextWidth;
    UIFont *_cellFont;
    UIAlertView *_disableRecoveryConfirmationAlert;
    _Bool _showsDisableRecoveryOption;
}

@property(nonatomic) _Bool showsDisableRecoveryOption; // @synthesize showsDisableRecoveryOption=_showsDisableRecoveryOption;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)nextPressed;
- (void)_finishedWithSpecifier:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;
- (void)dealloc;

@end

