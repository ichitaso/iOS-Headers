/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PCInterfaceMonitorProtocol-Protocol.h"

@protocol PCInterfaceUsabilityMonitorProtocol <PCInterfaceMonitorProtocol>
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, nonatomic) _Bool isRadioHot;
- (void)setTrackUsability:(_Bool)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackedTimeInterval:(double)arg1;
@end

