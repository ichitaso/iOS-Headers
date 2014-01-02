/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IMSystemMonitorListener-Protocol.h"

@class IMAVChatParticipant, IMAccount, IMHandle, IMPair, IMTimingCollection, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface IMAVChat : NSObject <IMSystemMonitorListener>
{
    NSString *_GUID;
    NSString *_conferenceID;
    NSMutableArray *_participants;
    IMHandle *_initiator;
    IMAVChatParticipant *_localParticipant;
    NSMutableDictionary *_conferenceStateCache;
    NSNumber *_natType;
    NSMutableDictionary *_extraServerContext;
    NSDate *_dateCreated;
    NSDate *_dateStartedConnecting;
    NSDate *_dateConnected;
    NSDate *_dateEnded;
    NSDate *_dateReceivedRelayInitiate;
    NSDate *_dateReceivedRelayUpdate;
    NSDate *_interruptionBegan;
    NSDictionary *_pingTestResults;
    NSNumber *_frontCameraCaptureTime;
    NSNumber *_backCameraCaptureTime;
    NSNumber *_dataRate;
    NSNumber *_dataUploaded;
    NSNumber *_dataDownloaded;
    IMTimingCollection *_timingCollection;
    unsigned long long _localNetworkConnectionType;
    unsigned long long _remoteNetworkConnectionType;
    long long _pingTestResult;
    long long _networkCheckResult;
    NSDictionary *_callerProperties;
    NSObject<OS_dispatch_queue> *_conferenceQueue;
    NSTimer *_inviteTimeoutTimer;
    NSDate *_inviteTimeoutTimerStart;
    NSTimer *_firstFrameTimeoutTimer;
    NSTimer *_connectionTimeoutTimer;
    NSTimer *_breakBeforeMakeTimeoutTimer;
    id _conferenceController;
    unsigned int _sessionID;
    NSError *_error;
    unsigned int _localState;
    unsigned int _lastPostedState;
    IMPair *_pendingPreemptiveRelayInitate;
    NSString *_callStatisticsGUID;
    struct CGSize _portraitAspectRatios;
    struct CGSize _landscapeAspectRatios;
    double _connectionTimeoutTime;
    double _invitationTimeoutTime;
    _Bool _hasGatheredInfo;
    _Bool _hasReceivedFirstFrame;
    _Bool _hasPendingAccept;
    _Bool _hasPendingInit;
    _Bool _isTerminating;
    _Bool _isCaller;
    _Bool _isVideo;
    _Bool _didRemoteMute;
    _Bool _didRemotePause;
    int _connectionType;
    _Bool _needsVideoRestart;
    _Bool _needsAudioRestart;
    _Bool _airplaneModeEnabled;
    _Bool _isVideoInterrupted;
    _Bool _isAudioInterrupted;
    _Bool _isCallUpgrade;
    _Bool _startedAudioSession;
    _Bool _connectionStarted;
}

