/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CBXpcConnectionDelegate-Protocol.h"

@class CBXpcConnection, NSLock, NSMutableArray, NSMutableDictionary;

@interface CBPeripheralManager : NSObject <CBXpcConnectionDelegate>
{
    id <CBPeripheralManagerDelegate> _delegate;
    CBXpcConnection *_connection;
    long long _state;
    _Bool _advertising;
    NSMutableDictionary *_centrals;
    NSMutableArray *_services;
    NSMutableDictionary *_characteristicIDs;
    NSLock *_updateLock;
    _Bool _readyForUpdates;
    _Bool _waitingForReady;
}

+ (long long)authorizationStatus;
@property(readonly) _Bool isAdvertising; // @synthesize isAdvertising=_advertising;
@property(readonly) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <CBPeripheralManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)xpcConnectionDidReset:(id)arg1;
- (void)xpcConnectionIsInvalid:(id)arg1;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(int)arg2 args:(id)arg3;
- (void)handleMTUChanged:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleAdvertisingStopped:(id)arg1;
- (void)handleAdvertisingStarted:(id)arg1;
- (void)handleNotificationRemoved:(id)arg1;
- (void)handleNotificationAdded:(id)arg1;
- (void)handleSetAttributeValues:(id)arg1;
- (void)handleGetAttributeValue:(id)arg1;
- (void)handleServiceAdded:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (id)centralFromArgs:(id)arg1;
- (void)sendMsg:(int)arg1 args:(id)arg2;
- (_Bool)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3;
- (void)respondToRequest:(id)arg1 withResult:(long long)arg2;
- (void)removeAllServices;
- (void)removeService:(id)arg1;
- (void)addService:(id)arg1;
- (void)stopAdvertising;
- (void)startAdvertising:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forCentral:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

@end

