/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_data>, TSPLazyReferenceArray;

// Not exported
@interface TSPUnknownMessage : NSObject
{
    struct MessageInfo _messageInfo;
    NSObject<OS_dispatch_data> *_messageData;
    TSPLazyReferenceArray *_objects;
    NSArray *_datas;
}

@property(retain, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) TSPLazyReferenceArray *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *messageData; // @synthesize messageData=_messageData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct MessageInfo *)messageInfo;
- (id)initWithMessageInfo:(const struct MessageInfo *)arg1 data:(id)arg2;
- (id)init;

@end

