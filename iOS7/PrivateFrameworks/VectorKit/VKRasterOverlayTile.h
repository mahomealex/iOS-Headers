/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKTile.h>

@class NSMutableData, VGLBytesTexture;

// Not exported
@interface VKRasterOverlayTile : VKTile
{
    int _size;
    float _scale;
    NSMutableData *_imageData;
    struct CGContext *_ctx;
    VGLBytesTexture *_texture;
}

- (void)dealloc;
- (id)texture;
- (struct CGContext *)drawContext;
- (_Bool)isEmpty;
- (id)initWithKey:(const struct VKTileKey *)arg1 size:(int)arg2 scale:(float)arg3;

@end

