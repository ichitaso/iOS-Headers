/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFilePresenter-Protocol.h"

@class NSOperationQueue, NSURL, PFUbiquityLocation;

// Not exported
@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter>
{
    NSURL *_presentedItemURL;
    PFUbiquityLocation *_presentedItemLocation;
}

+ (void)initialize;
@property(readonly, nonatomic) PFUbiquityLocation *presentedItemLocation; // @synthesize presentedItemLocation=_presentedItemLocation;
@property(readonly) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)relinquishPresentedItemToReader:(id)arg1;
@property(readonly) NSOperationQueue *presentedItemOperationQueue;
- (void)dealloc;
- (id)initWithMetadataStoreFileLocation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) NSURL *primaryPresentedItemURL;

@end

