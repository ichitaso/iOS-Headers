/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSUFlushingManager;

// Not exported
@interface TSUMemoryWatcher : NSObject
{
    TSUFlushingManager *_flushingManager;
    _Bool _going;
    _Bool _stop;
}

- (void)_simulateMemoryWarning:(id)arg1;
- (void)_periodicallySimulateMemoryWarning:(id)arg1;
- (void)stopObserving;
- (void)beginObserving;
- (void)dealloc;
- (id)initWithFlushingManager:(id)arg1;

@end

