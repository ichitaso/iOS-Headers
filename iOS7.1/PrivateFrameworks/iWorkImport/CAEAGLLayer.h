//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "EAGLDrawable.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CAEAGLLayer : CALayer <EAGLDrawable>
{
    struct _CAEAGLNativeWindow *_win;
}

@property(copy) NSDictionary *drawableProperties;
- (void)setContentsScale:(float)arg1;
- (float)contentsScale;

@end
