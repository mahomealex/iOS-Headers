/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol TSDGLLayerContext <NSObject>
- (void)presentRenderbuffer;
- (_Bool)makeCurrentContext;
- (void)teardown;
- (_Bool)createFramebufferFromLayer:(id)arg1;
- (_Bool)isValid;

@optional
- (void)unlock;
- (void)lock;
@end
