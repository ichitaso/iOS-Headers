/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "AXServer.h"

@class NSArray, NSMutableDictionary;

@interface AXHearingSpringBoardServer : AXServer
{
    NSMutableDictionary *_availabilityHandlers;
    NSMutableDictionary *_updateHandlers;
    NSMutableDictionary *_liveListenHandlers;
    NSArray *_availableHearingAids;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *availableHearingAids; // @synthesize availableHearingAids=_availableHearingAids;
- (void)stopLiveListen;
- (_Bool)startLiveListen;
- (void)removeLiveListenLevelsHandler:(id)arg1;
- (id)addLiveListenLevelsHandler:(id)arg1;
- (_Bool)liveListenIsListening;
- (void)writeValue:(id)arg1 forProperty:(long long)arg2 forDeviceID:(id)arg3;
- (id)readProperty:(long long)arg1 forDeviceID:(id)arg2;
- (void)removePropertyUpdateHandler:(id)arg1;
- (id)addPropertyUpdateHandler:(id)arg1;
- (void)removeAvailableDeviceHandler:(id)arg1;
- (id)addAvailableDeviceHandler:(id)arg1;
- (id)liveListenLevelsUpdate:(id)arg1;
- (id)devicePropertyUpdate:(id)arg1;
- (id)availableDevicesUpdate:(id)arg1;
- (void)hearingAidServerReady;
- (void)_willClearServer;
- (void)_didConnectToServer;
- (_Bool)_shouldValidateEntitlements;
- (id)_serviceName;
- (void)dealloc;
- (id)init;

@end

