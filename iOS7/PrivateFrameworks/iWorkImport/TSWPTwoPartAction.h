/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSWPTwoPartAction : NSObject
{
    id _startAction;
    id _cancelAction;
    id _finishAction;
    _Bool _performImmediately;
}

+ (id)actionWithStartAction:(id)arg1 cancelAction:(void)arg2 finishAction:(id)arg3;
@property _Bool performImmediately; // @synthesize performImmediately=_performImmediately;
- (void)cancel;
- (void)performFinishAction;
- (void)performStartAction;
- (void)dealloc;
- (id)initWithStartAction:(id)arg1 cancelAction:(void)arg2 finishAction:(id)arg3;

@end

