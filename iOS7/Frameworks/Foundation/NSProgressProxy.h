/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSProgress.h>

// Not exported
@interface NSProgressProxy : NSProgress
{
    id <NSProgressPublisher> _forwarder;
    _Bool _isOld;
    id _unpublishingHandler;
}

- (_Bool)isOld;
- (void)acknowledgeWithSuccess:(_Bool)arg1;
- (void)prioritize;
- (void)pause;
- (void)cancel;
- (void)unpublish;
- (void)publish;
- (void)setKind:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)setPrioritizationHandler:(id)arg1;
- (void)setPrioritizable:(_Bool)arg1;
- (void)setPausingHandler:(id)arg1;
- (void)setCancellationHandler:(id)arg1;
- (void)setPausable:(_Bool)arg1;
- (void)setCancellable:(_Bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)resignCurrent;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)_invokeUnpublishingHandler;
- (void)_invokePublishingHandler:(id)arg1;
- (void)dealloc;
- (id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(_Bool)arg3;

@end

