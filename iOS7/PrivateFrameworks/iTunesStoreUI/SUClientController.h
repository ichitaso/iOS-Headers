/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "SUClientInterfaceDelegate-Protocol.h"
#import "SUPurchaseManagerDelegate-Protocol.h"

@class ISURLOperationPool, MFMailComposeViewController, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SUClientInterface, SUImageCache, SUScriptExecutionContext, UIViewController;

@interface SUClientController : NSObject <SUClientInterfaceDelegate, MFMailComposeViewControllerDelegate, SUPurchaseManagerDelegate>
{
    _Bool _active;
    SUClientInterface *_clientInterface;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SUImageCache *_imageCache;
    ISURLOperationPool *_imagePool;
    NSString *_localStoreFrontAtLastSuspend;
    MFMailComposeViewController *_mailComposeViewController;
    struct __CFArray *_offeredAssetTypes;
    NSArray *_overlayConfigurations;
    UIViewController *_rootViewController;
    SUScriptExecutionContext *_scriptExecutionContext;
    NSString *_synchedStoreFrontAtLastSuspend;
    NSMutableDictionary *_urlBagKeys;
    ISURLOperationPool *_imageOperationPool;
}

+ (id)sharedController;
+ (void)setSharedController:(id)arg1;
@property(retain, nonatomic) ISURLOperationPool *imageOperationPool; // @synthesize imageOperationPool=_imageOperationPool;
@property(retain, nonatomic) SUImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)_reloadUserDefaultsFromURLBag;
- (void)_reloadScriptExecutionContextFromURLBag;
- (void)_reloadOverlayConfigurationsFromURLBag;
- (void)_purgeCaches;
- (void)_presentDialog:(id)arg1;
- (id)_newComposeReviewViewControllerForButtonAction:(id)arg1;
- (id)_newAccountViewControllerForButtonAction:(id)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (void)bagDidLoadNotification:(id)arg1;
- (void)_dialogNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)purchaseManagerWillBeginUpdates:(id)arg1;
- (void)purchaseManagerDidEndUpdates:(id)arg1;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)clientInterface:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(_Bool)arg3;
- (void)clientInterface:(id)arg1 setStatusBarHidden:(_Bool)arg2 withAnimation:(long long)arg3;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (void)clientInterface:(id)arg1 exitStoreWithReason:(long long)arg2;
- (id)viewControllerFactory;
- (id)userAgent;
- (void)setViewControllerFactory:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)clientIdentifier;
- (id)initWithClientIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool storeFrontDidChangeSinceLastSuspend;
@property(readonly, nonatomic) NSString *storeContentLanguage;
@property(readonly, nonatomic) SUScriptExecutionContext *scriptExecutionContext; // @synthesize scriptExecutionContext=_scriptExecutionContext;
- (_Bool)performActionForDialog:(id)arg1 button:(id)arg2;
- (void)presentMailComposeViewController:(id)arg1 animated:(_Bool)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (_Bool)isComposingEmail;
- (void)dismissMailComposeViewControllerAnimated:(_Bool)arg1;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2 animated:(_Bool)arg3;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)composeEmailByRestoringAutosavedMessage;
- (void)autosaveMessageWithCompletionBlock:(id)arg1;
- (id)URLBagKeyForIdentifier:(id)arg1;
- (void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2;
- (void)setOfferedAssetTypes:(struct __CFArray *)arg1;
- (void)setIgnoresExpectedClientsProtocol:(_Bool)arg1;
@property(copy) SUClientInterface *clientInterface;
- (void)resignActive;
- (_Bool)presentOverlayBackgroundViewController:(id)arg1;
- (void)presentExternalURLViewController:(id)arg1;
- (_Bool)presentAccountViewController:(id)arg1 showNavigationBar:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)presentAccountViewController:(id)arg1 animated:(_Bool)arg2;
- (id)overlayConfigurationForStorePage:(id)arg1;
- (id)overlayBackgroundViewController;
- (_Bool)openURL:(id)arg1 inClientWithIdentifier:(id)arg2;
- (_Bool)openURL:(id)arg1;
- (_Bool)openClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;
- (_Bool)openClientURL:(id)arg1;
- (struct __CFArray *)offeredAssetTypes;
- (id)newScriptInterface;
- (_Bool)libraryContainsItemIdentifier:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isStoreEnabled) _Bool storeEnabled;
- (_Bool)ignoresExpectedClientsProtocol;
- (void)exitStoreWithReason:(long long)arg1;
- (_Bool)displayClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;
- (_Bool)displayClientURL:(id)arg1;
- (_Bool)dismissTopViewControllerAnimated:(_Bool)arg1;
- (void)dismissOverlayBackgroundViewController;
- (_Bool)composeReviewWithViewController:(id)arg1 animated:(_Bool)arg2;
- (void)cancelAllOperations;
- (void)becomeActive;
- (void)dealloc;
- (id)initWithClientInterface:(id)arg1;
- (id)init;

@end

