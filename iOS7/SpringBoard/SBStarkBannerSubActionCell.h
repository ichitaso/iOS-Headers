/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBCollectionViewCell.h"

@class NSString, UILabel;

@interface SBStarkBannerSubActionCell : SBCollectionViewCell
{
    UILabel *_label;
    _Bool _roundedCorners;
}

- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_didSetHighlighted:(_Bool)arg1;
@property(nonatomic) _Bool roundedCorners;
@property(copy, nonatomic) NSString *labelText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

