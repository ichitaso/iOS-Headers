//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "_UIRemoteKeyboardInputViewPlaceholder.h"

__attribute__((visibility("hidden")))
@interface _UIRemoteKeyboardPlaceholderView : UIView <_UIRemoteKeyboardInputViewPlaceholder>
{
    UIView *_mirroredView;
}

+ (id)placeholderWithWidth:(float)arg1 height:(float)arg2;
+ (id)placeholderForView:(id)arg1;
- (BOOL)refreshPlaceholder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
@property(readonly, retain) UIView *placeheldView;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1;

@end

