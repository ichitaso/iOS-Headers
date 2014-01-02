/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector;

// Not exported
@interface CILinearGradient : CIFilter
{
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    CIColor *inputColor0;
    CIColor *inputColor1;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIColor *inputColor1; // @synthesize inputColor1;
@property(retain, nonatomic) CIColor *inputColor0; // @synthesize inputColor0;
@property(retain, nonatomic) CIVector *inputPoint1; // @synthesize inputPoint1;
@property(retain, nonatomic) CIVector *inputPoint0; // @synthesize inputPoint0;
- (id)outputImage;
- (void)setDefaults;
- (id)_kernel;

@end

