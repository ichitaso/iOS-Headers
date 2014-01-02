/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock;

@interface GEONetworkObserver : NSObject
{
    NSLock *_lock;
    unsigned int _networkReachability;
    struct __SCNetworkReachability *_networkReach;
    struct __CFDictionary *_networkObservers;
    _Bool _networkNotified;
    _Bool _networkReachable;
}

+ (id)sharedNetworkObserver;
- (_Bool)isCellConnection;
- (void)removeNetworkReachableObserver:(id)arg1;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (_Bool)isNetworkReachable;
- (void)_networkReachableFirstCallBack:(id)arg1;
- (void)_networkReachableCallBack:(unsigned int)arg1;
- (void)_networkObserversInitialize;
- (void)dealloc;
- (id)init;

@end

