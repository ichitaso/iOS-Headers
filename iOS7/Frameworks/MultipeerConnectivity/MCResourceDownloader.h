/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class MCPeerID, MCSession, NSString, NSURLSession, NSURLSessionDataTask;

@interface MCResourceDownloader : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_urlTask;
    id _urlResponseHandler;
    MCSession *_session;
    NSString *_resourceName;
    MCPeerID *_peerID;
}

@property(retain, nonatomic) MCPeerID *peerID; // @synthesize peerID=_peerID;
@property(copy, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
@property(nonatomic) id urlResponseHandler; // @synthesize urlResponseHandler=_urlResponseHandler;
@property(retain, nonatomic) NSURLSessionDataTask *urlTask; // @synthesize urlTask=_urlTask;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void)sendData:(id)arg1 fromByteOffset:(unsigned long long)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)syncCloseStreamForSession:(id)arg1 withError:(id)arg2;
@property(nonatomic) MCSession *session; // @synthesize session=_session;
- (void)dealloc;
- (id)initWithSession:(id)arg1 resourceUrl:(id)arg2 name:(id)arg3 peerID:(id)arg4;

@end

