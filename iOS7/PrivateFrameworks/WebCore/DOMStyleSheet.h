/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMObject.h>

@class DOMMediaList, DOMNode, NSString;

// Not exported
@interface DOMStyleSheet : DOMObject
{
}

@property(readonly) DOMMediaList *media;
@property(readonly) NSString *title;
@property(readonly) NSString *href;
@property(readonly) DOMStyleSheet *parentStyleSheet;
@property(readonly) DOMNode *ownerNode;
@property _Bool disabled;
@property(readonly) NSString *type;
- (void)finalize;
- (void)dealloc;

@end

