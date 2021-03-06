/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XPCProxyTarget-Protocol.h"

@class ACAccount;

@interface ACOAuthSigner : NSObject <XPCProxyTarget>
{
    id oauthSignerProxy;
    struct dispatch_queue_s *connectionQueue;
    struct _xpc_connection_s *connection;
    ACAccount *_account;
}

- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (id)signedURLRequestWithURLRequest:(id)arg1;
- (id)signedURLRequestWithURLRequest:(id)arg1 callingPID:(id)arg2;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;

@end

