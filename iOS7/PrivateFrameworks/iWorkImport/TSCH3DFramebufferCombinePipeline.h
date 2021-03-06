/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DFramebufferCopyPipeline.h>

@class TSCH3DGLFramebuffer;

// Not exported
@interface TSCH3DFramebufferCombinePipeline : TSCH3DFramebufferCopyPipeline
{
    id <TSCH3DPipelineLinkable> mSource1;
    TSCH3DGLFramebuffer *mInput1;
    unsigned long long mTextureUnit1;
}

@property(retain, nonatomic) id <TSCH3DPipelineLinkable> source1; // @synthesize source1=mSource1;
- (void)updateShaderEffectsStates;
- (_Bool)run;
- (void)loadSource;
@property(retain, nonatomic) id <TSCH3DPipelineLinkable> source0;
- (void)dealloc;

@end

