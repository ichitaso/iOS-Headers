/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

// Not exported
@interface TSCH3DObjectStateRenderProcessor : TSCH3DRetargetRenderProcessor
{
    StateStack_22d3dc01 mObjectStateStack;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resetBuffers;
- (void)popState;
- (void)pushState;
- (StateStack_22d3dc01 *)objectStateStack;

@end

