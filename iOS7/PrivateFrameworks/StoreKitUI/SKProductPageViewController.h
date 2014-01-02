/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SUViewController.h"

#import "SKUIBannerViewDelegate-Protocol.h"
#import "SKUIIPadProductPageDelegate-Protocol.h"
#import "SKUIIPhoneProductPageDelegate-Protocol.h"
#import "SKUIItemStateCenterObserver-Protocol.h"
#import "SUClientInterfaceDelegatePrivate-Protocol.h"
#import "SUPurchaseManagerDelegate-Protocol.h"

@class NSDictionary, NSURL, SKUIBannerViewController, SKUIClientContext, SKUIIPadProductPageViewController, SKUIIPhoneProductPageViewController, SKUIITunesStoreUIPageViewController, SKUIItemStateCenter, SUBarButtonItem, SUDialogManager, SUPreviewOverlayViewController, SUPurchaseManager;

@interface SKProductPageViewController : SUViewController <SKUIBannerViewDelegate, SKUIIPadProductPageDelegate, SKUIIPhoneProductPageDelegate, SUClientInterfaceDelegatePrivate, SUPurchaseManagerDelegate, SKUIItemStateCenterObserver>
{
    SKUIBannerViewController *_bannerViewController;
    SKUIClientContext *_clientContext;
    id <SKProductPageViewControllerDelegatePrivate> _delegate;
    SUDialogManager *_dialogManager;
    SUBarButtonItem *_gotoStoreButtonItem;
    SKUIIPadProductPageViewController *_ipadProductPageViewController;
    SKUIIPhoneProductPageViewController *_iphoneProductPageViewController;
    NSURL *_nativeURL;
    SUPreviewOverlayViewController *_previewOverlay;
    NSDictionary *_productParameters;
    SUPurchaseManager *_purchaseManager;
    _Bool _showsStoreButton;
    long long _style;
    SKUIITunesStoreUIPageViewController *_storePageViewController;
    SKUIItemStateCenter *_itemStateCenter;
}

+ (void)_validateURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(id)arg3;
+ (id)_defaultClientIdentifier;
+ (id)_defaultClientInterface;
+ (void)getCanLoadWithURL:(id)arg1 completionBlock:(id)arg2;
@property(nonatomic) long long productPageStyle; // @synthesize productPageStyle=_style;
@property(nonatomic) _Bool showsStoreButton; // @synthesize showsStoreButton=_showsStoreButton;
@property(nonatomic) __weak id <SKProductPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showProductPage:(id)arg1 pageEvent:(id)arg2;
- (void)_showPreviewOverlayAnimated:(_Bool)arg1;
- (void)_sendDidFailLoadWithError:(id)arg1;
- (void)_setResponse:(id)arg1 forProperties:(id)arg2 error:(id)arg3;
- (void)_reloadViews;
- (void)_reloadGotoStoreButton;
- (id)_previewOverlay;
- (id)_newRequestPropertiesWithRequest:(id)arg1;
- (void)_loadRequestForProductParameters;
- (void)_loadProductWithRequest:(id)arg1;
- (void)_loadClientContextWithCompletionBlock:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_showPageWithRequest:(id)arg1 animated:(_Bool)arg2;
- (void)_setShowsCancelButton:(_Bool)arg1;
- (void)_sendDidFinishWithResult:(long long)arg1;
- (void)loadWithStorePageRequest:(id)arg1;
- (void)loadWithProductPage:(id)arg1;
- (void)_purchaseFinishedNotification:(id)arg1;
- (void)_purchaseFailedNotification:(id)arg1;
- (void)_gotoStoreButtonAction:(id)arg1;
- (void)itemStateCenter:(id)arg1 didFinishPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 didFinishPurchaseRequest:(id)arg2 withError:(id)arg3;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (id)previewOverlayForClientInterface:(id)arg1;
- (void)clientInterface:(id)arg1 willPresentViewController:(id)arg2;
- (void)clientInterface:(id)arg1 willDismissViewController:(id)arg2;
- (void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(_Bool)arg2;
- (void)clientInterface:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(_Bool)arg3;
- (void)clientInterface:(id)arg1 setStatusBarHidden:(_Bool)arg2 withAnimation:(long long)arg3;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(_Bool)arg2;
- (void)clientInterface:(id)arg1 exitStoreWithReason:(long long)arg2;
- (void)iPadProductPage:(id)arg1 openURL:(id)arg2 viewControllerBlock:(id)arg3;
- (void)iPadProductPage:(id)arg1 openItem:(id)arg2;
- (_Bool)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2;
- (_Bool)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2;
- (void)bannerViewDidClose:(id)arg1;
- (void)bannerView:(id)arg1 didFailWithError:(id)arg2;
- (void)setClientInterface:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;
@property(copy, nonatomic) NSDictionary *scriptContextDictionary;
- (void)loadProductWithRequest:(id)arg1;
- (void)loadProductWithParameters:(id)arg1;
- (void)dealloc;
- (id)initWithProductPageStyle:(long long)arg1;
- (id)init;
- (id)_initSKProductPageViewController;

@end

