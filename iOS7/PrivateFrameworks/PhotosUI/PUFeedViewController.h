/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLCloudFeedNavigating-Protocol.h"
#import "PLNavigableCloudFeedViewController-Protocol.h"
#import "PUAlbumStreamActivityDelegate-Protocol.h"
#import "PUFeedCollectionViewLayoutDelegate-Protocol.h"
#import "PUFeedImageCellDelegate-Protocol.h"
#import "PUFeedInvitationCellDelegate-Protocol.h"
#import "PUFeedSectionInfosManagerDelegate-Protocol.h"
#import "PUFeedTextCellDelegate-Protocol.h"
#import "PUPhotoBrowserZoomTransitionDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDate, NSDictionary, NSIndexPath, NSMutableSet, PLCloudSharedAlbum, PLCloudSharedComment, PLDateRangeFormatter, PLManagedAlbumList, PLManagedAsset, PUAlbumStreamActivity, PUFeedAssetContainerList, PUFeedSectionInfosManager, PUFeedViewControllerRestorableState, PUFeedViewControllerSpec, PUImageManager, PUPhotoPinchGestureRecognizer, PUPhotosPickerViewController, UIBarButtonItem, UICollectionView, UIPopoverController, UITapGestureRecognizer, _UIContentUnavailableView;

@interface PUFeedViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, PUFeedCollectionViewLayoutDelegate, PUFeedSectionInfosManagerDelegate, PUPhotoBrowserZoomTransitionDelegate, PUFeedImageCellDelegate, PUFeedTextCellDelegate, PUFeedInvitationCellDelegate, UIGestureRecognizerDelegate, PUAlbumStreamActivityDelegate, PLCloudFeedNavigating, PLNavigableCloudFeedViewController>
{
    _Bool __flowDirectionReversed;
    _Bool __viewDidAppear;
    _Bool __viewsInSyncWithModel;
    _Bool __appJustEnteredForeground;
    _Bool __userDidDismissPlaceholder;
    _Bool __visibleInterfaceUpdateScheduled;
    _Bool __invitationsPopoverShowPending;
    _Bool __libraryUpdatingPreviouslyExpired;
    PUFeedViewControllerSpec *_spec;
    long long _contentType;
    NSDate *__mostRecentContentDate;
    PUFeedSectionInfosManager *__feedSectionInfosManager;
    PUImageManager *__imageManager;
    PLDateRangeFormatter *__dateRangeFormatter;
    UICollectionView *__portraitCollectionView;
    UICollectionView *__landscapeCollectionView;
    long long __rotationState;
    long long __rotationSourceInterfaceOrientation;
    long long __rotationTargetInterfaceOrientation;
    PUFeedViewControllerRestorableState *__rotationLastRestorableState;
    long long __barsState;
    long long __loadedSectionInfosWindowSize;
    NSDate *__mostRecentContentDateViewed;
    long long __mostRecentContentViewed;
    UITapGestureRecognizer *__tapGestureRecognizer;
    UIBarButtonItem *__invitationsBarButtonItem;
    UIPopoverController *__invitationsPopoverController;
    NSDictionary *__preheatedAssetsByFormat;
    NSIndexPath *__indexPathForImageHiddenDuringZoomTransition;
    PUPhotoPinchGestureRecognizer *__pinchGestureRecognizer;
    UICollectionView *__pinchedCollectionView;
    PLManagedAlbumList *__sharedAlbumList;
    PLCloudSharedAlbum *__pushedAlbum;
    UIViewController *__pushedViewController;
    PUPhotosPickerViewController *__presentedPhotosPickerViewController;
    _UIContentUnavailableView *__emptyPlaceholderView;
    PUAlbumStreamActivity *__albumStreamActivity;
    PLManagedAsset *__browsingSelectedAsset;
    PLCloudSharedComment *__browsingSelectedComment;
    PUFeedAssetContainerList *__browsingAssetContainerList;
    NSDictionary *__justLikedSections;
    NSMutableSet *__sectionInfosWithCommentChanges;
    NSMutableSet *__updatedAssets;
    struct CGPoint __lastPreheatedContentOffset;
}

