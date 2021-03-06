/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSObject<OS_dispatch_semaphore>, NSString, PFUbiquityBaseline, PFUbiquityGlobalObjectIDCache, PFUbiquityKnowledgeVector, PFUbiquityLocation, PFUbiquityPeerRangeCache, PFUbiquityPeerReceipt, PFUbiquityTransactionHistoryCache, PFUbiquityTransactionLogCache;

@interface PFUbiquitySwitchboardCacheWrapper : NSObject
{
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityGlobalObjectIDCache *_globalIDCache;
    PFUbiquityPeerRangeCache *_peerRangeCache;
    PFUbiquityTransactionLogCache *_transactionLogCache;
    PFUbiquityTransactionHistoryCache *_transactionHistoryCache;
    PFUbiquityKnowledgeVector *_kv;
    PFUbiquityPeerReceipt *_peerReceipt;
    BOOL _pendingReceiptWrite;
    NSLock *_receiptFileLock;
    BOOL _allowSchedulingOfReceiptFileWrites;
    PFUbiquityBaseline *_baseline;
    BOOL _pendingBaselineMove;
    BOOL _baselineUploaded;
    NSLock *_baselineLock;
    BOOL _allowReplacementOfBaseline;
    NSObject<OS_dispatch_semaphore> *_baselineSemaphore;
}

@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly, nonatomic) BOOL pendingBaselineMove; // @synthesize pendingBaselineMove=_pendingBaselineMove;
@property(retain) PFUbiquityKnowledgeVector *kv; // @synthesize kv=_kv;
@property(readonly, nonatomic) PFUbiquityPeerReceipt *peerReceipt; // @synthesize peerReceipt=_peerReceipt;
@property(readonly, nonatomic) PFUbiquityTransactionHistoryCache *transactionHistoryCache; // @synthesize transactionHistoryCache=_transactionHistoryCache;
@property(readonly, nonatomic) PFUbiquityTransactionLogCache *transactionLogCache; // @synthesize transactionLogCache=_transactionLogCache;
@property(readonly, nonatomic) PFUbiquityPeerRangeCache *peerRangeCache; // @synthesize peerRangeCache=_peerRangeCache;
@property(readonly, nonatomic) PFUbiquityGlobalObjectIDCache *globalIDCache; // @synthesize globalIDCache=_globalIDCache;
- (void)timerFinishedUploadingPeerFile;
- (void)checkPeerFileUploaded;
- (BOOL)monitorUploadOfBaseline:(id)arg1 synchronously:(BOOL)arg2 error:(id *)arg3;
- (void)scheduleReceiptFileWrite:(id)arg1;
- (BOOL)writeReceiptFile:(id *)arg1;
- (void)cachePeerReceipt:(id)arg1;
- (void)cacheWrapperWillBeRemovedFromEntry;
- (void)dealloc;
- (id)initWithStoreName:(id)arg1 privateStore:(id)arg2 forLocalPeerID:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (id)init;

@end

