/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIWebSelectedItemPrivate-Protocol.h"

@class DOMHTMLOptGroupElement;

// Not exported
@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate>
{
    DOMHTMLOptGroupElement *_node;
}

@property(retain, nonatomic) DOMHTMLOptGroupElement *_node; // @synthesize _node;
- (void)dealloc;
- (void)unselect;
- (void)setSelected:(_Bool)arg1;
- (_Bool)isGroup;
- (_Bool)selected;
- (id)node;
- (id)initWithHTMLOptGroupNode:(id)arg1;

@end

