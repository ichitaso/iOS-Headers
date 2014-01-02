/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIGestureRecognizer.h>

// Not exported
@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer
{
    unsigned int _systemGesturesRecognitionPossible:1;
    unsigned int _waitingForSystemGestureStateNotification:1;
    double _lastTouchTime;
}

- (id)_gateGestureTypeString;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)_shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (_Bool)_shouldReceiveTouch:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (int)_gateGestureType;
- (void)_systemGestureStateChanged:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

