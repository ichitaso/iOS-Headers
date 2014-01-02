/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject
{
    WebScriptObjectPrivate *_private;
}

+ (id)_convertValueToObjcValue:(struct JSValue)arg1 originRootObject:(struct RootObject *)arg2 rootObject:(struct RootObject *)arg3;
+ (_Bool)throwException:(id)arg1;
+ (id)scriptObjectForJSObject:(struct OpaqueJSValue *)arg1 originRootObject:(struct RootObject *)arg2 rootObject:(struct RootObject *)arg3;
+ (void)initialize;
- (id)JSValue;
- (struct OpaqueJSValue *)JSObject;
- (void)setException:(id)arg1;
- (void)setWebScriptValueAtIndex:(unsigned int)arg1 value:(id)arg2;
- (id)webScriptValueAtIndex:(unsigned int)arg1;
- (id)stringRepresentation;
- (_Bool)hasWebScriptKey:(id)arg1;
- (void)removeWebScriptKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)evaluateWebScript:(id)arg1;
- (id)callWebScriptMethod:(id)arg1 withArguments:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (oneway void)release;
- (struct OpaqueJSContext *)_globalContextRef;
- (_Bool)_isSafeScript;
- (struct RootObject *)_originRootObject;
- (struct RootObject *)_rootObject;
- (_Bool)_hasImp;
- (struct JSObject *)_imp;
- (id)_initWithJSObject:(struct JSObject *)arg1 originRootObject:(PassRefPtr_8e019d1c)arg2 rootObject:(PassRefPtr_8e019d1c)arg3;
- (void)_setOriginRootObject:(PassRefPtr_8e019d1c)arg1 andRootObject:(PassRefPtr_8e019d1c)arg2;
- (void)_setImp:(struct JSObject *)arg1 originRootObject:(PassRefPtr_8e019d1c)arg2 rootObject:(PassRefPtr_8e019d1c)arg3;

@end

