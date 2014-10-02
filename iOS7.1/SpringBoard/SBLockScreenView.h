//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertView.h"

#import "SBCoordinatedPresenting.h"
#import "SBPresentingDelegate.h"
#import "UIScrollViewDelegate.h"
#import "_UIGlintyStringViewDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSMutableArray, NSMutableSet, NSSet, SBChevronView, SBChevronView<_SBFVibrantView>, SBDisableAppStatusBarAlphaChangesAssertion, SBFLockScreenDateView, SBFakeStatusBarView, SBLockOverlayStylePropertiesFactory, SBLockScreenBatteryChargingView, SBLockScreenBounceAnimator, SBLockScreenScrollView, SBLockScreenTimerView, SBSlideToUnlockFailureRecognizer, SBWallpaperEffectView, UIScrollView, UIView, UIView<SBLegibility>, UIView<SBLegibility><_SBFVibrantView>, UIView<SBUIPasscodeLockView>, UIView<_SBFVibrantView>, _UIBackdropView, _UIGlintyStringView<_SBFVibrantView>, _UILegibilitySettings;

@interface SBLockScreenView : SBAlertView <UIScrollViewDelegate, _UIGlintyStringViewDelegate, _UISettingsKeyObserver, SBCoordinatedPresenting, SBPresentingDelegate>
{
    SBLockOverlayStylePropertiesFactory *_contentUnderlayOverride;
    NSMutableSet *_contentUnderlayRequesters;
    NSMutableArray *_contentOverlays;
    UIView *_passcodeOverlayView;
    _UIBackdropView *_wallpaperBlurView;
    UIView *_foregroundView;
    SBLockScreenScrollView *_foregroundScrollView;
    UIView *_foregroundLockView;
    UIView *_foregroundLockUnderlayView;
    UIView *_foregroundLockContentView;
    UIView *_foregroundLockContentOverlaysView;
    UIView *_foregroundLockHUDView;
    SBFLockScreenDateView *_dateView;
    UIView<SBLegibility> *_legalView;
    SBLockScreenTimerView *_timerView;
    _UIGlintyStringView<_SBFVibrantView> *_slideToUnlockView;
    UIView *_slideToUnlockParentSpringView;
    UIView *_slideToUnlockSpringView;
    _Bool _isShakingSlideToUnlockText;
    _Bool _isAnimatingSlideToUnlockText;
    SBWallpaperEffectView *_slideToUnlockBackgroundView;
    SBWallpaperEffectView *_topGrabberBackgroundView;
    SBWallpaperEffectView *_bottomGrabberBackgroundView;
    SBWallpaperEffectView *_cameraGrabberBackgroundView;
    SBChevronView<_SBFVibrantView> *_topGrabberView;
    SBChevronView<_SBFVibrantView> *_bottomGrabberView;
    UIView<SBLegibility><_SBFVibrantView> *_cameraGrabberView;
    UIView<SBUIPasscodeLockView> *_passcodeView;
    UIView *_passcodeOverscrollBackgroundView;
    SBLockScreenBatteryChargingView *_batteryChargingView;
    UIView *_modalAlertView;
    UIView *_notificationView;
    UIView *_emergencyCallView;
    UIView *_mediaControlsContainerView;
    UIView *_mediaControlsView;
    UIView *_pluginView;
    UIView *_pluginBackgroundView;
    unsigned long long _pluginPresentationStyle;
    NSMutableSet *_foregroundHiddenRequesters;
    NSMutableSet *_foregroundLockContentHiddenRequesters;
    NSMutableSet *_foregroundLockContentOverlaysHiddenRequesters;
    NSMutableSet *_foregroundLockHUDHiddenRequesters;
    NSMutableSet *_slideToUnlockHiddenRequesters;
    NSMutableSet *_modalAlertHiddenRequesters;
    NSMutableSet *_notificationsHiddenRequesters;
    NSMutableSet *_passcodeHiddenRequesters;
    NSMutableSet *_topGrabberHiddenRequesters;
    NSMutableSet *_bottomGrabberHiddenRequesters;
    NSMutableSet *_cameraGrabberHiddenRequesters;
    NSMutableSet *_legalTextHiddenRequesters;
    NSMutableSet *_mediaControlsHiddenRequesters;
    NSMutableSet *_pluginHiddenRequesters;
    NSMutableSet *_scrollingDisabledRequesters;
    NSMutableSet *_scrollViewInteractionDisabledRequesters;
    double _foregroundTranslationY;
    SBLockScreenBounceAnimator *_bounceAnimator;
    NSMutableArray *_scrollCompletionBlocks;
    long long _currentPage;
    struct CGPoint _staringContentOffset;
    _Bool _scrolling;
    _Bool _setGrabberOrigins;
    double _topGrabberOriginalOriginY;
    double _bottomGrabberOriginalOriginY;
    double _currentBlurRadius;
    SBLockOverlayStylePropertiesFactory *_defaultUnderlayPropertiesFactory;
    UIView *_whiteUnderlayView;
    SBFakeStatusBarView *_fakePasscodeStatusBarView;
    SBFakeStatusBarView *_fakeLockStatusBarView;
    SBFakeStatusBarView *_fakeStatusBarWithTimeView;
    SBDisableAppStatusBarAlphaChangesAssertion *_statusBarAssertion;
    SBSlideToUnlockFailureRecognizer *_slideToUnlockFailureRecognizer;
    int _slideToUnlockFailureGestureToken;
    _Bool _slideToUnlockFailureRecognizerNeedsRemoval;
    _Bool _showingEmergencyCall;
    id <SBPresentingDelegate> _presentingDelegate;
    _Bool _statusBarLegibilityEnabled;
    id <SBLockScreenViewDelegate> _delegate;
    _UILegibilitySettings *_legibilitySettings;
}

