/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIArtworkRequestDelegate-Protocol.h"
#import "SKUIEmbeddedMediaViewDelegate-Protocol.h"
#import "SKUIItemStateCenterObserver-Protocol.h"
#import "SKUIMissingItemDelegate-Protocol.h"
#import "SKUIProductPageOverlayDelegate-Protocol.h"

@class NSMapTable, NSMutableIndexSet, SKUIClientContext, SKUILockupComponent, SKUIMissingItemLoader, SKUIProductPageOverlayController, SKUIRowComponent;

@interface SKUIRowSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate, SKUIItemStateCenterObserver, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate>
{
    SKUIClientContext *_clientContext;
    NSMapTable *_columnViews;
    NSMapTable *_componentArtworkRequestIDs;
    NSMapTable *_editorialLayouts;
    NSMutableIndexSet *_expandedEditorialIndexes;
    NSMapTable *_galleryViewControllers;
    NSMapTable *_countdownViewControllers;
    _Bool _isPad;
    double _landscapeCellContentHeight;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIProductPageOverlayController *_overlayController;
    SKUILockupComponent *_overlaySourceComponent;
    double _portraitCellContentHeight;
}

- (void).cxx_destruct;
- (id)_viewControllerForGalleryComponent:(id)arg1;
- (id)_viewControllerForCountdownComponent:(id)arg1;
- (void)_setPositionForClickEvent:(id)arg1 elementIndex:(long long)arg2;
- (void)_selectMediaComponent:(id)arg1 columnIndex:(long long)arg2;
- (void)_selectLockupComponent:(id)arg1 columnIndex:(long long)arg2;
- (void)_selectGalleryComponent:(id)arg1 columnIndex:(long long)arg2;
- (void)_reloadView:(id)arg1 forMediaComponent:(id)arg2 columnIndex:(long long)arg3;
- (void)_reloadLockupCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3;
- (void)_reloadEditorialLockupCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3;
- (void)_reloadEditorialCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3;
- (id)_popSourceViewForOverlayController:(id)arg1;
- (id)_overlaySourceCell;
- (id)_newViewWithMediaComponent:(id)arg1;
- (id)_newSizeToFitArtworkRequestWithArtwork:(id)arg1 columnIndex:(long long)arg2;
- (id)_missingItemLoader;
- (struct SKUILockupStyle)_lockupStyleForComponent:(id)arg1 columnIndex:(long long)arg2;
- (id)_lockupImageForComponent:(id)arg1;
- (void)_loadImagesForGalleryComponent:(id)arg1 columnIndex:(long long)arg2;
- (double)_interColumnSpacing;
- (id)_imageConsumerWithItem:(id)arg1 lockupSize:(long long)arg2;
- (double)_heightForMediaComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForLockupComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForGalleryComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForEditorialComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForCountdownComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForComponent:(id)arg1 columnIndex:(double)arg2 rowWidth:(double)arg3;
- (double)_heightForArtwork:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (void)_expandEditorialComponent:(id)arg1 columnIndex:(long long)arg2;
- (void)_enumerateLockupsWithBlock:(id)arg1;
- (id)_editorialLayoutForLockup:(id)arg1 columnIndex:(long long)arg2;
- (id)_editorialLayoutForEditorial:(id)arg1 columnIndex:(long long)arg2;
- (struct UIEdgeInsets)_edgeInsetsForColumnIndex:(long long)arg1;
- (double)_columnWidthForColumnIndex:(long long)arg1 rowWidth:(double)arg2;
- (id)_columnViews;
- (double)_cellContentHeightForRowWidth:(double)arg1;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;
- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (void)invalidateCachedLayoutInformation;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIRowComponent *pageComponent; // @dynamic pageComponent;

@end

