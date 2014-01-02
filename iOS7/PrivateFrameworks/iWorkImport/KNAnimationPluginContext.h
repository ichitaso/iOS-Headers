/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <iWorkImport/KNAnimationPluginContext-Protocol.h>

@class KNAnimatedBuild, NSArray, NSDictionary;

// Not exported
@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext>
{
    KNAnimatedBuild *_animatedBuild;
    NSArray *_magicMoveMatches;
    double _percent;
    NSArray *_textures;
    NSDictionary *_transitionAttributes;
    unsigned long long _direction;
    double _duration;
    long long _rendererType;
}

@property(nonatomic) long long rendererType; // @synthesize rendererType=_rendererType;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) NSDictionary *transitionAttributes; // @synthesize transitionAttributes=_transitionAttributes;
@property(nonatomic) NSArray *textures; // @synthesize textures=_textures;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) NSArray *magicMoveMatches; // @synthesize magicMoveMatches=_magicMoveMatches;
@property(nonatomic) KNAnimatedBuild *animatedBuild; // @synthesize animatedBuild=_animatedBuild;
- (id)description;
@property(readonly, nonatomic) _Bool isFrameRenderer;
@property(readonly, nonatomic) _Bool isMagicMove;
@property(readonly, nonatomic) _Bool isTransition;
@property(readonly, nonatomic) _Bool isBuild;

@end

