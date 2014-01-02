/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MPDocument.h>

@interface MPDocument (MediaManagement)
- (double)stopTimeForAssetAtPath:(id)arg1;
- (double)startTimeForAssetAtPath:(id)arg1;
- (id)attributeForAssetAtPath:(id)arg1 forKey:(id)arg2;
- (struct CGSize)resolutionForAssetAtPath:(id)arg1;
- (_Bool)isSupportedMovieForAssetAtPath:(id)arg1;
- (struct __IOSurface *)IOSurfaceForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3;
- (id)dataForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (struct CGImage *)thumbnailCGImageForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (struct CGImage *)CGImageForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3 thumbnailIfPossible:(_Bool)arg4 now:(_Bool)arg5;
- (struct CGImage *)CGImageForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForAssetAtPath:(id)arg1;
@end

