/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UILabel;

@interface MPClosedCaptionDisplay : UIView
{
    UILabel *_label;
    UIView *_backgroundView;
    _Bool _hidden;
    _Bool _rotating;
}

- (void).cxx_destruct;
- (void)setText:(id)arg1;
- (void)_updatePositioning:(_Bool)arg1;
- (void)setNeedsLayout;
- (void)endLayoutChange;
- (void)startLayoutChange:(_Bool)arg1;
- (void)_hidePanel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

