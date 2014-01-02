/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDictionary, NSMutableArray, NSString;

@interface HSRequest : NSObject
{
    NSString *_action;
    NSData *_bodyData;
    NSDictionary *_headers;
    NSDictionary *_arguments;
    struct __CFHTTPMessage *_message;
    long long _method;
    _Bool _excludeSessionIDFromURL;
    NSMutableArray *_cachedBodyDataBlocks;
    _Bool _concurrent;
}

+ (id)request;
@property(readonly, nonatomic, getter=isConcurrent) _Bool concurrent; // @synthesize concurrent=_concurrent;
@property(nonatomic) _Bool excludeSessionIDFromURL; // @synthesize excludeSessionIDFromURL=_excludeSessionIDFromURL;
@property(nonatomic) long long method; // @synthesize method=_method;
@property(copy, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(readonly, nonatomic) NSString *action; // @synthesize action=_action;
- (id)_methodStringForMethod:(long long)arg1;
- (id)_defaultHeaderFields;
- (_Bool)acceptsGzipEncoding;
- (unsigned int)cachedBodyDataBlocksLength;
- (void)appendCachedBodyDataBlocksIntoData:(id)arg1 clearCache:(_Bool)arg2;
- (void)cacheBodyDataBlock:(id)arg1;
- (id)canonicalResponseForResponse:(id)arg1;
- (struct __CFHTTPMessage *)CFHTTPMessageForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (void)setValue:(id)arg1 forArgument:(id)arg2;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (id)descriptionWithoutHeaderFields;
@property(readonly, nonatomic) double timeoutInterval;
- (id)description;
- (void)dealloc;
- (id)initWithAction:(id)arg1;

@end

