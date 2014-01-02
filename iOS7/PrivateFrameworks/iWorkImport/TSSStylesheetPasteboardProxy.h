/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPObject.h>

@class NSObject<OS_dispatch_queue>, TSSStylesheet, TSUMutableRetainedPointerSet;

// Not exported
@interface TSSStylesheetPasteboardProxy : TSPObject
{
    TSSStylesheet *mStylesheet;
    TSUMutableRetainedPointerSet *mReferencedStyles;
    NSObject<OS_dispatch_queue> *mReferencedStylesQueue;
    _Bool mSelfArchiving;
}

- (void)saveToArchiver:(id)arg1;
- (void)addStyleReference:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 stylesheet:(id)arg2;

@end

