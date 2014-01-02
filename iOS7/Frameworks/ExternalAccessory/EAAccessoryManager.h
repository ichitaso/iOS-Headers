/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "EABluetoothAccessoryPickerDelegate-Protocol.h"
#import "EADiscoveredWirelessAccessoryDelegate-Protocol.h"

@class EABluetoothAccessoryPicker, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface EAAccessoryManager : NSObject <EABluetoothAccessoryPickerDelegate, EADiscoveredWirelessAccessoryDelegate>
{
    NSMutableArray *_connectedAccessories;
    NSMutableArray *_discoveredWirelessAccessories;
    NSMutableArray *_sequesteredAccessories;
    NSString *_selectedBluetoothAddress;
    EABluetoothAccessoryPicker *_picker;
    id _pickerCompletion;
    _Bool _sequesterNewAccessories;
    NSTimer *_pickerTimer;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

+ (_Bool)isLoggingEnabled;
+ (void)accessibilityStopListening;
+ (void)accessibilityStartListening;
+ (void)registerCapabilities:(unsigned int)arg1;
+ (id)sharedAccessoryManager;
- (void)devicePicker:(id)arg1 didSelectAddress:(id)arg2 errorCode:(long long)arg3;
- (void)stopWirelessAccessoryDiscovery;
- (void)startWirelessAccessoryDiscovery;
- (void)disconnectWirelessAccessory:(id)arg1;
- (void)initiateConnectionToWirelessAccessory:(id)arg1;
- (void)pointOfInterestSelection:(id)arg1;
- (void)setAreLocationAccessoriesEnabled:(_Bool)arg1;
- (_Bool)areLocationAccessoriesEnabled;
- (void)accessibilitySystemPropertyRequest:(id)arg1;
- (void)accessibilitySystemPropertyChange:(id)arg1;
- (void)accessibilityItemPropertyRequest:(id)arg1;
- (void)accessibilityContextChange:(id)arg1;
- (void)accessibilityAction:(id)arg1;
- (void)setShouldAllowCppRuntime:(_Bool)arg1;
- (_Bool)shouldAllowCppRuntime;
- (void)setShouldAllowInternalProtocols:(_Bool)arg1;
- (_Bool)shouldAllowInternalProtocols;
- (id)_connectedAccessories;
- (_Bool)appDeclaresProtocol:(id)arg1;
- (void)wakeAccessoryWithToken:(id)arg1;
- (void)endSession:(unsigned int)arg1 forConnectionID:(unsigned int)arg2;
- (void)openCompleteForSession:(unsigned int)arg1 connectionID:(unsigned int)arg2;
- (void)_timeSyncInfoUpdated:(id)arg1;
- (void)_handleAccessoryNotificationTimeout:(id)arg1;
- (void)_integrateSequesteredAccessories;
- (void)_vehicleDataUpdated:(id)arg1;
- (void)_gpsTimeRequested:(id)arg1;
- (void)_nmeaFilteringSupportChanged:(id)arg1;
- (void)_ephemerisURLAvailable:(id)arg1;
- (void)_locationPointDataAvailable:(id)arg1;
- (void)_locationNmeaDataAvailable:(id)arg1;
- (void)_externalAccessoryIPodOutOptionsChanged:(id)arg1;
- (void)_externalAccessoryPortPropertyChanged:(id)arg1;
- (void)_wirelessAccessoryDisconnected:(id)arg1;
- (void)_wirelessAccessoryDidConnect:(id)arg1;
- (void)_wirelessAccessoryNotAvailable:(id)arg1;
- (void)_wirelessAccessoryAvailable:(id)arg1;
- (void)_externalAccessoryDisconnected:(id)arg1;
- (void)_externalAccessoryUpdated:(id)arg1;
- (void)_externalAccessoryConnected:(id)arg1;
- (void)_removeAllAccessoriesFromArray:(id)arg1 notifyClients:(_Bool)arg2;
- (void)_externalAccessoryReconnected:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_cleanUpForTaskSuspend;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_iapServerDied:(id)arg1;
- (void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(id)arg1;
- (void)unregisterForLocalNotifications;
- (void)registerForLocalNotifications;
@property(readonly, nonatomic) NSArray *connectedAccessories;
- (void)showBluetoothAccessoryPickerWithNameFilter:(id)arg1 completion:(id)arg2;
- (void)dealloc;
- (id)_initFromSingletonCreationMethod;
- (id)init;

@end

