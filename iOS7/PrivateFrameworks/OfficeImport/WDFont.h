/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

// Not exported
@interface WDFont : NSObject <NSCopying>
{
    NSString *mName;
    NSString *mSecondName;
    int mFontFamily;
    int mCharacterSet;
    int mPitch;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;
- (void)setPitch:(int)arg1;
- (int)pitch;
- (void)setCharacterSet:(int)arg1;
- (int)characterSet;
- (void)setFontFamily:(int)arg1;
- (int)fontFamily;
- (void)setSecondName:(id)arg1;
- (id)secondName;
- (void)setName:(id)arg1;
- (id)name;

@end

