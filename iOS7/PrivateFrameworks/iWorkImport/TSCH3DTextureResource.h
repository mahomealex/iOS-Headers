/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DResource.h>

#import "TSCH3DOptimizedTextureResource-Protocol.h"
#import "TSCHUnretainedParent-Protocol.h"

@class NSNumber, TSCH3DTexture;

// Not exported
@interface TSCH3DTextureResource : TSCH3DResource <TSCHUnretainedParent, TSCH3DOptimizedTextureResource>
{
    TSCH3DTexture *mParent;
    NSNumber *mCachedHash;
}

- (id)databufferForDataCache:(id)arg1;
- (id)optimizedMipmapBuffer;
- (_Bool)canLoadCachedFullMipmapBufferForDataCache:(id)arg1;
- (id)get;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)clearParent;
- (void)dealloc;
- (id)initWithParent:(id)arg1;

@end
