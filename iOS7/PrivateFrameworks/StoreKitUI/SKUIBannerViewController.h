/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SKUIItemStateCenterObserver-Protocol.h"

@class NSDictionary, NSMutableArray, NSOperationQueue, SKUIBannerView, SKUIClientContext, SKUIItemArtworkContext, SKUIItemStateCenter, SSLookupItem, UIImage;

@interface SKUIBannerViewController : UIViewController <SKUIItemStateCenterObserver>
{
    SKUIBannerView *_bannerView;
    SKUIClientContext *_clientContext;
    id <SKUIBannerViewDelegate> _delegate;
    UIImage *_iconImage;
    SSLookupItem *_item;
    long long _itemIdentifier;
    SKUIItemStateCenter *_itemStateCenter;
    NSOperationQueue *_resourceOperationQueue;
    NSMutableArray *_screenshotImages;
    NSDictionary *_scriptContextDictionary;
    SKUIItemArtworkContext *_itemArtworkContext;
}

@property(copy, nonatomic) NSDictionary *scriptContextDictionary; // @synthesize scriptContextDictionary=_scriptContextDictionary;
@property(retain, nonatomic) NSOperationQueue *resourceOperationQueue; // @synthesize resourceOperationQueue=_resourceOperationQueue;
@property(nonatomic) __weak id <SKUIBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (id)_itemArtworkContext;
- (void)_warmItemStateCenter;
- (void)_setScreenshot:(id)arg1 forIndex:(long long)arg2 error:(id)arg3;
- (void)_setIcon:(id)arg1 error:(id)arg2;
- (id)_screenshotConsumerWithSize:(struct CGSize)arg1;
- (void)_reloadBannerView;
- (void)_loadImages;
- (void)_launchApp;
- (id)_itemState;
- (id)_iconImage;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (void)_closeButtonAction:(id)arg1;
- (void)_bannerViewAction:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)loadView;
- (void)loadWithProductParameters:(id)arg1;
- (void)dealloc;

@end

