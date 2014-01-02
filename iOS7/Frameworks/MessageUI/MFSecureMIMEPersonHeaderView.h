/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSArray, NSString, UILabel;

@interface MFSecureMIMEPersonHeaderView : UIView
{
    UIView *_backgroundView;
    UIView *_signedLabel;
    UIView *_secureLabel;
    UIView *_warningLabel;
    UILabel *_label;
    NSArray *_buttons;
    unsigned int _editing:1;
}

+ (id)_explanationLabelDefaultAttributes;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (id)_warningLabel;
- (id)_secureLabel;
- (id)_signedLabel;
- (void)_insert:(_Bool)arg1 subview:(id)arg2;
- (void)_setText:(id)arg1 forLabel:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) _Bool editing;
@property(copy, nonatomic) NSString *explanationText;
@property(copy, nonatomic) NSString *warningLabelText;
@property(copy, nonatomic) NSString *secureLabelText;
@property(copy, nonatomic) NSString *signedLabelText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

