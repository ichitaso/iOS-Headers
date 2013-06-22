/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

#import "SSPurchaseManagerDelegate-Protocol.h"
#import "SSXPCCoding-Protocol.h"

@class NSArray, NSMutableSet, SSPurchaseManager;

@interface SSPurchaseRequest : SSRequest <SSPurchaseManagerDelegate, SSXPCCoding>
{
    BOOL _isBackgroundRequest;
    NSArray *_purchases;
    BOOL _shouldValidatePurchases;
    id _completionBlock;
    BOOL _createsDownloads;
    NSMutableSet *_openPurchaseIdentifiers;
    id _purchaseBlock;
    id _purchaseResponseBlock;
    SSPurchaseManager *_purchaseManager;
    BOOL _needsAuthentication;
}

@property(nonatomic) BOOL shouldValidatePurchases; // @synthesize shouldValidatePurchases=_shouldValidatePurchases;
@property(nonatomic) BOOL needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(nonatomic) BOOL createsDownloads; // @synthesize createsDownloads=_createsDownloads;
@property(nonatomic, getter=isBackgroundRequest) BOOL backgroundRequest; // @synthesize backgroundRequest=_isBackgroundRequest;
- (id)_purchaseForUniqueIdentifier:(long long)arg1;
- (void)_finishPurchasesWithResponses:(id)arg1;
- (void)_addPurchasesToManager;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (void)startWithCompletionBlock:(id)arg1;
- (BOOL)start;
- (void)cancel;
- (void)startWithPurchaseResponseBlock:(id)arg1 completionBlock:(void)arg2;
- (void)startWithPurchaseBlock:(id)arg1 completionBlock:(void)arg2;
@property(readonly) NSArray *purchases;
- (void)dealloc;
- (id)initWithPurchases:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) id <SSPurchaseRequestDelegate> delegate; // @dynamic delegate;

@end
