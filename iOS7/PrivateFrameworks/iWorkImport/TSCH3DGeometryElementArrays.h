/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSCH3DOrderedDictionary;

// Not exported
@interface TSCH3DGeometryElementArrays : NSObject
{
    TSCH3DOrderedDictionary *mArrays;
    unsigned long long mVertexCount;
    _Bool mBackfacesCulled;
}

+ (id)arrays;
@property(readonly, nonatomic) _Bool backfacesCulled; // @synthesize backfacesCulled=mBackfacesCulled;
@property(readonly, nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=mVertexCount;
- (void)setElementsInFormat:(id)arg1;
- (id)cullBackfacesWithTransform:(const tmat4x4_3074befe *)arg1 keepIndices:(id)arg2;
- (id)bufferForName:(id)arg1;
- (void)setBuffer:(id)arg1 forName:(id)arg2;
- (id)p_makeDictionary;
- (void)dealloc;
- (id)init;

@end

