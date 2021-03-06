/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

@class NSArray, UIImage, UIImageView, UIView;

@interface PLCameraButton : UIButton
{
    UIView *_rotationHolder;
    UIImageView *_iconView;
    _Bool _lockEnabled;
    _Bool _isLandscape;
    _Bool _dontDrawDisabled;
    UIImage *_cameraIcon;
    UIImage *_cameraIconLandscape;
    NSArray *_videoRecordingIcons;
    UIImage *_panoRecordingIcon;
    UIImage *_panoRecordingIconLandscape;
    int _buttonMode;
    _Bool _isCapturing;
    long long _orientation;
    _Bool _watchingOrientationChanges;
}

+ (struct UIEdgeInsets)hitRectExtension;
+ (struct UIEdgeInsets)backgroundResizableEdgeInsets;
+ (struct CGRect)defaultFrame;
+ (id)videoOnIconName;
+ (id)videoOffIconName;
+ (id)photoIconLandscapeName;
+ (id)photoIconPortraitName;
+ (id)backgroundPanoOnPressedImageName;
+ (id)backgroundPanoOnImageName;
+ (id)backgroundPanoOffPressedImageName;
+ (id)backgroundPanoOffImageName;
+ (id)backgroundVideoPressedImageName;
+ (id)backgroundVideoImageName;
+ (id)backgroundPressedImageName;
+ (id)backgroundImageName;
+ (id)defaultIconName;
- (long long)orientation;
- (void)setButtonOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)_startWatchingDeviceOrientationChanges;
- (void)setLockEnabled:(_Bool)arg1;
- (void)_setHighlightOnMouseDown:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setDontShowDisabledState:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setIsCapturing:(_Bool)arg1;
- (void)setButtonMode:(int)arg1;
- (void)_loadPanoLandscapeResources;
- (void)_loadPanoResources;
- (void)_loadVideoResources;
- (void)_loadStillLandscapeResources;
- (void)_loadStillResources;
- (void)dealloc;
- (void)_setIcon:(id)arg1;
- (id)initWithDefaultSize;

@end

