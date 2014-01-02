/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSWPLoadableFonts : NSObject
{
    struct TSWPLoadableFontInfo *_loadableFonts;
    unsigned int _loadableFontCount;
    _Bool _allFontsLoaded;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)_singletonAlloc;
- (void)p_loadFontWithInfo:(struct TSWPLoadableFontInfo *)arg1;
- (void)loadFontWithName:(id)arg1;
- (void)loadAll;
- (void)backgroundLoadAll;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

