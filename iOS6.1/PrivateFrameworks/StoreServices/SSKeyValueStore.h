/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SSKeyValueStoreDatabase, SSXPCConnection;

@interface SSKeyValueStore : NSObject
{
    SSXPCConnection *_connection;
    SSKeyValueStoreDatabase *_database;
    BOOL _useLocalRead;
    BOOL _useLocalWrite;
}

+ (BOOL)isLocalReadable;
- (void)removeAccountFromDomain:(id)arg1;
- (void)readUsingSessionBlock:(id)arg1;
- (void)modifyUsingTransactionBlock:(id)arg1;
- (id)iTunesValueForKey:(id)arg1 usedDomain:(id *)arg2;
@property(readonly, getter=isLocalWritable) BOOL localWritable;
@property(readonly, getter=isLocalReadable) BOOL localReadable;
- (id)copyAccounts;
- (id)copyAccountDictionaryForDomain:(id)arg1;
- (void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 completionBlock:(id)arg3;
- (void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2;
- (void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 completionBlock:(id)arg4;
- (void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)removeAllValuesWithCompletionBlock:(id)arg1;
- (void)removeAllValuesForDomain:(id)arg1 completionBlock:(id)arg2;
- (void)removeAllValuesForDomain:(id)arg1;
- (void)getValuesForDomain:(id)arg1 keys:(const id *)arg2 count:(unsigned int)arg3 usingBlock:(id)arg4;
- (void)getValueForDomain:(id)arg1 key:(id)arg2 usingBlock:(id)arg3;
- (void)dealloc;
- (id)init;

@end
