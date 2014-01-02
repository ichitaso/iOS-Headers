/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSUDatabase.h>

@class NSURL;

// Not exported
@interface TSPDatabase : TSUDatabase
{
    NSURL *_packageURL;
    _Bool _incrementalVacuum;
    struct sqlite3_stmt *_insertObjectStatement;
    struct sqlite3_stmt *_insertDataStateStatement;
    struct sqlite3_stmt *_updateDataStateStatement;
    struct sqlite3_stmt *_insertRelationshipStatement;
    struct sqlite3_stmt *_relationshipTargetsStatement;
}

- (void).cxx_destruct;
- (set_6550bfbd *)newRelationshipTargetsForSourceIdentifier:(long long)arg1 error:(id *)arg2;
- (_Bool)insertRelationshipWithSourceIdentifier:(long long)arg1 targetIdentifier:(long long)arg2 error:(id *)arg3;
- (struct sqlite3_blob *)openDataStateBlobWithIdentifier:(long long)arg1 willWrite:(_Bool)arg2 error:(id *)arg3;
- (_Bool)updateDataStateWithIdentifier:(long long)arg1 size:(int)arg2 error:(id *)arg3;
- (_Bool)insertDataStateWithSize:(int)arg1 identifier:(long long *)arg2 error:(id *)arg3;
- (_Bool)insertObjectWithIdentifier:(long long)arg1 stateIdentifier:(const struct ObjectStateIdentifier *)arg2 classType:(int)arg3 error:(id *)arg4;
- (_Bool)documentVersion:(CDStruct_4bcfbbae *)arg1 closedCleanlyToken:(long long *)arg2 error:(id *)arg3;
- (_Bool)setClosedCleanlyToken:(long long)arg1 error:(id *)arg2;
- (_Bool)setDocumentVersion:(CDStruct_4bcfbbae)arg1 error:(id *)arg2;
- (_Bool)upgradeFromSchemaVersion:(int)arg1 error:(id *)arg2;
- (_Bool)needsUpgradeFromSchemaVersion:(int)arg1;
- (id)objectFromStatement:(struct sqlite3_stmt *)arg1;
- (id)queryFirstObjectWithStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (id)queryObjectWithIdentifier:(long long)arg1 error:(id *)arg2;
- (struct sqlite3_blob *)openBlobForObject:(id)arg1 error:(id *)arg2;
- (struct sqlite3_blob *)openDataStateBlobWithIdentifier:(long long)arg1 error:(id *)arg2;
- (set_6550bfbd *)filterIdentifiers:(const set_6550bfbd *)arg1 error:(id *)arg2;
- (_Bool)numberOfDatabaseObjects:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)lastObjectIdentifier:(long long *)arg1 error:(id *)arg2;
- (_Bool)documentVersion:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)closeWithError:(id *)arg1;
- (id)initReadonlyWithPath:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 error:(id *)arg2;
- (id)init;

@end

