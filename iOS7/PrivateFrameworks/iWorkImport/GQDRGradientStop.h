/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GQDColor;

// Not exported
@interface GQDRGradientStop : NSObject
{
    float mFraction;
    GQDColor *mColor;
}

+ (const struct StateSpec *)stateForReading;
- (id)color;
- (float)fraction;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (void)dealloc;

@end

