/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPTextBaseCommand.h>

@class NSString, TSWPStorage;

// Not exported
@interface TSWPApplyRubyTextCommand : TSWPTextBaseCommand
{
    struct _NSRange _range;
    NSString *_rubyText;
    struct TSWPStorageTransaction *_undoRedoTransaction;
    TSWPStorage *_storage;
}

@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (id).cxx_construct;
- (void)redo;
- (void)undo;
- (void)p_undoRedo;
- (void)commit;
- (_Bool)process;
- (_Bool)shouldRunSynchronously;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ApplyRubyTextCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ApplyRubyTextCommandArchive *)arg1 archiver:(id)arg2;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 range:(struct _NSRange)arg2 rubyText:(id)arg3;

@end

