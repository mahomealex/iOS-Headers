//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, UIPageControl, UIScrollView, UIView;

@interface UIPageController : UIViewController
{
    NSMutableArray *_viewControllers;
    UIView *_wrapperViews[3];
    int _notificationState[3];
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    id <UIPageControllerDelegate> _delegate;
    int _pageSpacing;
    int _visibleIndex;
    int _pageCount;
    struct {
        unsigned int delegateViewControllerAtIndex:1;
        unsigned int delegateWillBeginPaging:1;
        unsigned int delegateDidEndPaging:1;
        unsigned int displaysPageControl:1;
        unsigned int wraps:1;
    } _pageControllerFlags;
}

@property(nonatomic) id <UIPageControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_getRotationContentSettings:(CDStruct_19ba41f1 *)arg1;
- (BOOL)_shouldUseOnePartRotation;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(int)arg1;
- (BOOL)_allowsAutorotation;
- (int)indexOfViewController:(id)arg1;
@property(nonatomic) BOOL displaysPageControl;
- (void)_createPageControl;
- (void)_pageChanged:(id)arg1;
@property(nonatomic) BOOL wraps;
@property(nonatomic) int pageCount;
@property(nonatomic) int visibleIndex;
- (void)setVisibleIndex:(int)arg1 animated:(BOOL)arg2;
- (struct CGRect)_scrollViewFrame;
- (void)_scrollViewDidScroll:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)_scrollView:(id)arg1 boundsDidChangeToSize:(struct CGSize)arg2;
- (void)_adjustScrollViewContentInsets;
- (void)_scrollViewDidEndPaging;
- (void)_scrollViewWillBeginPaging;
- (void)_notifyNextViewController:(int)arg1 animated:(BOOL)arg2;
- (void)_notifyVisibleViewController:(int)arg1 animated:(BOOL)arg2;
- (void)_notifyPreviousViewController:(int)arg1 animated:(BOOL)arg2;
- (int)_nextViewControllerNotificationState;
- (int)_visibleViewControllerNotificationState;
- (int)_previousViewControllerNotificationState;
- (void)_setNextViewControllerNotificationState:(int)arg1;
- (void)_setVisibleViewControllerNotificationState:(int)arg1;
- (void)_setPreviousViewControllerNotificationState:(int)arg1;
- (void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(BOOL)arg4;
@property(readonly, nonatomic) UIViewController *visibleViewController;
- (BOOL)_hasNextViewController;
- (BOOL)_hasVisibleViewController;
- (BOOL)_hasPreviousViewController;
- (id)_nextViewController;
- (id)_visibleViewController;
- (id)_previousViewController;
- (id)_loadNextViewController;
- (id)_loadVisibleViewControllerAndNotify:(BOOL)arg1;
- (id)_loadPreviousViewController;
- (BOOL)_needToLoadNext;
- (BOOL)_needToLoadVisible;
- (BOOL)_needToLoadPrevious;
- (void)_setNextViewController:(id)arg1;
- (void)_setVisibleViewController:(id)arg1;
- (void)_setPreviousViewController:(id)arg1;
- (void)_replaceViewControllerAtIndex:(int)arg1 withViewController:(id)arg2;
- (BOOL)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(int)arg2;
- (id)_scrollView;
@property(nonatomic) float pageSpacing;
- (void)viewDidUnload;
- (void)loadView;
- (void)dealloc;
- (id)_pageControllerScrollView;
- (void)reloadViewControllerAtIndex:(int)arg1;
- (void)setVisibleIndex:(int)arg1 preservingLoadedViewControllers:(BOOL)arg2 animated:(BOOL)arg3;

@end

