/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "OCDDelayedNodeContext-Protocol.h"

@class EBReaderSheetState;

// Not exported
@interface EBSheetContext : NSObject <OCDDelayedNodeContext>
{
    EBReaderSheetState *mSheetState;
    unsigned int mSheetIndex;
}

- (_Bool)loadDelayedNode:(id)arg1;
- (void)dealloc;
- (id)initWithSheetIndex:(unsigned int)arg1 state:(id)arg2;

@end

