/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol TSCH3DChartAnimationRendering
- (void)renderAnimationFrame:(float)arg1 drawingFrame:(struct CGRect)arg2 chunkStage:(long long)arg3;
- (id)animationLayerWithFrame:(struct CGRect)arg1 scale:(double)arg2 colorSpace:(struct CGColorSpace *)arg3 returningDrawingFrame:(struct CGRect *)arg4 TSDGLLayer:(id *)arg5;
- (void)setAnimationType:(int)arg1 chunkStage:(long long)arg2 buildType:(int)arg3 textureDeliveryStyle:(unsigned long long)arg4 attributes:(id)arg5;
- (void)animationDidEndForChunkStage:(long long)arg1;
- (void)animationWillBeginForChunkStage:(long long)arg1;
@end
