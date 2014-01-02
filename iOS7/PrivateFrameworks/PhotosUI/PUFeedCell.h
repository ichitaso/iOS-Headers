/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionViewCell.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSIndexPath, NSString, UITapGestureRecognizer;

@interface PUFeedCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    _Bool _tappable;
    id <PUFeedCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    NSString *_representedElementKind;
    UITapGestureRecognizer *__tapGestureRecognizer;
}

@property(retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(retain, nonatomic) NSString *representedElementKind; // @synthesize representedElementKind=_representedElementKind;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic, getter=isTappable) _Bool tappable; // @synthesize tappable=_tappable;
@property(nonatomic) __weak id <PUFeedCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldRecognizerTap:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_updateTapGestureRecognizer;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;

@end

