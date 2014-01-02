/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIView;

@interface SBViewSnapshotProvider : NSObject
{
    UIView *_view;
    id _completionBlock;
}

@property(copy, nonatomic) id completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)snapshotAsynchronously:(_Bool)arg1 withImageBlock:(id)arg2;
- (void)snapshotWithImageBlock:(id)arg1;
- (id)snapshot;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

