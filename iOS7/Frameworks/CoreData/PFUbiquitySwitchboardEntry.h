/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, PFUbiquityContainerMonitor, PFUbiquityFilePresenter, PFUbiquityLocation, PFUbiquitySetupAssistant, PFUbiquitySwitchboardEntryMetadata;

// Not exported
@interface PFUbiquitySwitchboardEntry : NSObject
{
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    PFUbiquityFilePresenter *_fp;
    PFUbiquityFilePresenter *_localFP;
    PFUbiquityContainerMonitor *_monitor;
    unsigned long long _activeStoreCount;
    NSMutableDictionary *_registeredCoordinators;
    PFUbiquitySwitchboardEntryMetadata *_metadata;
    _Bool _finishedSetupForStore;
    _Bool _hasScheduledFinishBlock;
    _Bool _finishedInitializingForStore;
    int _finishLock;
    PFUbiquitySetupAssistant *_finishingSetupAssistant;
    NSObject<OS_dispatch_queue> *_privateQueue;
}

@property(retain, nonatomic) PFUbiquitySwitchboardEntryMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly) PFUbiquitySetupAssistant *finishingSetupAssistant; // @synthesize finishingSetupAssistant=_finishingSetupAssistant;
@property(readonly) PFUbiquityContainerMonitor *monitor; // @synthesize monitor=_monitor;
@property(readonly) PFUbiquityFilePresenter *localFilePresenter; // @synthesize localFilePresenter=_localFP;
@property(readonly) PFUbiquityFilePresenter *filePresenter; // @synthesize filePresenter=_fp;
@property(readonly) PFUbiquityLocation *localRootLocation; // @synthesize localRootLocation=_localRootLocation;
@property(retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property unsigned long long activeStoreCount; // @synthesize activeStoreCount=_activeStoreCount;
- (void)afterDelay:(double)arg1 executeBlockOnGlobalConcurrentQueue:(id)arg2;
- (void)afterDelay:(double)arg1 executeBlockOnPrivateQueue:(id)arg2;
- (void)executeBlockOnPrivateQueue:(id)arg1;
- (void)setupFinished;
- (_Bool)finishSetupForStore:(id)arg1 withSetupAssistant:(id)arg2 synchronously:(_Bool)arg3 error:(id *)arg4 finishBlock:(id)arg5;
- (void)containerIdentifierChanged:(id)arg1;
- (void)monitorStateChanged:(id)arg1;
- (void)containerStateChanged:(id)arg1;
- (void)filePresenterNoticedBaselineFileChange:(id)arg1;
- (void)filePresenterWasNotifiedTransactionLogs:(id)arg1;
- (void)entryWillBeRemovedFromSwitchboard;
- (id)createSetOfActiveStoreNames;
- (id)createSetOfPersistentStoreCoordinatorsRegisteredForStoreName:(id)arg1;
- (id)metaForStoreName:(id)arg1;
- (id)cacheWrapperForStoreName:(id)arg1;
- (void)unregisterPersistentStore:(id)arg1;
- (void)unregisterPersistentStoreCoordinator:(id)arg1;
- (void)registerPersistentStore:(id)arg1 withStoreName:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 ubiquityRootLocation:(id)arg3 andLocalRootLocation:(id)arg4;
- (id)init;

@end

