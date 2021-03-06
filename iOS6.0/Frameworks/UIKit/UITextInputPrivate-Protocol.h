/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITextInput-Protocol.h"
#import "UITextInputTokenizer-Protocol.h"
#import "UITextInputTraits_Private-Protocol.h"

@class UITextInteractionAssistant;

@protocol UITextInputPrivate <UITextInput, UITextInputTokenizer, UITextInputTraits_Private>
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (BOOL)hasSelection;
- (id)fontForCaretSelection;
- (id)textColorForCaretSelection;
- (void)selectAll;
- (BOOL)hasContent;
- (void)setMarkedText:(id)arg1;
- (id)markedText;
- (id)wordRangeContainingCaretSelection;
- (id)wordContainingCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (void)moveForward:(unsigned int)arg1;
- (void)moveBackward:(unsigned int)arg1;
- (struct CGRect)rectContainingCaretSelection;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (id)selectedDOMRange;
- (struct _NSRange)_markedTextNSRange;
- (struct CGRect)rectForNSRange:(struct _NSRange)arg1;
- (struct _NSRange)selectionRange;
- (id)textInputTraits;

@optional
@property(nonatomic) int selectionGranularity;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)metadataDictionariesForDictationResults;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)automaticallySelectedOverlay;
- (void)setBottomBufferHeight:(float)arg1;
- (void)handleKeyWebEvent:(id)arg1;
- (BOOL)requiresKeyEvents;
@end

