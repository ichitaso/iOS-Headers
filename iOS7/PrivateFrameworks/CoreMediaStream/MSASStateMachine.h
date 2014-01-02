/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MSASAssetDownloaderDelegate-Protocol.h"
#import "MSASAssetUploaderDelegate-Protocol.h"
#import "MSBackoffManagerDelegate-Protocol.h"

@class MSASAssetDownloader, MSASAssetUploader, MSASPersonModel, MSASPhoneInvitations, MSASProtocol, MSAlbumSharingDaemon, MSBackoffManager, MSImageScalingSpecification, NSArray, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface MSASStateMachine : NSObject <MSBackoffManagerDelegate, MSASAssetUploaderDelegate, MSASAssetDownloaderDelegate>
{
    int _commandState;
    MSASPersonModel *_model;
    NSString *_currentCommand;
    long long _currentCommandID;
    NSDictionary *_currentCommandParams;
    MSBackoffManager *_metadataBackoffManager;
    MSBackoffManager *_MMCSBackoffManager;
    MSASAssetUploader *_assetUploader;
    MSASAssetDownloader *_assetDownloader;
    _Bool _isRetryingOutstandingActivities;
    _Bool _hasShutDown;
    int _maxMetadataRetryCount;
    MSAlbumSharingDaemon *_daemon;
    NSString *_personID;
    id _delegate;
    NSDictionary *_serverSideConfiguration;
    NSString *_serverSideConfigurationVersion;
    NSString *_focusAlbumGUID;
    NSString *_focusAssetCollectionGUID;
    NSMutableArray *_assetInfoToReauthForDownload;
    id _stopHandlerBlock;
    MSASProtocol *_protocol;
    MSASPhoneInvitations *_phoneInvitations;
    MSImageScalingSpecification *_derivativeImageScalingSpecification;
    MSImageScalingSpecification *_thumbnailImageScalingSpecification;
    NSArray *_derivativeSpecifications;
    NSDictionary *_metadataBackoffManagerParameters;
    NSDictionary *_MMCSBackoffManagerParameters;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_serverSideConfigQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
    id _postCommandCompletionBlock;
}

