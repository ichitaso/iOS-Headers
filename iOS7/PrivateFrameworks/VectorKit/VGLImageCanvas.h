/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "VGLCanvas-Protocol.h"

@class VGLContext, VGLFramebuffer, VGLTexture;

// Not exported
@interface VGLImageCanvas : NSObject <VGLCanvas>
{
    VGLContext *_targetContext;
    VGLFramebuffer *_targetFramebuffer;
    VGLTexture *_targetTexture;
    struct CGSize _size;
    double _contentScale;
    _Bool _useDepthBuffer;
    _Bool _useStencilBuffer;
    struct _VGLColor _glClearColor;
    _Bool _canMakeImage;
    _Bool _recreateFramebuffer;
}

+ (struct CGImage *)newImageFromTargetTexture:(id)arg1;
+ (void *)bitmapData:(unsigned long long *)arg1 fromTexture:(id)arg2;
+ (Class)contextClass;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic) struct _VGLColor glClearColor; // @synthesize glClearColor=_glClearColor;
@property(nonatomic) _Bool useStencilBuffer; // @synthesize useStencilBuffer=_useStencilBuffer;
@property(nonatomic) _Bool useDepthBuffer; // @synthesize useDepthBuffer=_useDepthBuffer;
@property(readonly, nonatomic) VGLContext *vglContext; // @synthesize vglContext=_targetContext;
- (id).cxx_construct;
- (struct CGImage *)newImage;
- (void *)bitmapData:(unsigned long long *)arg1;
- (void)didDrawView;
- (void)willDrawView;
- (void)_destroyFramebuffer;
- (void)_createFramebuffer;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 context:(id)arg3;
@property(readonly, nonatomic) struct CGSize sizeInPixels;
@property(nonatomic) _Bool useMultisampling;

@end

