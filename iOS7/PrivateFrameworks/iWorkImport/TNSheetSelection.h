/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKSelection.h>

@class TNSheet;

// Not exported
@interface TNSheetSelection : TSKSelection
{
    _Bool mIsPaginated;
    TNSheet *mSheet;
}

+ (id)selectionForSheet:(id)arg1 paginated:(_Bool)arg2;
+ (Class)archivedSelectionClass;
@property(readonly, nonatomic, getter=isPaginated) _Bool paginated; // @synthesize paginated=mIsPaginated;
@property(readonly, nonatomic) TNSheet *sheet; // @synthesize sheet=mSheet;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSheet:(id)arg1 paginated:(_Bool)arg2;

@end

