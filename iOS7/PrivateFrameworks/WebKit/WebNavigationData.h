/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WebNavigationDataPrivate;

// Not exported
@interface WebNavigationData : NSObject
{
    WebNavigationDataPrivate *_private;
}

- (void)dealloc;
- (id)clientRedirectSource;
- (_Bool)hasSubstituteData;
- (id)response;
- (id)originalRequest;
- (id)title;
- (id)url;
- (id)initWithURLString:(id)arg1 title:(id)arg2 originalRequest:(id)arg3 response:(id)arg4 hasSubstituteData:(_Bool)arg5 clientRedirectSource:(id)arg6;

@end

