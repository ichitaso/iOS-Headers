/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MPMediaQuery, MPStoreOfferMediaItemCollection, NSArray;

@interface MPStoreCollectionCompletionOffering : NSObject
{
    MPMediaQuery *_localItemsQuery;
    long long _preferredStoreOfferVariant;
    MPStoreOfferMediaItemCollection *_offeredCollection;
    MPStoreOfferMediaItemCollection *_mergedCollection;
}

@property(readonly, nonatomic) MPStoreOfferMediaItemCollection *mergedCollection; // @synthesize mergedCollection=_mergedCollection;
@property(readonly, nonatomic) MPStoreOfferMediaItemCollection *offeredCollection; // @synthesize offeredCollection=_offeredCollection;
@property(readonly, nonatomic) long long preferredStoreOfferVariant; // @synthesize preferredStoreOfferVariant=_preferredStoreOfferVariant;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *localItems;
@property(readonly, nonatomic) MPStoreOfferMediaItemCollection *itemsWithCompletionsCollection;
- (id)initWithOfferedCollection:(id)arg1 localItemsQuery:(id)arg2 preferredStoreOfferVariant:(long long)arg3;

@end

