/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

// Not exported
@interface RTFNSFont : NSObject
{
    NSString *_fontName;
    double _fontSize;
    double _pointSize;
}

+ (id)fontWithName:(id)arg1 size:(double)arg2;
+ (id)systemFontOfSize:(double)arg1;
+ (id)userFontOfSize:(double)arg1;
+ (id)userFixedPitchFontOfSize:(double)arg1;
@property double pointSize; // @synthesize pointSize=_pointSize;
@property double fontSize; // @synthesize fontSize=_fontSize;
@property(retain) NSString *fontName; // @synthesize fontName=_fontName;
- (unsigned long long)mostCompatibleStringEncoding;
- (id)initWithName:(id)arg1 size:(double)arg2;

@end

