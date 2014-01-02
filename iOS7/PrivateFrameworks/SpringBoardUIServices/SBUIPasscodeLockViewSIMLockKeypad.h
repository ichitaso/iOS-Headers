/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpringBoardUIServices/SBUIPasscodeLockViewLongNumericKeypad.h>

@class NSString, UILabel, UIView;

@interface SBUIPasscodeLockViewSIMLockKeypad : SBUIPasscodeLockViewLongNumericKeypad
{
    UILabel *_statusSubtitleView;
    UIView *_entryFieldFiller;
    double _targetEntryFieldFillerAlpha;
    _Bool _isShowingStatus;
    UIView *_statusSpringView;
    UIView *_statusSpringViewParent;
}

- (double)_distanceFromLastLineBaselineToTextFieldBoundsHeight:(id)arg1;
- (double)_distanceToFirstLineBaseline:(id)arg1;
- (id)_statusSubtitleFont;
- (double)_subtitleBaselineYOffsetFromTopOfEntryField;
- (double)_subtitleBaselineYOffsetFromTopOfNumberPad;
- (double)_expectedDistanceBetweenTitleAndSubtitleBaselines;
- (double)_expectedYOffsetBetweenTitleAndSubtitleViews;
- (void)_sizeLabel:(id)arg1;
- (void)_setText:(id)arg1 onLabel:(id)arg2;
- (_Bool)_needsToHideTextFieldForStatus;
- (void)_shakeStatus;
- (void)layoutSubviews;
- (void)_layoutStatusView;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)_setHasInput:(_Bool)arg1;
- (void)resetForFailedPasscode;
- (_Bool)_showsPromptLabelOnEntryField;
- (void)forceShowStatus:(_Bool)arg1;
@property(copy, nonatomic) NSString *statusSubtitle; // @dynamic statusSubtitle;
@property(copy, nonatomic) NSString *statusTitle; // @dynamic statusTitle;
- (void)dealloc;
- (id)init;

@end

