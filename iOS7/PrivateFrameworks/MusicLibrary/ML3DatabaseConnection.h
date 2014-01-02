/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ML3DatabaseConnectionPool, NSFileHandle, NSHashTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface ML3DatabaseConnection : NSObject
{
    struct sqlite3 *_sqlitedb;
    _Bool _isOpen;
    NSHashTable *_statementsCache;
    NSObject<OS_dispatch_queue> *_statementsCacheSerialQueue;
    unsigned long long _statementsSinceLastCheckpoint;
    unsigned int _transactionLevel;
    _Bool _nestedTransactionWantsToRollback;
    NSMutableArray *_enqueuedTransactionCommitBlocks;
    ML3DatabaseConnectionPool *_owningPool;
    NSMutableArray *_registeredFunctions;
    NSMutableArray *_registeredModules;
    int _profilingLevel;
    NSFileHandle *_profilingLogHandle;
    int _willDeleteDatabaseNotifyToken;
    _Bool _isReadOnly;
    _Bool _automaticCheckpointingEnabled;
    id <ML3DatabaseConnectionDelegate> _connectionDelegate;
    NSString *_databasePath;
    unsigned long long _journalingMode;
    NSUUID *_uniqueIdentifier;
    const void *_iTunesExtensions;
    unsigned long long _checkpointStatementThreshold;
}

@property(nonatomic) unsigned long long checkpointStatementThreshold; // @synthesize checkpointStatementThreshold=_checkpointStatementThreshold;
@property(nonatomic) _Bool automaticCheckpointingEnabled; // @synthesize automaticCheckpointingEnabled=_automaticCheckpointingEnabled;
@property(nonatomic) const void *iTunesExtensions; // @synthesize iTunesExtensions=_iTunesExtensions;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) unsigned long long journalingMode; // @synthesize journalingMode=_journalingMode;
@property(nonatomic, setter=setReadOnly:) _Bool isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(nonatomic) __weak id <ML3DatabaseConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
- (void).cxx_destruct;
- (void)_executeTransactionCommitBlocks:(_Bool)arg1;
- (_Bool)_handleDatabaseCorruption;
- (void)_clearStatementCache;
- (void)_resetUnfinalizedStatements;
- (void)_finalizeAllStatements;
- (_Bool)_isSharedMediaLibraryDatabase;
- (void)_writeToProfilingLog:(id)arg1;
- (void)_updateProfilingLevel;
- (void)_logCurrentError;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statement:(id)arg2;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statementSQL:(id)arg2;
- (void)_createDatabaseFileIfNonexistent;
- (void)_createDatabaseDirectoryIfNonexistent;
- (_Bool)_databaseFileExists;
- (void)_ensureConnectionIsOpen;
- (id)_registeredModuleNamed:(id)arg1;
- (int)_finalizeStatement:(id)arg1 removeFromCache:(_Bool)arg2;
- (_Bool)_executeStatement:(id)arg1;
- (_Bool)_validatePreparedStatement:(id)arg1 error:(id *)arg2;
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;
- (id)_shortDescription;
- (void)_setTransactionLevel:(unsigned long long)arg1;
- (unsigned long long)_transactionLevel;
- (_Bool)_internalEndTransactionAndCommit:(_Bool)arg1;
- (_Bool)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1;
- (_Bool)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (_Bool)_handleBusyLockWithNumberOfRetries:(int)arg1;
- (void)_setOwningPool:(id)arg1;
- (id)_owningPool;
- (int)_finalizeStatement:(id)arg1;
- (struct sqlite3 *)_sqliteHandle;
- (int)checkpointDatabase;
- (_Bool)deleteDatabase;
- (id)sqliteError;
- (long long)lastInsertionRowID;
- (id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(_Bool)arg4;
- (void *)moduleContextForModuleName:(id)arg1;
- (void)setModuleContext:(void *)arg1 forModuleName:(id)arg2 contextReleaseBlock:(id)arg3;
- (_Bool)registerModuleName:(id)arg1 moduleMethods:(const struct sqlite3_module *)arg2;
- (_Bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(void *)arg3 userData:(void *)arg4;
- (_Bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(void *)arg3;
- (_Bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(id)arg3;
- (void)enqueueBlockForTransactionCommit:(id)arg1;
- (_Bool)performTransactionWithBlock:(id)arg1 usingBehaviorType:(void)arg2;
- (_Bool)performTransactionWithBlock:(id)arg1;
- (_Bool)popToRootTransactionAndCommit:(_Bool)arg1;
- (_Bool)popTransactionAndCommit:(_Bool)arg1;
- (_Bool)pushTransactionUsingBehaviorType:(unsigned long long)arg1;
- (_Bool)pushTransaction;
@property(readonly, nonatomic) _Bool isInTransaction;
- (_Bool)executeUpdate:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (_Bool)executeUpdate:(id)arg1;
- (_Bool)tableExists:(id)arg1;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2;
- (id)executeQuery:(id)arg1;
- (_Bool)databasePathExists;
- (void)flush;
- (_Bool)close;
- (_Bool)_openWithFlags:(int)arg1 isRetry:(_Bool)arg2;
- (_Bool)open;
@property(nonatomic) int profilingLevel;
@property(readonly, nonatomic) _Bool isOpen;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDatabasePath:(id)arg1;
- (id)init;

@end

