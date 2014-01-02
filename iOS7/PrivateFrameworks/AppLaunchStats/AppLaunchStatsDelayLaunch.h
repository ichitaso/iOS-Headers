/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DuetLoggerProtocol-Protocol.h"
#import "DuetSaveAndRestore-Protocol.h"

@class AppLaunchStatsSaveAndRestore, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AppLaunchStatsDelayLaunch : NSObject <DuetLoggerProtocol, DuetSaveAndRestore>
{
    NSObject<OS_dispatch_queue> *aplsDelayLaunchQueue;
    AppLaunchStatsSaveAndRestore *saveAndRestoreContext;
    NSMutableDictionary *delayLaunchList;
    NSMutableDictionary *delayLaunchTimeInterval;
}

- (void).cxx_destruct;
- (void)logLight:(struct __aslclient *)arg1 withMsg:(struct __aslmsg *)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __aslclient *)arg1 withMsg:(struct __aslmsg *)arg2 withLevel:(int)arg3;
- (void)saveContext:(id)arg1;
- (void)save:(id)arg1;
- (void)restore:(id)arg1;
- (_Bool)shouldDelayLaunch:(id)arg1 forTrending:(_Bool)arg2;
- (void)resetDelayLaunch:(id)arg1;
- (void)delayLaunch:(id)arg1 with:(double)arg2;
- (id)init;

@end

