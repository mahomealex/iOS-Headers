/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SKRequest : NSObject
{
    id _requestInternal;
}

- (void)_unregisterForNotifications;
- (void)_sendFinishToDelegate;
- (void)_sendErrorToDelegate:(id)arg1;
- (void)_registerForNotifications;
- (id)_newIdentifier;
- (void)_endBackgroundTask;
- (void)_beginBackgroundTask;
- (void)_requestFinishedNotification:(id)arg1;
- (void)_requestFailedNotification:(id)arg1;
- (void)_mainThreadDaemonExited:(id)arg1;
- (void)_daemonExited:(id)arg1;
- (void)issueRequestForIdentifier:(id)arg1;
- (BOOL)handleFinishResponse:(id)arg1 returningError:(id *)arg2;
@property(nonatomic) id <SKRequestDelegate> delegate;
- (void)start;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

