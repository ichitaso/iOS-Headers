/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MPImageModifier : NSObject
{
}

- (struct CGRect)imageFrameForContentSize:(struct CGSize)arg1 imageFrame:(struct CGRect)arg2 imageSubRect:(struct CGRect)arg3;
- (struct CGSize)contentSizeForSize:(struct CGSize)arg1;
- (void)drawImageForegroundWithContext:(struct CGContext *)arg1 contentSize:(struct CGSize)arg2 contentSubRect:(struct CGRect)arg3;
- (void)drawImageBackgroundWithContext:(struct CGContext *)arg1 contentSize:(struct CGSize)arg2 contentSubRect:(struct CGRect)arg3;
- (_Bool)shouldModifyImageWithContentSize:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 imageSubRect:(struct CGRect)arg3;
@property(readonly, nonatomic) _Bool fastEnoughToApplySynchronously;

@end

