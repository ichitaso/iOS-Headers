//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardMenuView.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardDictationMenu : UIKeyboardMenuView
{
}

+ (id)activeInstance;
+ (id)sharedInstance;
- (BOOL)usesDimmingView;
- (void)hide;
- (void)fadeWithDelay:(double)arg1;
- (void)fade;
- (void)cleanupForFadeOrHide;
- (void)show;
- (void)performShowAnimation;
- (BOOL)centerPopUpOverKey;
- (BOOL)usesTable;
- (struct CGSize)preferredSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

