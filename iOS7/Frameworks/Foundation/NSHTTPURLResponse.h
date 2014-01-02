/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSURLResponse.h>

@class NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse
{
    NSHTTPURLResponseInternal *_httpInternal;
}

+ (_Bool)isErrorStatusCode:(long long)arg1;
+ (id)localizedStringForStatusCode:(long long)arg1;
+ (_Bool)supportsSecureCoding;
- (struct __SecTrust *)_peerTrust;
- (void)_setPeerTrust:(struct __SecTrust *)arg1;
- (id)_clientCertificateState;
- (id)_clientCertificateChain;
- (id)_peerCertificateChain;
- (void)dealloc;
- (long long)statusCode;
- (id)allHeaderFields;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 requestTime:(double)arg4;
- (id)_initWithCFURLResponse:(struct _CFURLResponse *)arg1;

@end

