/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDS/_IDSIDQueryController.h>

@interface _IDSIDQueryController (XPC)
- (id)__sendMessage:(id)arg1 queue:(id)arg2 reply:(id)arg3 failBlock:(void)arg4 waitForReply:(id)arg5;
- (void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(id)arg4;
- (void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(id)arg4;
- (void)_requestCacheForService:(id)arg1 completionBlock:(id)arg2;
- (void)_disconnectFromQueryService;
@end

