/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface MRCAMLAnimation : NSObject
{
    double startTime;
    double duration;
    _Bool removedOnCompletion;
    NSString *keyPath;
    NSArray *keyframes;
}

@property(retain, nonatomic) NSArray *keyframes; // @synthesize keyframes;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath;
- (void)dealloc;

@end

