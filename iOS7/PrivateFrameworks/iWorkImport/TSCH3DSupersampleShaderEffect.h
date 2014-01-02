/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DShaderEffect.h>

@class TSCH3DShaderVariable;

// Not exported
@interface TSCH3DSupersampleShaderEffect : TSCH3DShaderEffect
{
    unsigned long long mSize;
    unsigned long long mSamples;
    TSCH3DShaderVariable *mSupersampleTexcoords;
}

+ (id)effectWithSize:(unsigned long long)arg1 samples:(unsigned long long)arg2;
+ (id)variableAccum;
- (void)inject:(id)arg1;
- (void)p_addSampleAtX:(float)arg1 y:(float)arg2 weight:(double)arg3 program:(id)arg4 accumVariable:(id)arg5 variableIndex:(unsigned long long)arg6;
- (void)addVariables:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithSize:(unsigned long long)arg1 samples:(unsigned long long)arg2;
- (id)variableAccum;

@end