+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(_Bool)arg2;
@property(nonatomic, setter=_setNetworkCheckResult:) long long _networkCheckResult; // @synthesize _networkCheckResult;
@property(nonatomic, setter=_setPingTestResult:) long long _pingTestResult; // @synthesize _pingTestResult;
@property(retain, nonatomic, setter=_setPingTestResults:) NSDictionary *_pingTestResults; // @synthesize _pingTestResults;
@property(readonly) NSDictionary *_extraServerContext; // @synthesize _extraServerContext;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) IMAVChatParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_localState;
@property(readonly, nonatomic) NSDate *dateEnded; // @synthesize dateEnded=_dateEnded;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, nonatomic) NSDate *dateConnected; // @synthesize dateConnected=_dateConnected;
@property(nonatomic, setter=_setConferenceController:) id _conferenceController; // @synthesize _conferenceController;
- (void)_setGUID:(id)arg1;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic) NSString *conferenceID; // @synthesize conferenceID=_conferenceID;
@property(readonly, nonatomic) _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic, setter=_setConnectionStarted:) _Bool _connectionStarted; // @synthesize _connectionStarted;
@property(nonatomic, setter=_setIsAudioInterrupted:) _Bool _isAudioInterrupted; // @synthesize _isAudioInterrupted;
@property(nonatomic, setter=_setIsVideoInterrupted:) _Bool _isVideoInterrupted; // @synthesize _isVideoInterrupted;
@property(retain, nonatomic, setter=_setDataDownloaded:) NSNumber *_dataDownloaded; // @synthesize _dataDownloaded;
@property(retain, nonatomic, setter=_setDataUploaded:) NSNumber *_dataUploaded; // @synthesize _dataUploaded;
@property(retain, nonatomic, setter=_setDataRate:) NSNumber *_dataRate; // @synthesize _dataRate;
@property(retain, nonatomic, setter=_setBackCameraCaptureTime:) NSNumber *_backCameraCaptureTime; // @synthesize _backCameraCaptureTime;
@property(retain, nonatomic, setter=_setFrontCameraCaptureTime:) NSNumber *_frontCameraCaptureTime; // @synthesize _frontCameraCaptureTime;
@property(retain, nonatomic, setter=_setInterruptionBegan:) NSDate *_interruptionBegan; // @synthesize _interruptionBegan;
@property(readonly, nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic, setter=_setNeedsVideoRestart:) _Bool _needsVideoRestart; // @synthesize _needsVideoRestart;
@property(nonatomic, setter=_setNeedsAudioRestart:) _Bool _needsAudioRestart; // @synthesize _needsAudioRestart;
@property(nonatomic, setter=_setRemoteNetworkConnectionType:) unsigned long long _remoteNetworkConnectionType; // @synthesize _remoteNetworkConnectionType;
@property(nonatomic, setter=_setLocalNetworkConnectionType:) unsigned long long _localNetworkConnectionType; // @synthesize _localNetworkConnectionType;
@property(retain, nonatomic, setter=_setNatType:) NSNumber *_natType; // @synthesize _natType;
@property(readonly, nonatomic) IMHandle *initiatorIMHandle; // @synthesize initiatorIMHandle=_initiator;
@property(retain, nonatomic, setter=_setCallerProperties:) NSDictionary *callerProperties; // @synthesize callerProperties=_callerProperties;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic, setter=_setStartedAudioSession:) _Bool _startedAudioSession; // @synthesize _startedAudioSession;
@property(nonatomic, setter=_setIsCallUpgrade:) _Bool _isCallUpgrade; // @synthesize _isCallUpgrade;
@property(retain, nonatomic, setter=_setCallStatisticsGUID:) NSString *_callStatisticsGUID; // @synthesize _callStatisticsGUID;
@property(nonatomic, setter=_setConnectionType:) int _connectionType; // @synthesize _connectionType;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_conferenceQueue; // @synthesize _conferenceQueue;
- (_Bool)_cachedBoolForKey:(id)arg1;
- (_Bool)_hasCachedBoolForKey:(id)arg1;
- (void)_cacheBool:(_Bool)arg1 forKey:(id)arg2;
- (void)_clearCache;
- (id)_timings;
- (void)_noteFirstFrame;
- (void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_handleAVError:(id)arg1;
@property(readonly, nonatomic) NSArray *_imHandles;
@property(readonly, nonatomic) _Bool isUsingWifi;
@property(readonly, nonatomic) _Bool _usesRelay;
@property(readonly, nonatomic) NSNumber *_relayConnectDuration;
@property(readonly, nonatomic) NSNumber *_callDuration;
@property(readonly, nonatomic) NSNumber *_connectDuration;
@property(readonly, nonatomic) NSNumber *_currentNatType;
@property(readonly, nonatomic) NSNumber *_remoteNatType;
- (_Bool)isConferenceSilent;
@property(readonly, nonatomic) long long _bustedCallID;
- (void)_setDateConnected;
- (void)_setCreationDate;
@property(readonly, nonatomic) unsigned int endedReason;
@property(readonly, nonatomic) int endedError;
- (void)_setConferenceID:(id)arg1;
@property(readonly, nonatomic) IMAccount *account;
@property(readonly, nonatomic) _Bool _isProxy;
@property(readonly, nonatomic) IMHandle *otherIMHandle;
- (id)participantMatchingIMHandle:(id)arg1;
- (id)vcPartyIDForIMHandle:(id)arg1;
- (id)participantWithID:(id)arg1;
- (id)participantWithAVConferenceCallID:(long long)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;
- (void)_handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3 handled:(_Bool)arg4;
- (void)_responseToVCInvite:(id)arg1;
- (void)__responseToVCInvite:(id)arg1;
- (_Bool)_processVCResponseDict:(id)arg1;
- (void)_setStateDisconnected;
- (void)declineInvitation;
- (void)declineInvitationWithResponse:(unsigned int)arg1;
- (void)acceptInvitation;
- (void)invite:(id)arg1;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)cancelInvitation;
- (void)_cancelInvitationWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)inviteAll;
- (void)_breakCallsIfNecessary:(_Bool)arg1;
- (_Bool)_isVideoUpgradeTo:(id)arg1;
- (_Bool)_isCallUpgradeTo:(id)arg1;
- (id)inviteesInfo;
- (void)endChatWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)_endChatWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)endChatWithError:(int)arg1;
- (void)endChatWithReason:(unsigned int)arg1;
- (void)endChat;
- (void)beginChat;
- (id)description;
- (void)dealloc;
- (id)initOutgoingTo:(id)arg1 isVideo:(_Bool)arg2;
- (id)_initOutgoingTo:(id)arg1 isVideo:(_Bool)arg2 GUID:(id)arg3;
- (id)initIncomingFrom:(id)arg1 isVideo:(_Bool)arg2 callerProperties:(id)arg3;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 GUID:(id)arg4 video:(_Bool)arg5 extraProperties:(id)arg6;

// Remaining properties
@property(readonly, nonatomic) IMAVChatParticipant *initiatorParticipant; // @dynamic initiatorParticipant;
@property(readonly, nonatomic) _Bool isActive; // @dynamic isActive;
@property(readonly, nonatomic) _Bool isStateFinal; // @dynamic isStateFinal;
@property(readonly, nonatomic) NSArray *remoteParticipants; // @dynamic remoteParticipants;

@end

