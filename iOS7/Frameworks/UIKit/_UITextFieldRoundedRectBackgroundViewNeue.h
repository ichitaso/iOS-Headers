/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIImageView.h>

@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIImageView
{
    _Bool _disabled;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    double _lineWidth;
    double _cornerRadius;
}

@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void)setActive:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_fillColor:(_Bool)arg1;
- (id)_strokeColor:(_Bool)arg1;
- (void)updateView;
- (id)_initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2 lineWidth:(double)arg3 updateView:(_Bool)arg4;
- (id)_initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2 lineWidth:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)_pixelAlignment;
- (double)_pathInset;

@end

