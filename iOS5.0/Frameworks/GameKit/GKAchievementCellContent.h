/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKMultilineCellContentView.h>

@interface GKAchievementCellContent : GKMultilineCellContentView
{
    BOOL _highlighted;
    BOOL _offsetImage;
}

@property(nonatomic) BOOL offsetImage; // @synthesize offsetImage=_offsetImage;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
- (void)drawLineIndex:(unsigned int)arg1 inRect:(struct CGRect *)arg2 highlighted:(BOOL)arg3;
- (void)setTheme:(id)arg1;
- (id)init;

@end

