/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCHRenderer.h>

// Not exported
@interface TSCHChartTitleRenderer : TSCHRenderer
{
}

- (struct CGRect)frameForEditingTextForSelectionPath:(id)arg1;
- (_Bool)canEditTextForSelectionPath:(id)arg1;
- (void)addSelection:(id)arg1 toCGPath:(struct CGPath *)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 selection:(id)arg2;
- (_Bool)canRenderSelectionPath:(id)arg1;
- (void)p_renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)p_drawTitle:(struct CGContext *)arg1 rangePtr:(struct _NSRange *)arg2;
- (void)useEditedString:(id)arg1;

@end

