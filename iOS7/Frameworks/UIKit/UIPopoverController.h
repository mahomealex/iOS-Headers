/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIAppearanceContainer-Protocol.h"
#import "UIGestureRecognizerDelegatePrivate-Protocol.h"
#import "_UIDimmingBackdropViewDelegate-Protocol.h"

@class NSArray, UIBarButtonItem, UIDimmingView, UIPanGestureRecognizer, UIView, UIViewController, _UIDimmingBackdropView, _UIPopoverLayoutInfo, _UIPopoverView;

@interface UIPopoverController : NSObject <UIGestureRecognizerDelegatePrivate, _UIDimmingBackdropViewDelegate, UIAppearanceContainer>
{
    id _delegate;
    UIViewController *_contentViewController;
    UIViewController *_splitParentController;
    _UIPopoverView *_popoverView;
    UIDimmingView *_dimmingView;
    _UIDimmingBackdropView *_dimmingBackdropView;
    UIView *_layoutConstraintView;
    struct CGRect _targetRectInEmbeddingView;
    UIBarButtonItem *_targetBarButtonItem;
    unsigned int _requestedArrowDirections;
    unsigned int _currentArrowDirection;
    int _popoverBackgroundStyle;
    _UIPopoverLayoutInfo *_preferredLayoutInfo;
    Class _popoverBackgroundViewClass;
    struct CGSize _popoverContentSize;
    struct CGRect _targetRectInDimmingView;
    struct CGRect _embeddedTargetRect;
    int _popoverControllerStyle;
    BOOL _ignoresKeyboardNotifications;
    unsigned int draggingChildScrollViewCount;
    id _target;
    SEL _didEndSelector;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    unsigned int _toViewAutoResizingMask;
    UIViewController *_slidingViewController;
    UIView *_presentingView;
    int _presentationEdge;
    int _presentationDirection;
    int _presentationState;
    BOOL _didPresentInActiveSequence;
    unsigned int _slideTransitionCount;
    UIPanGestureRecognizer *_vendedGestureRecognizer;
    UIPanGestureRecognizer *_dimmingViewGestureRecognizer;
    struct {
        unsigned int isPresentingModalViewController:1;
        unsigned int isPresentingActionSheet:1;
        unsigned int wasIgnoringDimmingViewTouchesBeforeScrolling:1;
        unsigned int isInTextEffectsWindow:1;
        unsigned int isEmbeddingInView:1;
        unsigned int embeddedPresentationBounces:1;
        unsigned int isModernPopover:1;
        unsigned int usesCircleKnockout:1;
    } _popoverControllerFlags;
    BOOL _allowResizePastTargetRect;
    BOOL _dismissesOnRotation;
    BOOL _showsTargetRect;
    BOOL _showsOrientationMarker;
    BOOL _showsPresentationArea;
    BOOL _retainsSelfWhilePresented;
    unsigned int _popoverArrowDirection;
    struct UIEdgeInsets _popoverLayoutMargins;
}

