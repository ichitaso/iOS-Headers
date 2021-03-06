/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EDColorReference, EDResources;

@interface EDBorder : NSObject
{
    EDResources *mResources;
    int mType;
    EDColorReference *mColorReference;
    int mDiagonalType;
}

+ (id)borderWithType:(int)arg1 resources:(id)arg2;
+ (id)borderWithType:(int)arg1 color:(id)arg2 resources:(id)arg3;
+ (id)borderWithType:(int)arg1 color:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4;
- (id)initWithResources:(id)arg1;
- (void)dealloc;
- (BOOL)isEqualToBorder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (int)type;
- (void)setType:(int)arg1;
- (int)diagonalType;
- (void)setDiagonalType:(int)arg1;
- (id)color;

@end

