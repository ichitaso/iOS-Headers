/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, Protocol;

@interface BBXPCConnection : NSObject
{
    id _remoteProxy;
    NSObject<OS_dispatch_queue> *_queue;
    id <XPCProxyTarget> _target;
    id <BBXPCConnectionDelegate> _delegate;
    _Bool _established;
    _Bool _invalidated;
    Protocol *_protocol;
}

@property(nonatomic) id <BBXPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_invalidateConnection;
- (void)_noteConnectionStateDidChange:(_Bool)arg1;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;
- (_Bool)isValid;
- (void)invalidate;
- (void)resume;
@property(readonly, nonatomic) id proxy; // @synthesize proxy=_remoteProxy;
- (_Bool)established;
- (id)_queue;
- (id)description;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 target:(id)arg2 remoteProtocol:(id)arg3;
- (id)init;

@end

