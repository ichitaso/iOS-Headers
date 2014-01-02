/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface ABPersonTableActionDataSource : NSObject
{
    NSMutableArray *_topActions;
    NSMutableArray *_bottomActions;
    struct __CFDictionary *_actionsByProperty;
    struct __CFDictionary *_actionGroupingsByProperty;
    struct __CFDictionary *_inlineActionsByProperty;
    struct __CFSet *_hiddenActions;
}

- (id)actionWithActionGrouping:(long long)arg1 atIndex:(long long)arg2;
- (struct __CFArray *)indexesOfActionsForProperty:(int)arg1 withActionGrouping:(long long)arg2;
- (long long)actionCountForActionGrouping:(long long)arg1;
- (id)actionsForProperty:(int)arg1 withActionGroupingAtIndex:(long long)arg2;
- (id)actionForProperty:(int)arg1 withActionGrouping:(long long)arg2 atIndex:(long long)arg3;
- (long long)actionCountForProperty:(int)arg1 withActionGrouping:(long long)arg2;
- (long long)groupingCountForProperty:(int)arg1;
- (struct __CFArray *)groupingsForProperty:(int)arg1;
- (id)newActionsForProperty:(int)arg1;
- (id)actionsForProperty:(int)arg1 withActionGrouping:(long long)arg2;
- (void)removeAction:(id)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 forProperty:(int)arg3 withActionGrouping:(long long)arg4 ordering:(long long)arg5;
- (_Bool)hasActionWithTarget:(id)arg1 selector:(SEL)arg2 property:(int)arg3 actionGrouping:(long long)arg4 ordering:(long long)arg5 outActions:(id *)arg6 outIndex:(long long *)arg7;
- (_Bool)hasActionWithTarget:(id)arg1 selector:(SEL)arg2 matchProperty:(_Bool)arg3 property:(int)arg4 inArray:(id)arg5 outActions:(id *)arg6 outIndex:(long long *)arg7;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(int)arg4 target:(id)arg5 selector:(SEL)arg6 property:(int)arg7 actionGrouping:(long long)arg8 ordering:(long long)arg9;
- (id)bottomActions;
- (id)topActions;
- (struct __CFDictionary *)actionGroupingsByProperty;
- (struct __CFDictionary *)inlineActionsByProperty;
- (struct __CFDictionary *)actionsByProperty;
- (void)dealloc;

@end

