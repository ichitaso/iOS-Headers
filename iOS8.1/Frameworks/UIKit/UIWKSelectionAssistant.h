//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIWebSelectionAssistant.h>

@class UILongPressGestureRecognizer, _UITextServiceSession;

@interface UIWKSelectionAssistant : UIWebSelectionAssistant
{
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
}

- (void)showTextServiceFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)blockSelectionChangedWithTouch:(int)arg1 withFlags:(int)arg2 growThreshold:(float)arg3 shrinkThreshold:(float)arg4;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(int)arg2 withFlags:(int)arg3;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(int)arg2;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(int)arg2 withState:(int)arg3 withFlags:(int)arg4;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(int)arg2 withState:(int)arg3;
- (void)showDictionaryFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (BOOL)shouldHandleSingleTapAtPoint:(struct CGPoint)arg1;
- (void)selectionChanged;
- (struct CGRect)selectionFrame;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(readonly, nonatomic) UILongPressGestureRecognizer *selectionLongPressRecognizer;
- (id)initWithView:(id)arg1;

@end