+ (void)initialize;
@property(nonatomic, getter=_isLibraryUpdatingPreviouslyExpired, setter=_setLibraryUpdatingPreviouslyExpired:) _Bool _libraryUpdatingPreviouslyExpired; // @synthesize _libraryUpdatingPreviouslyExpired=__libraryUpdatingPreviouslyExpired;
@property(nonatomic, getter=_isInvitationsPopoverShowPending, setter=_setInvitationsPopoverShowPending:) _Bool _invitationsPopoverShowPending; // @synthesize _invitationsPopoverShowPending=__invitationsPopoverShowPending;
@property(retain, nonatomic, setter=_setUpdatedAssets:) NSMutableSet *_updatedAssets; // @synthesize _updatedAssets=__updatedAssets;
@property(retain, nonatomic, setter=_setSectionInfosWithCommentChanges:) NSMutableSet *_sectionInfosWithCommentChanges; // @synthesize _sectionInfosWithCommentChanges=__sectionInfosWithCommentChanges;
@property(nonatomic, getter=_isVisibleInterfaceUpdateScheduled, setter=_setVisibleInterfaceUpdateScheduled:) _Bool _visibleInterfaceUpdateScheduled; // @synthesize _visibleInterfaceUpdateScheduled=__visibleInterfaceUpdateScheduled;
@property(retain, nonatomic, setter=_setJustLikedSections:) NSDictionary *_justLikedSections; // @synthesize _justLikedSections=__justLikedSections;
@property(retain, nonatomic, setter=_setBrowsingAssetContainerList:) PUFeedAssetContainerList *_browsingAssetContainerList; // @synthesize _browsingAssetContainerList=__browsingAssetContainerList;
@property(retain, nonatomic, setter=_setBrowsingSelectedComment:) PLCloudSharedComment *_browsingSelectedComment; // @synthesize _browsingSelectedComment=__browsingSelectedComment;
@property(retain, nonatomic, setter=_setBrowsingSelectedAsset:) PLManagedAsset *_browsingSelectedAsset; // @synthesize _browsingSelectedAsset=__browsingSelectedAsset;
@property(retain, nonatomic, setter=_setAlbumStreamActivity:) PUAlbumStreamActivity *_albumStreamActivity; // @synthesize _albumStreamActivity=__albumStreamActivity;
@property(nonatomic, setter=_setUserDidDismissPlaceholder:) _Bool _userDidDismissPlaceholder; // @synthesize _userDidDismissPlaceholder=__userDidDismissPlaceholder;
@property(retain, nonatomic, setter=_setEmptyPlaceholderView:) _UIContentUnavailableView *_emptyPlaceholderView; // @synthesize _emptyPlaceholderView=__emptyPlaceholderView;
@property(nonatomic, setter=_setAppJustEnteredForeground:) _Bool _appJustEnteredForeground; // @synthesize _appJustEnteredForeground=__appJustEnteredForeground;
@property(retain, nonatomic, setter=_setPresentedPhotosPickerViewController:) PUPhotosPickerViewController *_presentedPhotosPickerViewController; // @synthesize _presentedPhotosPickerViewController=__presentedPhotosPickerViewController;
@property(retain, nonatomic, setter=_setPushedViewController:) UIViewController *_pushedViewController; // @synthesize _pushedViewController=__pushedViewController;
@property(retain, nonatomic, setter=_setPushedAlbum:) PLCloudSharedAlbum *_pushedAlbum; // @synthesize _pushedAlbum=__pushedAlbum;
@property(readonly, nonatomic) PLManagedAlbumList *_sharedAlbumList; // @synthesize _sharedAlbumList=__sharedAlbumList;
@property(retain, nonatomic, setter=_setPinchedCollectionView:) UICollectionView *_pinchedCollectionView; // @synthesize _pinchedCollectionView=__pinchedCollectionView;
@property(retain, nonatomic, setter=_setPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_pinchGestureRecognizer; // @synthesize _pinchGestureRecognizer=__pinchGestureRecognizer;
@property(copy, nonatomic, setter=_setIndexPathForImageHiddenDuringZoomTransition:) NSIndexPath *_indexPathForImageHiddenDuringZoomTransition; // @synthesize _indexPathForImageHiddenDuringZoomTransition=__indexPathForImageHiddenDuringZoomTransition;
@property(nonatomic, setter=_setLastPreheatedContentOffset:) struct CGPoint _lastPreheatedContentOffset; // @synthesize _lastPreheatedContentOffset=__lastPreheatedContentOffset;
@property(retain, nonatomic, setter=_setPreheatedAssetsByFormat:) NSDictionary *_preheatedAssetsByFormat; // @synthesize _preheatedAssetsByFormat=__preheatedAssetsByFormat;
@property(retain, nonatomic, setter=_setInvitationsPopoverController:) UIPopoverController *_invitationsPopoverController; // @synthesize _invitationsPopoverController=__invitationsPopoverController;
@property(retain, nonatomic, setter=_setInvitationsBarButtonItem:) UIBarButtonItem *_invitationsBarButtonItem; // @synthesize _invitationsBarButtonItem=__invitationsBarButtonItem;
@property(retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(nonatomic, getter=_areViewsInSyncWithModel, setter=_setViewsInSyncWithModel:) _Bool _viewsInSyncWithModel; // @synthesize _viewsInSyncWithModel=__viewsInSyncWithModel;
@property(nonatomic, setter=_setMostRecentContentViewed:) long long _mostRecentContentViewed; // @synthesize _mostRecentContentViewed=__mostRecentContentViewed;
@property(retain, nonatomic, setter=_setMostRecentContentDateViewed:) NSDate *_mostRecentContentDateViewed; // @synthesize _mostRecentContentDateViewed=__mostRecentContentDateViewed;
@property(nonatomic, setter=_setLoadedSectionInfosWindowSize:) long long _loadedSectionInfosWindowSize; // @synthesize _loadedSectionInfosWindowSize=__loadedSectionInfosWindowSize;
@property(nonatomic, setter=_setBarsState:) long long _barsState; // @synthesize _barsState=__barsState;
@property(retain, nonatomic, setter=_setRotationLastRestorableState:) PUFeedViewControllerRestorableState *_rotationLastRestorableState; // @synthesize _rotationLastRestorableState=__rotationLastRestorableState;
@property(nonatomic, setter=_setRotationTargetInterfaceOrientation:) long long _rotationTargetInterfaceOrientation; // @synthesize _rotationTargetInterfaceOrientation=__rotationTargetInterfaceOrientation;
@property(nonatomic, setter=_setRotationSourceInterfaceOrientation:) long long _rotationSourceInterfaceOrientation; // @synthesize _rotationSourceInterfaceOrientation=__rotationSourceInterfaceOrientation;
@property(nonatomic, setter=_setRotationState:) long long _rotationState; // @synthesize _rotationState=__rotationState;
@property(nonatomic, setter=_setViewDidAppear:) _Bool _viewDidAppear; // @synthesize _viewDidAppear=__viewDidAppear;
@property(nonatomic, getter=_isFlowDirectionReversed, setter=_setFlowDirectionReversed:) _Bool _flowDirectionReversed; // @synthesize _flowDirectionReversed=__flowDirectionReversed;
@property(retain, nonatomic, setter=_setLandscapeCollectionView:) UICollectionView *_landscapeCollectionView; // @synthesize _landscapeCollectionView=__landscapeCollectionView;
@property(retain, nonatomic, setter=_setPortraitCollectionView:) UICollectionView *_portraitCollectionView; // @synthesize _portraitCollectionView=__portraitCollectionView;
@property(readonly, nonatomic) PLDateRangeFormatter *_dateRangeFormatter; // @synthesize _dateRangeFormatter=__dateRangeFormatter;
@property(readonly, nonatomic) PUImageManager *_imageManager; // @synthesize _imageManager=__imageManager;
@property(readonly, nonatomic) PUFeedSectionInfosManager *_feedSectionInfosManager; // @synthesize _feedSectionInfosManager=__feedSectionInfosManager;
@property(readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) PUFeedViewControllerSpec *spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (id)_pl_debugItems;
- (void)_createNewStream;
- (void)_handlePlaceholderAction;
- (void)_showInvitationsPopoverAnimated:(_Bool)arg1;
- (void)_invitationsButtonAction:(id)arg1;
- (_Bool)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (void)_handlePinch:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_openiCloudSettings;
- (void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg1 completionHandler:(id)arg2;
- (void)_navigateToRevealPhoto:(id)arg1 inAlbum:(struct NSObject *)arg2 animated:(_Bool)arg3;
- (void)_restoreScrollPositionInCollectionViewForInterfaceOrientation:(long long)arg1 fromRestorableState:(id)arg2;
- (void)_enumerateCenterAssetsInRestorableState:(id)arg1 inCollectionView:(id)arg2 usingBlock:(id)arg3;
- (id)_currentRestorableState;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)feedInvitationCell:(id)arg1 didAccept:(_Bool)arg2;
- (void)didTapButtonInFeedTextCell:(id)arg1;
- (void)_didTapSectionFooterFeedCell:(id)arg1;
- (void)_didTapSectionHeaderFeedCell:(id)arg1;
- (void)_didTapThumbnailOrOverlayPlayButtonInFeedCell:(id)arg1;
- (void)didTapCommentButtonInFeedImageCell:(id)arg1;
- (void)didTapOverlayPlayButtonInFeedImageCell:(id)arg1;
- (void)didTapFeedCell:(id)arg1;
- (_Bool)pu_handleSecondTabTap;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)_navigateToSectionInfo:(id)arg1 atItemIndex:(long long)arg2 completion:(id)arg3;
- (id)_loadedSectionInfoForCloudFeedEntry:(id)arg1;
- (_Bool)_navigateToRevealComment:(id)arg1 completion:(id)arg2;
- (void)_navigateToRevealAsset:(id)arg1 completion:(id)arg2;
- (void)navigateToNewestContentAnimated:(_Bool)arg1;
- (void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(id)arg2;
- (void)navigateToCloudFeedComment:(id)arg1 completion:(id)arg2;
- (void)navigateToRevealCloudFeedComment:(id)arg1 completion:(id)arg2;
- (void)navigateToCloudFeedAsset:(id)arg1 completion:(id)arg2;
- (void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(id)arg2;
- (_Bool)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (_Bool)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (_Bool)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(long long)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(long long)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
- (_Bool)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(id)arg3;
- (void)zoomTransition:(id)arg1 setVisibility:(_Bool)arg2 forPhotoToken:(id)arg3;
- (_Bool)zoomTransition:(id)arg1 getFrame:(struct CGRect *)arg2 contentMode:(long long *)arg3 forPhotoToken:(id)arg4 operation:(long long)arg5;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (void)assetContainerListDidChange:(id)arg1;
- (void)_updateVisibleInterfaceUpdatesNow;
- (void)_scheduleVisibleInterfaceUpdateForSectionInfosWithCommentChanges:(id)arg1 updatedAssets:(id)arg2;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(struct CGSize)arg4;
- (id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(long long)arg3;
- (struct PUFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(struct PUFeedSeparatorMetrics)arg5;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(struct CGSize)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(struct CGSize)arg4;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(long long)arg3;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(long long)arg3;
- (struct PUFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(struct PUFeedSeparatorMetrics)arg5;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(struct CGSize)arg4;
- (void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(double *)arg3 minimumNumberOfTilesToOmit:(long long *)arg4 forSection:(long long)arg5;
- (id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(struct CGSize)arg4;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(long long)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(long long)arg3;
- (long long)_typeForSectionInfo:(id)arg1;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(long long)arg3;
- (_Bool)_shouldHideSectionInfo:(id)arg1 forCollectionView:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_updateInterfaceForDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3;
- (void)_updateInterfaceForModelReloadAnimated:(_Bool)arg1;
- (void)_autoHideBarsNow;
- (void)_cancelBarsAutoHide;
- (void)_scheduleBarsAutoHide;
- (_Bool)_shouldShowBarsForInterfaceOrientation:(long long)arg1;
- (long long)_currentInterfaceOrientation;
- (void)_updateSubviewsOrdering;
- (void)_updateEmptyPlaceholderAnimated:(_Bool)arg1;
- (void)_updateNavigationItemAnimated:(_Bool)arg1;
- (void)_updatePeripheralInterfaceAnimated:(_Bool)arg1;
- (void)_updateCollectionViews;
- (_Bool)pu_wantsTabBarVisible;
- (_Bool)pu_wantsToolbarVisible;
- (_Bool)pu_wantsNavigationBarVisible;
- (_Bool)pu_wantsStatusBarVisible;
- (void)_updateWindowOfLoadedSectionInfos;
- (void)_ensureWindowOfLoadedSectionInfosIncludesSection:(long long)arg1;
- (void)_expandWindowOfLoadedSectionInfos;
- (void)_getPhotoBrowserController:(out id *)arg1 transition:(out id *)arg2 withOptions:(long long)arg3;
- (id)_sectionInfosForBrowsingFromSectionInfo:(id)arg1;
- (long long)_browsingSelectedSection;
- (void)_updateBrowsingAssetContainerList;
- (void)_tearDownBrowsing;
- (void)_setupBrowsingFromAsset:(id)arg1 orComment:(id)arg2;
- (_Bool)_setupBrowsingFromItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (long long)_placeholderTypeForInterfaceOrientation:(long long)arg1;
- (_Bool)_shouldShowTransitionUI;
- (_Bool)_isLibraryUpdatingTimeoutExpired;
- (_Bool)_isAnySharedAlbumAvailable;
- (void)_invalidateLastPreheatedContentOffset;
- (void)_updatePreheatedAssetsForCollectionView:(id)arg1;
- (_Bool)_isScrolling;
- (void)_setUserCloudSharedLiked:(_Bool)arg1 forItemsInSections:(id)arg2 inCollectionView:(id)arg3;
- (void)_invalidateMostRecentContentDate;
@property(readonly, nonatomic) NSDate *_mostRecentContentDate; // @synthesize _mostRecentContentDate=__mostRecentContentDate;
- (void)_userDidScrollFeed;
- (void)_userDidViewFeed;
- (void)_appDidFinishEnteringForeground;
- (void)_contextDidFinishRemoteMerge:(id)arg1;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_appWillEnterForeground:(id)arg1;
- (void)_configureCollectionView:(id)arg1;
- (void)_dateRangeFormatterChanged:(id)arg1;
- (id)_textForDate:(id)arg1;
- (id)_dateForSectionWithInfo:(id)arg1;
- (id)_groupIDForSectionWithInfo:(id)arg1;
- (_Bool)_shouldJoinSectionInfo:(id)arg1 withSectionInfo:(id)arg2 collectionViewType:(long long)arg3;
- (_Bool)_shouldHideHeaderForSectionWithType:(long long)arg1;
- (_Bool)_shouldHideSectionWithType:(long long)arg1 inCollectionViewType:(long long)arg2;
- (void)_configureTextCell:(id)arg1 forHeaderOfGroupID:(id)arg2 inCollectionView:(id)arg3;
- (_Bool)_configureTextCell:(id)arg1 forFooterOfSection:(long long)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forHeaderOfSections:(id)arg2 inCollectionView:(id)arg3 animated:(_Bool)arg4;
- (void)_getDescriptionPhrase:(out id *)arg1 streamAffordanceLabel:(out id *)arg2 actionText:(out id *)arg3 buttonType:(long long *)arg4 forSections:(id)arg5 inCollectionView:(id)arg6;
- (void)_configureInvitationCell:(id)arg1 forInvitationAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forTextAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forLikesAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forCommentAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forCaptionAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureStackCell:(id)arg1 forThumbnailsAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureImageCell:(id)arg1 forThumbnailAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureImageCell:(id)arg1 forAssetAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (id)_indexPathForItemWithAsset:(id)arg1 inCollectionView:(id)arg2;
- (id)_assetForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (id)_sectionInfosForSections:(id)arg1 collectionView:(id)arg2;
- (id)_sectionInfoForSection:(long long)arg1 collectionView:(id)arg2;
- (long long)_numberOfSectionInfosForCollectionView:(id)arg1;
- (long long)_typeForCollectionView:(id)arg1;
- (id)_collectionViewContainingView:(id)arg1;
- (id)collectionViewForCurrentInterfaceOrientation;
- (id)_collectionViewForInterfaceOrientation:(long long)arg1;
- (_Bool)_isCollectionViewEmptyForInterfaceOrientation:(long long)arg1;
- (id)_collectionViews;
- (id)_suppressionContexts;
- (_Bool)_appAllowsSupressionOfAlerts;
- (_Bool)pu_shouldActAsTabRootViewController;
- (struct CGSize)contentSizeForViewInPopover;
- (id)contentScrollView;
- (_Bool)canBecomeFirstResponder;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (id)initWithSpec:(id)arg1 contentType:(long long)arg2;

@end

