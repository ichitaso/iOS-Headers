/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "_UISiriWaveyViewDelegate-Protocol.h"

@class UIButton, UIDictationMeterView, UIKeyboardDicationBackground, _UISiriWaveyView;

// Not exported
@interface UIDictationView : UIView <_UISiriWaveyViewDelegate>
{
    UIKeyboardDicationBackground *_background;
    UIButton *_endpointButton;
    UIButton *_endpointButtonLandscape;
    UIButton *_waveTapEndpointButton;
    int _state;
    _Bool _keyboardInTransition;
    _Bool _automaticAppearanceWasEnabled;
    _UISiriWaveyView *_waveyView;
    UIDictationMeterView *_meterView;
}

+ (struct CGSize)layoutSize;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (struct CGSize)viewSize;
+ (Class)dictationViewClass;
- (float)audioLevelForWaveyView:(id)arg1;
- (_Bool)visible;
- (void)endpointButtonPressed;
- (void)dealloc;
- (void)layoutSubviews;
- (_Bool)drawsOwnBackground;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setState:(int)arg1;
- (_Bool)isShowing;
- (void)returnToKeyboard;
- (void)finishReturnToKeyboard;
- (void)prepareForReturnToKeyboard;
- (void)keyboardDidShow:(id)arg1;
- (struct CGPoint)backgroundOffset;
- (struct CGPoint)contentOffset;
- (struct CGPoint)positionForShow;
- (void)show;
- (void)applicationEnteredBackground;
- (struct CGSize)currentScreenSize;
- (id)createEndpointButtonWithRect:(struct CGRect)arg1 action:(SEL)arg2;
- (id)endpointButton;
- (id)endpointButtonImageWithRect:(struct CGRect)arg1 pressed:(_Bool)arg2;
- (void)applicationWillResignActive;

@end

