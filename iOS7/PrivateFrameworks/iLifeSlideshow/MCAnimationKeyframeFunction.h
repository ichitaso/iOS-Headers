/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCAnimationKeyframe.h>

@class NSDictionary, NSString;

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe
{
    float mInnerEaseInControl;
    float mInnerEaseOutControl;
    double mDuration;
    NSString *mFunction;
    NSDictionary *mFunctionParameters;
    double mFunctionTimeOffset;
    double mFunctionTimeFactor;
}

+ (id)keyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetKind:(int)arg3 forDuration:(double)arg4;
@property(nonatomic) float innerEaseOutControl; // @synthesize innerEaseOutControl=mInnerEaseOutControl;
@property(nonatomic) float innerEaseInControl; // @synthesize innerEaseInControl=mInnerEaseInControl;
@property(nonatomic) double functionTimeFactor; // @synthesize functionTimeFactor=mFunctionTimeFactor;
@property(nonatomic) double functionTimeOffset; // @synthesize functionTimeOffset=mFunctionTimeOffset;
@property(nonatomic) double duration; // @synthesize duration=mDuration;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)description;
@property(retain, nonatomic) NSDictionary *functionParameters; // @synthesize functionParameters=mFunctionParameters;
@property(copy, nonatomic) NSString *function; // @synthesize function=mFunction;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;
- (id)init;

@end

