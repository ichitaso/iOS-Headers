/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUHorizontalCollectionViewLayout.h>

@class NSIndexPath;

@interface PUAvalancheReviewCollectionViewLayout : PUHorizontalCollectionViewLayout
{
    NSIndexPath *_zoomingCellIndexPath;
    struct UIOffset _sharingBadgeOffset;
}

@property(retain, nonatomic) NSIndexPath *zoomingCellIndexPath; // @synthesize zoomingCellIndexPath=_zoomingCellIndexPath;
@property(nonatomic) struct UIOffset sharingBadgeOffset; // @synthesize sharingBadgeOffset=_sharingBadgeOffset;
- (void).cxx_destruct;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)_supportsAdvancedTransitionAnimations;
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1;
- (struct CGRect)_floatingSelectionBadgeFrameForItemFrame:(struct CGRect)arg1 visibleItemFrame:(struct CGRect)arg2 atIndexPath:(id)arg3;

// Remaining properties
@property(nonatomic) __weak id <PUAvalancheReviewCollectionViewLayoutDelegate> delegate;

@end

