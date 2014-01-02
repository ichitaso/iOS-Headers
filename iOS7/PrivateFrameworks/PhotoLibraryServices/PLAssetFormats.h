/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PLAssetFormats : NSObject
{
}

+ (_Bool)isAlbumVideoPath:(id)arg1;
+ (_Bool)transformForImage:(struct CGImage *)arg1 captureOrientation:(int)arg2 format:(int)arg3 sizeInOut:(struct CGSize *)arg4 contextSizeOut:(struct CGSize *)arg5 transformOut:(struct CGAffineTransform *)arg6;
+ (struct CGSize)scaledSizeForSize:(struct CGSize)arg1 format:(int)arg2 capLength:(_Bool)arg3;
+ (_Bool)formatIsFullscreen:(int)arg1;
+ (_Bool)formatSizeIsShortSide:(int)arg1;
+ (_Bool)formatIsBadgedForVideo:(int)arg1;
+ (_Bool)formatIsCropped:(int)arg1;
+ (unsigned long long)maxLongSideForFullSizeFormat:(int)arg1;
+ (unsigned long long)minShortSideForFullSizeFormat:(int)arg1;
+ (unsigned long long)desiredLongSideForFullSizeFormat:(int)arg1;
+ (struct CGSize)sizeForFormat:(int)arg1;

@end

