/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIColor;

@interface PLCameraOverlayTextLabelView : UIView
{
    NSString *_text;
    double _textSize;
    double _textStrokeWidth;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double textStrokeWidth; // @synthesize textStrokeWidth=_textStrokeWidth;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 textSize:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2 textSize:(double)arg3;

@end

