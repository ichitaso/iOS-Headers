/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ISURLOperationPool, NSArray, SUImageCache, SUVariableCellConfigurationCache;

@interface SUTableDataSource : NSObject
{
    id _cellReuseSource;
    long long _columnCount;
    SUVariableCellConfigurationCache *_configurationCache;
    long long _preferringUserInteractionCount;
}

@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) id cellReuseSource; // @synthesize cellReuseSource=_cellReuseSource;
- (id)titleForHeaderInSection:(long long)arg1;
- (id)titleForDeleteConfirmationForIndexPath:(id)arg1;
@property(readonly, nonatomic) long long tableViewStyle;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
- (long long)sectionIndexForIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (void)resetLayoutCaches;
- (void)resetCaches;
- (void)reloadData;
- (void)reloadCellContexts;
- (id)placeholderCellForIndexPath:(id)arg1;
@property(readonly, nonatomic) long long numberOfSections;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfColumnsInSection:(long long)arg1;
@property(readonly, nonatomic, getter=isPreferringUserInteraction) _Bool preferringUserInteraction;
@property(readonly, nonatomic) ISURLOperationPool *imagePool;
@property(readonly, nonatomic) SUImageCache *imageCache;
- (double)heightForPlaceholderCells;
- (double)heightForFooterInSection:(long long)arg1;
- (id)headerViewForSection:(long long)arg1;
- (void)endPreferringUserInteraction;
- (void)didEndPreferringUserInteraction;
- (void)didBeginPreferringUserInteraction;
- (_Bool)deleteIndexPath:(id)arg1;
- (void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (double)cellHeightForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)cellContextForConfigurationClass:(Class)arg1;
- (_Bool)canSelectIndexPath:(id)arg1;
- (_Bool)canDoubleTapIndexPath:(id)arg1;
- (_Bool)canDeleteIndexPath:(id)arg1;
- (id)cachedConfigurationForClass:(Class)arg1 index:(long long)arg2;
- (void)beginPreferringUserInteraction;
- (void)dealloc;
- (id)init;

@end

