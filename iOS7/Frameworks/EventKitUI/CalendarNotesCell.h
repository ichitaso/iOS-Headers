/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class NSString, UITextView;

@interface CalendarNotesCell : UITableViewCell
{
    UITextView *_textView;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *placeholder;
- (_Bool)becomeFirstResponder;
@property(readonly, nonatomic) UITextView *textView;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

