/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "RemoteUITableHeader-Protocol.h"

@class UIImageView, UILabel;

@interface RemoteUIIconHeader : UIView <RemoteUITableHeader>
{
    UILabel *_header;
    UILabel *_subHeader;
    UIImageView *_iconView;
    _Bool _isFirstSection;
    int _alignment;
}

- (double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setSectionIsFirst:(_Bool)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setIconImage:(id)arg1;
- (id)initWithAttributes:(id)arg1;

@end

