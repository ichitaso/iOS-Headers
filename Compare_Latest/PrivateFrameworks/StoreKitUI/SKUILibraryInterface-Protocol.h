//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, SKUILibraryItem, SKUILibraryItemState;

@protocol SKUILibraryInterface <NSObject>
- (SKUILibraryItemState *)stateForLibraryItem:(SKUILibraryItem *)arg1;
- (void)enumerateStatesForLibraryItems:(NSSet *)arg1 usingBlock:(void (^)(SKUILibraryItem *, SKUILibraryItemState *, char *))arg2;

@optional
- (BOOL)performActionForLibraryItem:(SKUILibraryItem *)arg1;
- (NSSet *)exposedPlatformItemKinds;
@end
