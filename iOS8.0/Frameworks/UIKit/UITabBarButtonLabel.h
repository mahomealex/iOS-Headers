//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor, _UITabBarItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UITabBarButtonLabel : UILabel
{
    float _boundsWidth;
    _UITabBarItemAppearanceStorage *_appearanceStorage;
    BOOL _isSelected;
    BOOL _isHighlighted;
    Class _appearanceGuideClass;
    UIColor *_unselectedTintColor;
}

+ (float)_fontPointSizeForIdiom:(int)arg1;
@property(retain, nonatomic, getter=_unselectedTintColor, setter=_setUnselectedTintColor:) UIColor *unselectedTintColor; // @synthesize unselectedTintColor=_unselectedTintColor;
@property(nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
- (id)_containingTabBarButton;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (id)_fontForIdiom:(int)arg1;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_titleTextAttributesForState:(unsigned int)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_updateForFontChangeWithIdiom:(int)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateTextColorsForState;
- (void)tintColorDidChange;
- (void)sizeToFitBounds:(struct CGRect)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (BOOL)_shouldCeilSizeToViewScale;
- (void)dealloc;

@end
