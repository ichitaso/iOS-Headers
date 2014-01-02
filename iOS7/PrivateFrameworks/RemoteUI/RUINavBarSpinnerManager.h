/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface RUINavBarSpinnerManager : NSObject
{
    NSMutableDictionary *_savedRightItems;
    NSMutableDictionary *_navigationItems;
    long long _activityIndicatorViewStyle;
}

+ (id)sharedSpinnerManager;
@property(nonatomic) long long activityIndicatorViewStyle; // @synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle;
- (void)stopAnimatingForIdentifier:(id)arg1;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2;
- (void)dealloc;
- (id)init;

@end

