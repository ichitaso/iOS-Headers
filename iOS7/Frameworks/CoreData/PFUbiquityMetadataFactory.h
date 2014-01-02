/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSManagedObjectModel, NSMutableDictionary, NSRecursiveLock;

// Not exported
@interface PFUbiquityMetadataFactory : NSObject
{
    NSMutableDictionary *_rootLocationToPeerIDToEntry;
    NSRecursiveLock *_rootLocationToPeerIDToEntryLock;
    NSManagedObjectModel *_cachedModel;
}

+ (id)sharedFactory;
+ (void)initialize;
- (void)addModelingToolUserInfoToEntity:(id)arg1;
- (void)addModelingToolUserInfoToProperty:(id)arg1;
- (id)newRelationshipNamed:(id)arg1 withDestinationEntity:(id)arg2 andInverseRelationship:(id)arg3 isOptional:(_Bool)arg4 isToMany:(_Bool)arg5 andDeleteRule:(unsigned long long)arg6;
- (id)newAttributeNamed:(id)arg1 attributeType:(unsigned long long)arg2 isOptional:(_Bool)arg3 isTransient:(_Bool)arg4 withDefaultValue:(id)arg5 andMinValue:(id)arg6 andMaxValue:(id)arg7;
- (id)newEntityForName:(id)arg1;
- (id)createMetadataModel;
- (id)newMetadataManagedObjectModel;
- (void)removeAllCoordinatorsForRootLocation:(id)arg1;
- (void)removeCachedCoordinatorsForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (_Bool)cacheEntryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id *)arg4;
- (id)entryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)newMetadataEntryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id *)arg4;
- (id)newStackForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id *)arg4;
- (id)description;
- (void)dealloc;
- (id)init;

@end

