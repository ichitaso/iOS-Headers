/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKCommand.h>

@class TSDGuideStorage, TSDUserDefinedGuide;

// Not exported
@interface TSDGuideCommand : TSKCommand
{
    TSDGuideStorage *mStorage;
    TSDUserDefinedGuide *mOldGuide;
    TSDUserDefinedGuide *mNewGuide;
    unsigned long long mMode;
}

- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)redo;
- (void)undo;
- (void)commit;
- (_Bool)process;
- (void)dealloc;
- (id)initWithGuideStorage:(id)arg1 mode:(unsigned long long)arg2 oldGuide:(id)arg3 newGuide:(id)arg4;

@end

