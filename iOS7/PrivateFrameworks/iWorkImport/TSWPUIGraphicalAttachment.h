/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPAttachment.h>

// Not exported
@interface TSWPUIGraphicalAttachment : TSWPAttachment
{
}

- (_Bool)wantsSelectionAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) double baselineOffset;
@property(readonly, nonatomic) struct CGSize size;
- (void)invalidate;
- (id)rendererForAttachment;
- (int)elementKind;
- (void)saveToArchive:(struct UIGraphicalAttachment *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct UIGraphicalAttachment *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end

