//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLComposeRecipientViewController, UINavigationController;

@protocol PLComposeRecipientViewControllerDelegate <NSObject>
- (UINavigationController *)backingNavigationControllerForComposeRecipientViewController:(PLComposeRecipientViewController *)arg1;

@optional
- (void)composeRecipientViewControllerRecipientContainerViewDidResize:(PLComposeRecipientViewController *)arg1 fromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3;
- (void)composeRecipientViewControllerReturnKeyPressed:(PLComposeRecipientViewController *)arg1;
@end

