/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <BackBoardServices/BKSBaseXPCClient.h>

@interface BKSSystemServiceClient : BKSBaseXPCClient
{
}

- (void)fireCompletion:(id)arg1 reasonResult:(void)arg2 error:(int)arg3;
- (void)fireCompletion:(id)arg1 pidResult:(void)arg2 error:(int)arg3;
- (void)fireCompletion:(id)arg1 bundleIDResult:(void)arg2 error:(id)arg3;
- (void)fireCompletion:(id)arg1 error:(void)arg2;
- (id)clientCallbackQueue;
- (void)_sendMessageType:(int)arg1 withMessage:(id)arg2 withReplyHandler:(void)arg3 waitForReply:(id)arg4;
- (void)queue_connectionWasCreated;
- (void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 withResult:(id)arg5;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 withResult:(id)arg5;
- (void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned int)arg4 withResult:(id)arg5;
- (void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(id)arg4;
- (void)canActivateApplication:(id)arg1 withResult:(id)arg2;
- (void)pidForApplication:(id)arg1 withResult:(id)arg2;
- (void)systemApplicationBundleIdentifierWithResult:(id)arg1;
- (void)invalidate;
- (id)initWithEndpoint:(id)arg1;
- (id)init;

@end