@property(retain, nonatomic) SBChevronView *bottomGrabberView; // @synthesize bottomGrabberView=_bottomGrabberView;
@property(retain, nonatomic) SBChevronView *topGrabberView; // @synthesize topGrabberView=_topGrabberView;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) UIView *mediaControlsView; // @synthesize mediaControlsView=_mediaControlsView;
@property(readonly, nonatomic) _Bool isShakingSlideToUnlockText; // @synthesize isShakingSlideToUnlockText=_isShakingSlideToUnlockText;
@property(nonatomic) _Bool statusBarLegibilityEnabled; // @synthesize statusBarLegibilityEnabled=_statusBarLegibilityEnabled;
@property(retain, nonatomic) UIView *pluginBackgroundView; // @synthesize pluginBackgroundView=_pluginBackgroundView;
@property(readonly, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_foregroundScrollView;
@property(retain, nonatomic) SBLockScreenBatteryChargingView *batteryChargingView; // @synthesize batteryChargingView=_batteryChargingView;
@property(retain, nonatomic) UIView<_SBFVibrantView> *cameraGrabberView; // @synthesize cameraGrabberView=_cameraGrabberView;
@property(retain, nonatomic) UIView<SBUIPasscodeLockView> *passcodeView; // @synthesize passcodeView=_passcodeView;
@property(retain, nonatomic) UIView *notificationView; // @synthesize notificationView=_notificationView;
@property(retain, nonatomic) UIView *modalAlertView; // @synthesize modalAlertView=_modalAlertView;
@property(retain, nonatomic) SBLockScreenTimerView *timerView; // @synthesize timerView=_timerView;
@property(retain, nonatomic) UIView<SBLegibility> *legalView; // @synthesize legalView=_legalView;
@property(retain, nonatomic) SBFLockScreenDateView *dateView; // @synthesize dateView=_dateView;
@property id <SBLockScreenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)_legibilityPrototypeSettings;
- (void)glintyAnimationDidStop;
- (void)glintyAnimationDidStart;
- (void)glintyFadeInAnimationDidStop;
- (void)glintyFadeOutAnimationDidStop;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)_endCrossfadingFakeStatusBars;
- (void)_beginCrossfadingFakeStatusBars;
- (void)_updateFakeStatusBarsForPercentScrolled:(double)arg1;
- (void)_addOrRemoveFakeStatusBars;
- (_Bool)_shouldCrossfadeStatusBars;
- (_Bool)_shouldCrossfadeStatusBarsForLegibility;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_updateSlideToUnlockBlurVisibility;
- (void)_slideToUnlockFailureGestureRecognizerChanged;
- (void)_startAnimatingSlideToUnlockDelayFinished;
- (void)_startAnimatingSlideToUnlockWithDelay:(double)arg1;
- (void)_shakeSlideToUnlockAnimationEnded;
- (void)_scrollingDidFinish;
- (void)_setAllowPasscodeCharacterUndoOnTouchesCancelled:(_Bool)arg1;
- (void)_setEnableTemporaryPasscodeButtonHysteresis:(_Bool)arg1;
- (_Bool)_disallowScrollingInTouchedView:(id)arg1;
- (void)_preventScrollingOnGrabberView:(id)arg1;
- (double)_percentScrolled;
- (double)_percentScrolledForOffset:(double)arg1;
- (void)_updateOverlaysForScroll:(double)arg1;
- (void)resetContentOffsetToCurrentPage;
- (void)scrollToPage:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scrollToPage:(long long)arg1 animated:(_Bool)arg2;
- (void)_scrollBy:(double)arg1;
- (_Bool)_isScrollOffsetOnPage;
- (_Bool)_isValidPage:(unsigned long long)arg1;
- (void)_setCurrentPage:(long long)arg1;
- (long long)currentPage;
- (void)_setScrollingEnabled:(_Bool)arg1;
- (double)_mediaControlsHeight;
- (double)_mediaControlsY;
- (void)_layoutFakeStatusBars;
- (void)_layoutPluginView;
- (void)_layoutChargingView;
- (void)_layoutEmergencyCallView;
- (void)_layoutPasscodeView;
- (void)_layoutOverlayViews;
- (void)_layoutScrollView;
- (void)_layoutModalAlertView;
- (void)_layoutNotificationView;
- (void)_adjustTextBlurForPercentScrolled:(double)arg1;
- (void)_adjustTopAndBottomGrabbersForPercentScrolled:(double)arg1;
- (double)_bottomGrabberYOriginForPercentScrolled:(double)arg1;
- (double)_topGrabberYOriginForPercentScrolled:(double)arg1;
- (void)_layoutGrabberView:(id)arg1 atTop:(_Bool)arg2 percentScrolled:(double)arg3;
- (void)_layoutGrabberView:(id)arg1 atTop:(_Bool)arg2;
- (void)_layoutCameraGrabberView;
- (void)_layoutSlideToUnlockView;
- (void)invalidateGrabberOrigins;
- (void)_layoutTimerView;
- (void)_layoutLegalView;
- (void)_layoutMediaControlsView;
- (void)_layoutDateView;
- (void)_layoutLockHUDView;
- (void)_layoutLockContentView;
- (void)_layoutLockView;
- (void)_layoutWallpaperBlurView;
- (void)_layoutForegroundView;
- (void)layoutSubviews;
- (void)_setLockContentUnderlayPropertiesFactoryOverride:(id)arg1;
- (void)_removeLockContentUnderlayWithRequester:(id)arg1;
- (void)_addLockContentUnderlayWithRequester:(id)arg1;
- (_Bool)_hasLockContentUnderlayRequester:(id)arg1;
- (void)_evaluateOverlaysForChange;
- (void)_setCurrentBlurRadius:(double)arg1;
- (_Bool)_needsRealBlur;
- (id)_overlayStylePropertiesFromPropertiesFactory:(id)arg1;
- (void)_showFakeWallpaperBlurWithAlpha:(double)arg1 withFactory:(id)arg2;
- (void)_removeLockContentOverlay:(id)arg1;
- (void)_addLockContentOverlay:(id)arg1;
- (_Bool)_lockContentOverlaysShouldBeHidden;
- (void)presentingControllerDidFinishPresentation:(id)arg1;
- (void)presentingController:(id)arg1 willHandleGesture:(id)arg2;
- (_Bool)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
- (_Bool)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (void)reenableGestureRecognizer:(id)arg1;
- (void)cancelGestureRecognizer:(id)arg1;
- (void)abortAnimatedTransition;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)beginPresentationWithTouchLocation:(struct CGPoint)arg1;
- (_Bool)isPresentingControllerTransitioning;
@property(readonly, nonatomic) NSSet *tapExcludedViews;
@property(readonly, nonatomic) NSSet *gestures;
@property(readonly, nonatomic) unsigned long long hintEdge;
@property(readonly, nonatomic) double hintDisplacement;
@property(nonatomic) id <SBPresentingDelegate> presentingDelegate;
@property(readonly, nonatomic) long long coordinatedPresentingControllerIdentifier;
- (void)_updateDateViewLegibility;
- (void)_updateVibrantViewBackgrounds;
- (void)_updateCameraGrabberBackground;
- (void)_updateBottomGrabberBackground;
- (void)_updateTopGrabberBackground;
- (void)_updateSlideToUnlockBackground;
- (double)_wallpaperContrastForFrame:(struct CGRect)arg1;
- (id)_averageWallpaperColorForFrame:(struct CGRect)arg1;
- (void)_updateVibrantView:(id)arg1 screenRect:(struct CGRect)arg2 backgroundView:(id)arg3;
- (long long)_effectiveStatusBarLegibilityStyle;
- (id)_effectiveStatusBarColor;
- (void)_updateStatusBarLegibility;
- (void)_updateGrabbersLegibilityIfNecessary;
- (void)_updateCameraGrabberLegibilityIfNecessary;
- (void)_updateLegalLegibility;
- (void)_updateTimerLegibility;
- (void)_updateLegibility;
- (void)_passcodePropertiesChanged;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_defaultSlideToUnlockText;
- (id)_newScrollView;
- (void)_addBounceAnimator;
- (void)_addGrabberViews;
- (void)_addViews;
- (void)_noteWillDisappear;
- (void)_noteAppearing;
- (_Bool)isCurrentPageTransparent;
- (void)setCustomSlideToUnlockLanguage:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setCustomSlideToUnlockText:(id)arg1;
- (void)shakeSlideToUnlockTextWithCustomText:(id)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setCustomSlideToUnlockDisplayForBuddyMode:(_Bool)arg1;
- (void)setScrollViewInteractionDisabled:(_Bool)arg1 forRequester:(id)arg2;
- (void)setScrollingDisabled:(_Bool)arg1 forRequester:(id)arg2;
- (_Bool)pluginViewHidden;
- (void)setPluginViewHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)setMediaControlsContainerAlpha:(double)arg1;
- (_Bool)mediaControlsHidden;
- (void)setMediaControlsHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)setTopBottomGrabbersHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)setBottomGrabberHidden:(_Bool)arg1 forRequester:(id)arg2;
- (_Bool)isBottomGrabberHidden;
- (void)setTopGrabberHidden:(_Bool)arg1 forRequester:(id)arg2;
- (_Bool)isTopGrabberHidden;
- (void)setPasscodeHidden:(_Bool)arg1 forRequester:(id)arg2;
- (_Bool)notificationsViewHidden;
- (void)setNotificationsHidden:(_Bool)arg1 forRequester:(id)arg2;
- (_Bool)modalAlertViewHidden;
- (void)setModalAlertHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)setSlideToUnlockBlurHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)setSlideToUnlockHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)setLegalTextHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)setCameraGrabberHidden:(_Bool)arg1 forRequester:(id)arg2;
- (_Bool)isCameraGrabberHidden;
- (void)setLockHUDHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)setLockContentOverlaysHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)setLockContentHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)setForegroundHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)abortAnimatedForegroundSlide;
- (double)foregroundTranslationY;
- (void)slideForegroundVerticallyBy:(double)arg1;
- (void)slideUpGestureDidCleanup;
- (void)slideUpGestureDidBegin;
- (void)setPluginView:(id)arg1 presentationStyle:(unsigned long long)arg2 notificationBehavior:(unsigned long long)arg3;
- (_Bool)_isPluginBelowForegroundScrollView;
- (void)setEmergencyCallViewController:(id)arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasTransparentUnderlay;
- (id)_debugDescription;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) NSSet *conflictingGestures;

@end
