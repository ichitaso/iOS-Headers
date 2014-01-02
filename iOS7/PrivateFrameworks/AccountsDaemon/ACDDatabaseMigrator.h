/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSManagedObjectContext, NSMutableDictionary, NSPersistentStoreCoordinator, NSString;

@interface ACDDatabaseMigrator : NSObject
{
    NSManagedObjectContext *_migrationContext;
    NSPersistentStoreCoordinator *_privateCoordinator;
    NSPersistentStoreCoordinator *_realCoordinator;
    NSString *_databasePath;
    NSMutableDictionary *_realOptions;
}

- (void).cxx_destruct;
- (void)_postProcessMigrationFromVersion:(long long)arg1 migrationData:(id)arg2;
- (long long)_versionForModel:(id)arg1;
- (id)_compatibleModelForStoreAtURL:(id)arg1;
- (id)_setUpContextForMigration;
- (id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)arg1;
- (id)_fetchAllDataclassEntitles;
- (void)_migrateNameAttributeOfDataclassEntities;
- (void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)arg1;
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)arg1;
- (_Bool)run;
- (id)initForDatabaseAtPath:(id)arg1 persistentStoreCoordinator:(id)arg2 options:(id)arg3;

@end

