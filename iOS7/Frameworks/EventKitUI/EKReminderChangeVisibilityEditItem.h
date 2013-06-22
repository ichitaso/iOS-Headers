/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKReminderEditItem.h>

@interface EKReminderChangeVisibilityEditItem : EKReminderEditItem
{
    int _visibilityToCommit;
}

@property(readonly, nonatomic) int visibilityToCommit;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned int)arg2 inSubsection:(unsigned int)arg3;
- (id)cellForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned int)arg2 inSubsection:(unsigned int)arg3;
- (BOOL)shouldAppearWithVisibility:(int)arg1;
- (BOOL)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned int)arg2 inSubsection:(unsigned int)arg3;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned int)arg1 inSubsection:(unsigned int)arg2;

@end
