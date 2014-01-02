/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VGLProgram.h>

// Not exported
@interface VGLGlyphProgram : VGLProgram
{
    int _uChannel;
    int _channel;
    int _uTextureSampler;
    int _textureSampler;
    int _uFadeTime;
    float _fadeTime;
}

+ (id)fragName;
+ (id)vertName;
@property(nonatomic) float fadeTime;
@property(nonatomic) int textureSampler;
@property(nonatomic) int channel;
- (void)setup;

@end