+ (BOOL)_forceAttemptsToAvoidKeyboard;
+ (struct UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(int)arg1 andContentViewController:(id)arg2;
+ (Class)_popoverViewClass;
+ (BOOL)_showTargetRectPref;
+ (BOOL)_popoversDisabled;
@property(nonatomic) unsigned int popoverArrowDirection; // @synthesize popoverArrowDirection=_popoverArrowDirection;
@property(nonatomic, getter=_presentationEdge, setter=_setPresentationEdge:) int presentationEdge; // @synthesize presentationEdge=_presentationEdge;
@property(nonatomic, getter=_presentingView, setter=_setPresentingView:) UIView *presentingView; // @synthesize presentingView=_presentingView;
@property(retain, nonatomic) _UIPopoverLayoutInfo *preferredLayoutInfo; // @synthesize preferredLayoutInfo=_preferredLayoutInfo;
@property(nonatomic, getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:) BOOL retainsSelfWhilePresented; // @synthesize retainsSelfWhilePresented=_retainsSelfWhilePresented;
@property(nonatomic) BOOL showsPresentationArea; // @synthesize showsPresentationArea=_showsPresentationArea;
@property(nonatomic) BOOL showsOrientationMarker; // @synthesize showsOrientationMarker=_showsOrientationMarker;
@property(nonatomic) BOOL showsTargetRect; // @synthesize showsTargetRect=_showsTargetRect;
@property(retain, nonatomic) Class popoverBackgroundViewClass; // @synthesize popoverBackgroundViewClass=_popoverBackgroundViewClass;
@property(nonatomic) struct UIEdgeInsets popoverLayoutMargins; // @synthesize popoverLayoutMargins=_popoverLayoutMargins;
@property(nonatomic) BOOL dismissesOnRotation; // @synthesize dismissesOnRotation=_dismissesOnRotation;
@property(nonatomic) BOOL allowResizePastTargetRect; // @synthesize allowResizePastTargetRect=_allowResizePastTargetRect;
@property(retain, nonatomic) UIDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) id <UIPopoverControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_modalAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_modalTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;
- (id)_dimmingBackdropView;
- (id)_dimmingView;
- (BOOL)_embedsInView;
- (id)_managingSplitViewController;
- (void)_setManagingSplitViewController:(id)arg1;
- (BOOL)isPresentingOrDismissing;
- (BOOL)_isDismissing;
- (BOOL)_isPresenting;
- (void)_containedViewControllerModalStateChanged;
- (void)_stopWatchingForNotifications;
@property(nonatomic, setter=_setIgnoresKeyboardNotifications:) BOOL _ignoresKeyboardNotifications; // @dynamic _ignoresKeyboardNotifications;
- (void)_stopWatchingForScrollViewNotifications;
- (void)_startWatchingForScrollViewNotifications;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_stopWatchingForWindowRotations;
- (void)_startWatchingForWindowRotations;
- (void)_hostingWindowDidRotate:(id)arg1;
- (void)_hostingWindowWillRotate:(id)arg1;
- (BOOL)_canRepresentAutomatically;
- (void)_stopWatchingForKeyboardNotifications;
- (void)_startWatchingForKeyboardNotificationsIfNecessary;
- (void)_keyboardStateChanged:(id)arg1;
- (void)_moveAwayFromTheKeyboard:(id)arg1;
- (id)_layoutInfoForCurrentKeyboardState;
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;
- (id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2;
- (BOOL)_attemptsToAvoidKeyboard;
- (void)_stopWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_startWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_newViewControllerWasPushed:(id)arg1;
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(BOOL)arg2;
- (void)_newViewControllerWillBePushed:(id)arg1;
- (void)_setGesturesEnabled:(BOOL)arg1;
- (void)_swipe:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (id)_gestureRecognizerForPresentationFromEdge:(int)arg1;
- (void)dimmingBackdropViewWasTapped:(id)arg1;
- (void)_dismissPopoverAnimated:(BOOL)arg1 stateOnly:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_postludeForDismissal;
- (id)_completionBlockForDismissalWhenNotifyingDelegate:(SEL)arg1;
- (void)_beginMapsTransitionToNewViewController:(id)arg1 arrowDirections:(unsigned int)arg2 slideDuration:(double)arg3 expandDuration:(double)arg4;
- (void)_beginMapsTransitionToNewViewController:(id)arg1 newTargetRect:(struct CGRect)arg2 inView:(id)arg3 arrowDirections:(unsigned int)arg4 slideDuration:(double)arg5 expandDuration:(double)arg6;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(int)arg2 animated:(BOOL)arg3;
- (int)_popoverBackgroundStyle;
- (void)_setPopoverBackgroundStyle:(int)arg1;
- (BOOL)_manuallyHandlesContentViewControllerAppearanceCalls;
- (int)_popoverControllerStyle;
- (void)_performHierarchyCheckOnViewController:(id)arg1;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_layoutDimmingViewForInterfaceOrientationOfHostingWindow:(id)arg1;
- (void)_updateDimmingViewTransformForInterfaceOrientationOfHostingWindow:(id)arg1;
- (float)_dismissalAnimationDuration;
- (float)_presentationAnimationDuration;
- (struct CGSize)_currentPopoverContentSize;
- (id)_splitParentController;
- (void)_setSplitParentController:(id)arg1;
- (void)_setPopoverView:(id)arg1;
- (id)popoverView;
- (BOOL)_usePointyPopovers;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (void)presentPopoverFromBarButtonItem:(id)arg1;
- (void)presentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 preferredPresentationDirections:(unsigned int)arg3;
- (BOOL)_isModernPopover;
- (void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)presentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 animated:(BOOL)arg4;
- (void)_commonPresentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 preferredPresentationDirections:(unsigned int)arg3 animated:(BOOL)arg4;
- (BOOL)_shimPresentSlidingPopoverAnimated:(BOOL)arg1;
- (struct CGPoint)_centerPointForScale:(float)arg1 frame:(struct CGRect)arg2 anchor:(struct CGPoint)arg3;
- (void)_presentPopoverFromRect:(struct CGRect)arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned int)arg4;
- (void)_presentPopoverFromEdge:(int)arg1 ofView:(id)arg2 animated:(BOOL)arg3;
- (void)_presentPopoverBySlidingIn:(BOOL)arg1 fromEdge:(int)arg2 ofView:(id)arg3 animated:(BOOL)arg4 stateOnly:(BOOL)arg5 notifyDelegate:(BOOL)arg6;
- (void)_invalidateLayoutInfo;
- (void)_resetSlideTransitionCount;
- (void)_incrementSlideTransitionCount:(BOOL)arg1;
- (unsigned int)_slideTransitionCount;
- (void)_setPresentationState:(int)arg1;
- (int)_presentationState;
- (Class)_defaultChromeViewClass;
- (Class)_popoverLayoutInfoForChromeClass:(Class)arg1;
- (BOOL)_popoverBackgroundViewWantsDefaultContentAppearance;
@property(copy, nonatomic) NSArray *passthroughViews;
@property(readonly, nonatomic, getter=isPopoverVisible) BOOL popoverVisible;
- (void)setPopoverContentSize:(struct CGSize)arg1 animated:(BOOL)arg2;
@property(nonatomic) struct CGSize popoverContentSize;
- (void)setPopoverFrame:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)setContentViewController:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIViewController *contentViewController;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;
- (id)_initWithContentViewController:(id)arg1 popoverControllerStyle:(int)arg2;
- (id)init;

@end
