/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCAction.h>

@class NSArray, NSMutableArray;

@interface MCActionGroup : MCAction
{
    NSMutableArray *_actions;
}

+ (id)actionGroup;
- (id)description;
- (void)_copySelfToSnapshot:(id)arg1;
- (void)moveActionsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllActions;
- (void)removeActionsAtIndices:(id)arg1;
- (void)insertActions:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertAction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addActions:(id)arg1;
- (void)addAction:(id)arg1;
- (id)actionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long countOfActions;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;
- (id)init;

@end

