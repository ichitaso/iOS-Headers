/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TouchRemote/TRTCPConnection.h>

@class NSMutableArray, NSObject<OS_dispatch_queue>, TRDBrowser, TRService;

@interface TRDServerConnection : TRTCPConnection
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_authorizationCompletionHandlers;
    _Bool _authorized;
    TRDBrowser *_browser;
    NSObject<OS_dispatch_queue> *_packetEventQueue;
    TRService *_service;
}

@property(readonly, nonatomic) TRService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)_browserDidRemoveServiceNotification:(id)arg1;
- (void)_handleReceivedPacketEvent:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)_initWithUniqueID:(int)arg1 connectionStream:(id)arg2 service:(id)arg3 browser:(id)arg4;

@end

