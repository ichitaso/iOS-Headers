/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"

@class NSData, NSManagedObjectModel, NSMutableDictionary, NSString;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration>
{
    int _cd_rc;
    id _snapshotClass;
    NSString *_versionHashModifier;
    NSData *_versionHash;
    NSManagedObjectModel *_model;
    NSString *_classNameForEntity;
    Class _instanceClass;
    NSString *_name;
    NSEntityDescription *_rootentity;
    NSEntityDescription *_superentity;
    NSMutableDictionary *_subentities;
    NSMutableDictionary *_properties;
    id _propertyMapping;
    struct _NSRange *_propertyRanges;
    struct __entityDescriptionFlags {
        unsigned int _isAbstract:1;
        unsigned int _shouldValidateOnSave:1;
        unsigned int _isImmutable:1;
        unsigned int _isFlattened:1;
        unsigned int _skipValidation:1;
        unsigned int _hasPropertiesIndexedBySpotlight:1;
        unsigned int _hasPropertiesStoredInTruthFile:1;
        unsigned int _rangesAreInDataBlob:1;
        unsigned int _hasAttributesWithExternalDataReferences:1;
        unsigned int _hasNonstandardPrimitiveProperties:2;
        unsigned int _reservedEntityDescription:21;
    } _entityDescriptionFlags;
    void *_extraIvars;
    NSMutableDictionary *_userInfo;
    id _flattenedSubentities;
    id **_kvcPropertyAccessors;
    long long _modelsReferenceIDForEntity;
}

+ (id)insertNewObjectForEntityForName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityForName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)initialize;
- (id)renamingIdentifier;
- (void)setRenamingIdentifier:(id)arg1;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)setCompoundIndexes:(id)arg1;
- (id)compoundIndexes;
- (void)setVersionHashModifier:(id)arg1;
- (id)versionHashModifier;
- (id)versionHash;
- (id)_newVersionHashInStyle:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setAbstract:(_Bool)arg1;
- (void)setManagedObjectClassName:(id)arg1;
- (id)propertiesByName;
- (void)setProperties:(id)arg1;
- (id)properties;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)inverseForRelationshipKey:(id)arg1;
- (id)relationshipsWithDestinationEntity:(id)arg1;
- (id)toOneRelationshipKeys;
- (id)toManyRelationshipKeys;
- (id)managedObjectModel;
- (id)subentitiesByName;
- (void)setSubentities:(id)arg1;
- (id)subentities;
- (id)superentity;
- (_Bool)isKindOfEntity:(id)arg1;
- (_Bool)isAbstract;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)relationshipsByName;
- (id)attributesByName;
- (id)attributeKeys;
- (id)managedObjectClassName;
- (id)name;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end

