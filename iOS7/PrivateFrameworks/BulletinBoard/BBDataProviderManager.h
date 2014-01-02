/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBRemoteDataProviderConnectionDelegate-Protocol.h"
#import "BBRemoteDataProviderDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface BBDataProviderManager : NSObject <BBRemoteDataProviderDelegate, BBRemoteDataProviderConnectionDelegate>
{
    id <BBDataProviderManagerDelegate> _delegate;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_localDataProviders;
    NSMutableDictionary *_remoteDataProviders;
    NSMutableArray *_dataProviderConnections;
    NSMutableDictionary *_onlineDataProvidersByService;
    NSMutableDictionary *_offlineDataProvidersByService;
    NSMutableDictionary *_dataProviderFactoriesByClass;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _allowConnections;
}

@property(nonatomic) id <BBDataProviderManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dataProviderOperational:(id)arg1;
- (void)dataProviderConnection:(id)arg1 removeDataProviderWithSectionID:(id)arg2;
- (void)dataProviderConnection:(id)arg1 addDataProviderWithSectionID:(id)arg2;
- (void)dataProviderConnection:(id)arg1 connectionStateDidChange:(_Bool)arg2;
- (void)_removeDataProviderSectionID:(id)arg1;
- (void)_removeDataProvider:(id)arg1;
- (id)_configureSectionInfo:(id)arg1 forDataProvider:(id)arg2;
- (void)_updateSectionInfo:(id)arg1 withDefaultInfo:(id)arg2;
- (id)_defaultSectionInfoForSection:(id)arg1;
- (id)_configureDataProvider:(id)arg1;
- (void)_addDataProvider:(id)arg1 forFactory:(id)arg2 factoryInfo:(id)arg3;
- (void)_addDataProviderPlugin:(id)arg1 forFactory:(id)arg2 factoryInfo:(id)arg3;
- (void)_addDataProviderClass:(Class)arg1;
- (void)_loadDataProviderPluginBundle:(id)arg1;
- (void)_loadAllDataProviderPluginBundles;
- (void)factory:(id)arg1 removeDataProvider:(id)arg2;
- (void)factory:(id)arg1 addDataProvider:(id)arg2;
- (id)getSectionInfoForSectionID:(id)arg1;
- (void)loadAllDataProviders;
- (void)noteSettingsChanged:(id)arg1 forSectionID:(id)arg2;
- (id)rebuildSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)reloadIdentityForSectionID:(id)arg1 withCompletion:(id)arg2;
- (id)dataProviderForSectionID:(id)arg1;
- (id)dataProviders;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

