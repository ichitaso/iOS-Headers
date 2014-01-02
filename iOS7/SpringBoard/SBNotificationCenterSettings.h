/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UISettings.h"

@class SBBounceSettings;

@interface SBNotificationCenterSettings : _UISettings
{
    SBBounceSettings *_bounceSettings;
    double _grabberAnimationDuration;
    double _modeButtonTintLevel;
    double _modeButtonTintAlpha;
    double _modeLabelTintLevel;
    double _modeLabelTintAlpha;
}

+ (id)settingsControllerModule;
@property(nonatomic) double modeLabelTintAlpha; // @synthesize modeLabelTintAlpha=_modeLabelTintAlpha;
@property(nonatomic) double modeLabelTintLevel; // @synthesize modeLabelTintLevel=_modeLabelTintLevel;
@property(nonatomic) double modeButtonTintAlpha; // @synthesize modeButtonTintAlpha=_modeButtonTintAlpha;
@property(nonatomic) double modeButtonTintLevel; // @synthesize modeButtonTintLevel=_modeButtonTintLevel;
@property double grabberAnimationDuration; // @synthesize grabberAnimationDuration=_grabberAnimationDuration;
@property(retain, nonatomic) SBBounceSettings *bounceSettings; // @synthesize bounceSettings=_bounceSettings;
- (void)setDefaultValues;

@end

