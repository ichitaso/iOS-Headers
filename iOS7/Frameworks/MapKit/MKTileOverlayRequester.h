/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "GEOTileRequester.h"

@class NSMutableArray, NSMutableSet;

// Not exported
@interface MKTileOverlayRequester : GEOTileRequester
{
    _Bool _cancelled;
    NSMutableArray *_waiting;
    NSMutableSet *_running;
    NSMutableArray *_errors;
}

+ (void)unregisterOverlay:(unsigned int)arg1;
+ (unsigned int)registerOverlay:(id)arg1;
+ (unsigned char)tileProviderIdentifier;
- (void)dealloc;
- (void)cancel;
- (_Bool)isRunning;
- (void)start;
- (void)_operationFailed:(id)arg1 error:(id)arg2;
- (void)_operationFinished:(id)arg1;
- (void)_cleanup;
- (void)_doWorkOrFinish;

@end

