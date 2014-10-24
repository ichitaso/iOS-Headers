//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableDictionary, NSMutableSet;

@interface PDDistributedNotificationManager : NSObject
{
    NSHashTable *_consumers;
    NSMutableDictionary *_registeredNameMapping;
    NSMutableSet *_registeredNotificationNames;
}

- (void)_stopObservingNotification:(id)arg1;
- (void)_startObservingNotification:(id)arg1;
- (id)_updateNameCacheForConsumer:(id)arg1;
- (void)_clearNameCacheForConsumer:(id)arg1;
- (void)start;
- (void)recalculateNotificationNames;
- (void)unregisterConsumer:(id)arg1;
- (void)registerConsumer:(id)arg1;
- (void)dealloc;
- (id)init;

@end
