/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCObject.h>

@class NSMutableSet, NSString;

@interface MCAsset : MCObject
{
    NSMutableSet *mTexts;
    NSString *mPath;
}

@property(copy) NSString *path; // @synthesize path=mPath;
- (void)_copySelfToSnapshot:(id)arg1;
- (void)forgetText:(id)arg1;
- (void)learnText:(id)arg1;
@property(readonly, nonatomic) _Bool isInUse;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;

@end

