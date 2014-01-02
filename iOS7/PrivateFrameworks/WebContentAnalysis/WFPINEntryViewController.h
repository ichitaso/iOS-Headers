/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "WFPINEntryViewControllerProtocol-Protocol.h"

@class NSArray, NSString, NSURL, WFRemotePINEntryViewController, _UIFallbackPresentationViewController;

// Not exported
@interface WFPINEntryViewController : UIViewController <WFPINEntryViewControllerProtocol>
{
    _UIFallbackPresentationViewController *_fallbackPresentationVC;
    NSArray *_windowsWithDisabledRotation;
    UIViewController *_rootViewControllerToUse;
    WFRemotePINEntryViewController *_remoteViewController;
    NSURL *_URL;
    NSString *_pageTitle;
    id _completion;
    id _dismissCompletionHandler;
}

+ (Class)remoteViewControllerClass;
+ (id)serviceViewControllerClassName;
@property(copy, nonatomic) id dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;
- (id)delegate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)hasUIWebViewSubView:(id)arg1;
- (void)presentViewControllerAnimated:(_Bool)arg1 completion:(id)arg2;
- (void)insertRemoteViewController:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 completion:(id)arg3;

@end

