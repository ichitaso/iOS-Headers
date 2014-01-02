/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSStoreMapping.h>

@class NSArray, NSEntityDescription, NSKnownKeysMappingStrategy, NSMutableArray, NSMutableDictionary, NSSQLEntityKey, NSSQLModel, NSSQLOptLockKey, NSSQLPrimaryKey, NSSQLStatement, NSSQLStoreMappingGenerator, NSString;

// Not exported
@interface NSSQLEntity : NSStoreMapping
{
    NSSQLModel *_model;
    NSEntityDescription *_entityDescription;
    NSString *_tableName;
    NSMutableDictionary *_properties;
    NSArray *_propertyAllCache;
    NSArray *_propertiesAllToManysCache;
    NSArray *_propertyManyToManyCache;
    NSMutableArray *_columnsToFetch;
    NSMutableArray *_ekColumns;
    NSMutableArray *_fkColumns;
    NSMutableArray *_fokColumns;
    NSMutableArray *_attrColumns;
    NSMutableArray *_virtualFKs;
    NSSQLPrimaryKey *_primaryKey;
    NSSQLEntityKey *_entityKey;
    NSSQLOptLockKey *_optLockKey;
    NSMutableArray *_subentities;
    NSSQLEntity *_superentity;
    NSSQLEntity *_rootEntity;
    NSSQLStoreMappingGenerator *_mappingGenerator;
    unsigned int _entityID;
    unsigned int _subentityMaxID;
    struct _NSRange _toOneRange;
    long long _maxPK;
    NSSQLStatement *_insertStatementCache;
    NSSQLStatement *_deletionStatementCache;
    NSSQLStatement *_faultingStatementCache;
    NSMutableDictionary *_toManyRelationshipStatementCache;
    void *_fetch_entity_plan;
    NSKnownKeysMappingStrategy *_propertyMapping;
    void *_odiousHashHackStorage;
    unsigned int _pkCount;
    struct __sqlentityFlags {
        unsigned int _hasAttributesWithExternalDataReferences:1;
        unsigned int _reserved:31;
    } _sqlentityFlags;
}

- (id)propertyMapping;
- (_Bool)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)mappingGenerator;
- (struct _NSRange)_toOneRange;
- (void)cacheFaultingStatement:(id)arg1 andFetchRequest:(id)arg2 forRelationship:(id)arg3;
- (id)preparedFaultingCachesForRelationship:(id)arg1;
- (void)cacheFaultingStatement:(id)arg1;
- (id)faultingStatement;
- (void)cacheDeletionStatement:(id)arg1;
- (id)deletionStatement;
- (void)cacheInsertStatement:(id)arg1;
- (id)insertStatement;
- (void)clearCachedStatements;
- (id)description;
- (void)addInsertedObject:(id)arg1 toArray:(id)arg2;
- (long long)nextPrimaryKey64;
- (void)_setMaxPK:(long long)arg1;
- (void)_resetPKCount;
- (unsigned int)_pkCount;
- (id)rootEntity;
- (id)model;
- (_Bool)hasAttributesWithExternalDataReferences;
- (_Bool)_entityIsBroken:(id *)arg1;
- (_Bool)_collectFKSlots:(id)arg1 error:(id *)arg2;
- (void *)_odiousHashHack;
- (void)_doPostModelGenerationCleanup;
- (unsigned int)_generateIDWithSuperEntity:(id)arg1 nextID:(unsigned int)arg2;
- (void)_generateProperties;
- (void)_generateInverseRelationshipsAndMore;
- (id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2;
- (void)_addForeignOrderKeyForToOne:(id)arg1 entity:(id)arg2;
- (void)_addColumnToFetch:(id)arg1;
- (void)_addRootColumnToFetch:(id)arg1;
- (id)_sqlPropertyWithRenamingIdentifier:(id)arg1;
- (id)relationshipNamed:(id)arg1;
- (id)attributeNamed:(id)arg1;
- (id)propertyNamed:(id)arg1;
- (_Bool)isKindOfSQLEntity:(id)arg1;
- (unsigned int)subentityMaxID;
- (unsigned int)entityID;
- (void)setSuperentity:(id)arg1;
- (void)_addSubentity:(id)arg1;
- (id)superentity;
- (_Bool)isRootEntity;
- (void)setSubentities:(id)arg1;
- (_Bool)hasInheritance;
- (_Bool)hasSubentities;
- (id)subentities;
- (id)optLockKey;
- (id)primaryKey;
- (id)attributeColumns;
- (id)foreignOrderKeyColumns;
- (id)foreignEntityKeyColumns;
- (id)virtualForeignKeyColumns;
- (id)foreignKeyColumns;
- (id)columnsToCreate;
- (id)columnsToFetch;
- (unsigned int)fetchIndexForKey:(id)arg1;
- (id)entityDescription;
- (id)subentityKey;
- (id)propertiesByName;
- (id)manyToManyRelationships;
- (id)toManyRelationships;
- (id)properties;
- (id)tableName;
- (id)name;
- (void)dealloc;
- (void)finalize;
- (id)_propertySearchMapping;
- (id)initWithModel:(id)arg1 entityDescription:(id)arg2;

@end

