//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNActionEffectBuildAnimator.h"
#import "KNAnimationPluginArchiving.h"
#import "KNAnimationPluginObsoleteNames.h"

__attribute__((visibility("hidden")))
@interface KNActionOpacity : KNAnimationEffect <KNActionEffectBuildAnimator, KNAnimationPluginArchiving, KNAnimationPluginObsoleteNames>
{
}

+ (id)thumbnailImageNameForType:(int)arg1;
+ (BOOL)requiresHighQualityTextures;
+ (id)applyActionEffect:(id)arg1 toAttributes:(id)arg2;
+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (id)obsoleteAnimationNames;
+ (id)actionEffectStyle;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned int)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (id)animationsForTextureSet:(id)arg1 finalTextureSet:(id)arg2 duration:(double)arg3 attributes:(id)arg4 previousAttributes:(id)arg5;

@end

