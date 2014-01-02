/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MPAction.h>

#import "MPActionSupport-Protocol.h"

@class NSString;

@interface MPConditionalAction : MPAction <MPActionSupport>
{
    NSString *_predicate;
    MPAction *_actionIfTrue;
    MPAction *_actionIfFalse;
}

+ (id)conditionalAction;
@property(readonly) MPAction *actionIfFalse; // @synthesize actionIfFalse=_actionIfFalse;
@property(readonly) MPAction *actionIfTrue; // @synthesize actionIfTrue=_actionIfTrue;
@property(copy, nonatomic) NSString *predicate; // @synthesize predicate=_predicate;
- (void)configureTarget;
- (void)configureActions;
- (void)setAction:(id)arg1;
- (void)setAction:(id)arg1 forCondition:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

