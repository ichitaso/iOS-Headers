/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <JavaScriptCore/JSValue.h>

@interface JSValue (Internal)
+ (SEL)selectorForValueToStruct:(const char *)arg1;
+ (SEL)selectorForStructToValue:(const char *)arg1;
+ (id)valueWithJSValueRef:(struct OpaqueJSValue *)arg1 inContext:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithValue:(struct OpaqueJSValue *)arg1 inContext:(id)arg2;
- (id)init;
@end

