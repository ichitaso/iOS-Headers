/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

// Not exported
@interface _UICollectionViewTrackedValue : NSObject
{
    double _trackedValue;
    NSArray *_values;
    long long _valuesCount;
    long long _currentIndex;
    _Bool _isAccumulating;
}

@property(nonatomic) double trackedValue; // @synthesize trackedValue=_trackedValue;
@property(nonatomic) _Bool isAccumulating; // @synthesize isAccumulating=_isAccumulating;
- (double)speed;
- (void)addValue:(double)arg1;
- (id)init;

@end