@property(copy, nonatomic) id postCommandCompletionBlock; // @synthesize postCommandCompletionBlock=_postCommandCompletionBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverSideConfigQueue; // @synthesize serverSideConfigQueue=_serverSideConfigQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSDictionary *MMCSBackoffManagerParameters; // @synthesize MMCSBackoffManagerParameters=_MMCSBackoffManagerParameters;
@property(retain, nonatomic) NSDictionary *metadataBackoffManagerParameters; // @synthesize metadataBackoffManagerParameters=_metadataBackoffManagerParameters;
@property(nonatomic) _Bool hasShutDown; // @synthesize hasShutDown=_hasShutDown;
@property(readonly, nonatomic) NSArray *derivativeSpecifications; // @synthesize derivativeSpecifications=_derivativeSpecifications;
@property(readonly, nonatomic) MSImageScalingSpecification *thumbnailImageScalingSpecification; // @synthesize thumbnailImageScalingSpecification=_thumbnailImageScalingSpecification;
@property(readonly, nonatomic) MSImageScalingSpecification *derivativeImageScalingSpecification; // @synthesize derivativeImageScalingSpecification=_derivativeImageScalingSpecification;
@property(retain, nonatomic) MSASPhoneInvitations *phoneInvitations; // @synthesize phoneInvitations=_phoneInvitations;
@property(retain, nonatomic) MSASProtocol *protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic, setter=_setStopHandlerBlock:) id _stopHandlerBlock; // @synthesize _stopHandlerBlock;
@property(retain, nonatomic, setter=_setAssetInfoToReauthForDownload:) NSMutableArray *_assetInfoToReauthForDownload; // @synthesize _assetInfoToReauthForDownload;
@property(nonatomic) _Bool isRetryingOutstandingActivities; // @synthesize isRetryingOutstandingActivities=_isRetryingOutstandingActivities;
@property(retain, nonatomic) NSString *focusAssetCollectionGUID; // @synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID;
@property(retain, nonatomic) NSString *focusAlbumGUID; // @synthesize focusAlbumGUID=_focusAlbumGUID;
@property(nonatomic) int maxMetadataRetryCount; // @synthesize maxMetadataRetryCount=_maxMetadataRetryCount;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(nonatomic) __weak MSAlbumSharingDaemon *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (void)MSASAssetDownloaderDidFinishBatch:(id)arg1;
- (void)_sendReauthorizeAssetsForDownloadDisposition:(int)arg1 params:(id)arg2;
- (void)workQueueScheduleReauthForAssets:(id)arg1 inAlbum:(id)arg2;
- (void)MSASAssetDownloader:(id)arg1 didFinishDownloadingAsset:(id)arg2 inAlbumGUID:(id)arg3 error:(id)arg4;
- (void)MSASAssetDownloader:(id)arg1 willBeginBatchCount:(unsigned long long)arg2;
- (void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2;
- (void)MSASAssetUploader:(id)arg1 didFinishUploadingAssetCollection:(id)arg2 intoAlbum:(id)arg3 error:(id)arg4;
- (void)_deleteAssetFilesInAssetCollections:(id)arg1;
- (void)_deleteAssetFilesInAssetCollection:(id)arg1;
- (void)videoURLsForAssetCollection:(id)arg1 forMediaAssetType:(unsigned long long)arg2 inAlbum:(id)arg3 completionBlock:(id)arg4;
- (void)videoURLForAssetCollection:(id)arg1 inAlbum:(id)arg2 completionBlock:(id)arg3;
- (void)setMultipleContributorsEnabled:(_Bool)arg1 forAlbum:(id)arg2 info:(id)arg3 completionBlock:(id)arg4;
- (void)setPublicAccessEnabled:(_Bool)arg1 forAlbum:(id)arg2 info:(id)arg3 completionBlock:(id)arg4;
- (void)_scheduleEventDisposition:(int)arg1 params:(id)arg2;
- (void)scheduleEvent:(id)arg1 assetCollectionGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4;
- (void)_addCommentDisposition:(int)arg1 params:(id)arg2;
- (void)addComments:(id)arg1 toAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)_removeSharingRelationshipsDisposition:(int)arg1 params:(id)arg2;
- (void)removeSharingRelationships:(id)arg1 fromOwnedAlbum:(id)arg2 info:(id)arg3;
- (void)_addSharingRelationshipsDisposition:(int)arg1 params:(id)arg2;
- (void)addSharingRelationships:(id)arg1 toOwnedAlbum:(id)arg2 info:(id)arg3;
- (void)_sendGetUploadTokensDisposition:(int)arg1 params:(id)arg2;
- (void)_sendPutAssetCollectionsDisposition:(int)arg1 params:(id)arg2;
- (void)_sendUploadCompleteDisposition:(int)arg1 params:(id)arg2;
- (void)_continueAddingAssetCollectionsDisposition:(int)arg1 params:(id)arg2;
- (void)continueAddingAssetCollections:(id)arg1 skipAssetCollections:(id)arg2 toAlbum:(id)arg3 info:(id)arg4;
- (void)_addAssetCollectionsDisposition:(int)arg1 params:(id)arg2;
- (void)addAssetCollections:(id)arg1 toAlbum:(id)arg2 info:(id)arg3;
- (id)_createHardlinkedOrCopiedAssetsInAssetCollections:(id)arg1;
- (void)_updateAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)updateAlbum:(id)arg1 updateAlbumFlags:(int)arg2 info:(id)arg3;
- (void)_createAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)createAlbum:(id)arg1 info:(id)arg2;
- (void)_deleteCommentDisposition:(int)arg1 params:(id)arg2;
- (void)deleteComments:(id)arg1 inAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)_deleteAssetCollectionsDisposition:(int)arg1 params:(id)arg2;
- (void)deleteAssetCollections:(id)arg1 inAlbum:(id)arg2 info:(id)arg3;
- (void)_deleteAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)deleteAlbum:(id)arg1 info:(id)arg2;
- (void)_setAssetCollectionSyncedStateDisposition:(int)arg1 params:(id)arg2;
- (void)setAssetCollectionSyncedState:(id)arg1 forAssetCollection:(id)arg2 album:(id)arg3 info:(id)arg4;
- (void)_setAlbumSyncedStateDisposition:(int)arg1 params:(id)arg2;
- (void)setAlbumSyncedState:(id)arg1 forAlbum:(id)arg2 info:(id)arg3;
- (void)_checkForAlbumSyncedStateDisposition:(int)arg1 params:(id)arg2;
- (void)checkForAlbumSyncedStateChangesInAlbums:(id)arg1 info:(id)arg2;
- (void)_checkForCommentChangesDisposition:(int)arg1 params:(id)arg2;
- (void)checkForCommentChangesInAssetCollection:(id)arg1 inAlbum:(id)arg2 lastCommentID:(id)arg3 info:(id)arg4;
- (void)_checkForAssetCollectionUpdatesDisposition:(int)arg1 params:(id)arg2;
- (void)checkForAssetCollectionUpdates:(id)arg1 inAlbum:(id)arg2 info:(id)arg3;
- (void)acceptInvitationWithToken:(id)arg1 info:(id)arg2 completionBlock:(id)arg3;
- (void)_unsubscribeFromAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)unsubscribeFromAlbum:(id)arg1 info:(id)arg2;
- (void)_subscribeToAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)subscribeToAlbum:(id)arg1 info:(id)arg2;
- (void)_getAccessControlsDisposition:(int)arg1 params:(id)arg2;
- (void)getAccessControlsForAlbums:(id)arg1 info:(id)arg2;
- (void)_didFinishCheckingUpdatesInAlbumsDisposition:(int)arg1 params:(id)arg2;
- (void)_checkForUpdatesInAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)checkForUpdatesInAlbums:(id)arg1 resetSync:(_Bool)arg2 info:(id)arg3;
- (void)_checkForChangesDisposition:(int)arg1 params:(id)arg2;
- (void)checkForChangesResetSync:(_Bool)arg1 info:(id)arg2;
- (void)checkForChangesInfo:(id)arg1;
- (id)_assetCollectionFailedError;
- (id)_assetCollectionRejectedError;
- (id)_stoppedError;
- (id)_canceledError;
- (void)_getAlbumURLDisposition:(int)arg1 params:(id)arg2;
- (id)_URLReauthFailureWithUnderlyingError:(id)arg1;
- (_Bool)workQueueEndCommandWithError:(id)arg1 command:(id)arg2 params:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;
- (void)workQueueDidFinishCommandDueToCancellation;
- (void)workQueueDidFinishCommandByLeavingCommandInQueue;
- (void)workQueueDidFailToFinishCommandDueToTemporaryError:(id)arg1;
- (void)workQueueDidFinishCommandByReplacingCurrentCommandWithCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;
- (void)workQueueDidFinishCommand;
- (void)workQueuePerformNextCommand;
- (void)workQueueCheckForNextCommand;
- (void)workQueueRetryOutstandingActivities;
- (void)retryOutstandingActivities;
- (_Bool)hasEnqueuedActivities;
- (_Bool)isInRetryState;
- (void)setPersistentObject:(id)arg1 forKey:(id)arg2;
- (id)persistentObjectForKey:(id)arg1;
- (void)MSBackoffManagerDidUpdateNextExpiryDate:(id)arg1;
- (void)workQueueUpdateNextActivityDate;
- (id)serverCommunicationBackoffDate;
- (id)latestNextActivityDate;
- (void)_sendGetServerSideConfigurationDisposition:(int)arg1 params:(id)arg2;
- (void)workQueueRefreshServerSideConfig;
- (void)refreshServerSideConfig;
- (void)serverSideQueueSetServerSideConfiguration:(id)arg1;
@property(retain, nonatomic) NSDictionary *serverSideConfiguration; // @synthesize serverSideConfiguration=_serverSideConfiguration;
- (id)serverSideQueueServerSideConfiguration;
@property(readonly, nonatomic) NSString *serverSideConfigurationVersion; // @synthesize serverSideConfigurationVersion=_serverSideConfigurationVersion;
- (id)_serverSideConfigDictionaryByApplyingDefaultsToDictionary:(id)arg1;
- (void)_cancelOutstandingCommandsDisposition:(int)arg1 params:(id)arg2;
- (void)cancelOutstandingCommandsForAssetCollectionWithGUID:(id)arg1;
- (void)cancelOutstandingCommandsForAlbumWithGUID:(id)arg1;
- (id)rootCtagToCheckForChanges;
- (void)setRootCtagFromPendingRootCtag;
- (void)setPendingRootCtag:(id)arg1;
- (void)workQueueCancelCompletionBlock:(id)arg1;
- (void)workQueueCancelAllCommandsFilteredByAlbumGUID:(id)arg1 assetCollectionGUID:(id)arg2;
- (void)cancelCompletionBlock:(id)arg1;
- (void)stopAssetDownloadsCompletionBlock:(id)arg1;
- (void)purgeEverythingCompletionBlock:(id)arg1;
- (void)shutDownCompletionBlock:(id)arg1;
- (void)_workQueueEmptyFileTransferQueuesCompletionBlock:(id)arg1;
- (void)start;
- (void)workQueueApplyServerSideConfiguration;
- (int)assetsInDownloadQueueCount;
- (void)dealloc;
- (id)initWithPersonID:(id)arg1 eventQueue:(id)arg2;
- (id)initWithPersonID:(id)arg1;
- (id)init;
- (id)memberQueueMetadataBackoffManager;
- (id)_metadataBackoffManager;
- (id)_assetDownloader;
- (id)_assetUploader;
- (id)_model;

@end

