//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBCollectionViewCellDelegate.h"
#import "SBStarkBannerTargetObserver.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSString, SBCarBannerNotificationView, SBStarkAlertItemBannerSource, SBStarkBannerCell, SBStarkBannerTarget, SBStarkBulletinBannerSource, SBStarkNotificationLayout, SBUIBannerContext, UITapGestureRecognizer;

@interface SBStarkNotificationViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, SBCollectionViewCellDelegate, SBStarkBannerTargetObserver, UIGestureRecognizerDelegate>
{
    id <SBStarkNotificationViewControllerDelegate> _delegate;
    _Bool _touchCapable;
    UITapGestureRecognizer *_backGestureRecognizer;
    UITapGestureRecognizer *_selectGestureRecognizer;
    SBStarkBannerTarget *_bannerTarget;
    SBStarkAlertItemBannerSource *_alertItemBannerSource;
    SBStarkBulletinBannerSource *_bulletinBannerSource;
    SBUIBannerContext *_currentContext;
    NSArray *_currentSubActionLabels;
    SBStarkBannerCell *_currentCell;
    int _state;
    SBStarkNotificationLayout *_notificationsLayout;
    SBCarBannerNotificationView *_notificationsView;
}

@property(nonatomic) id <SBStarkNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)starkBannerTarget:(id)arg1 didChangeContextWithDismissReason:(int)arg2;
- (void)_performSelectGesture:(id)arg1;
- (void)_performBackGesture:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_showTestNotificationWithTitle:(id)arg1;
- (_Bool)isSuspended;
- (void)setSuspended:(_Bool)arg1 cancellingCurrent:(_Bool)arg2 forReason:(id)arg3;
- (void)setSuspended:(_Bool)arg1 forReason:(id)arg2;
- (void)dismissCurrent;
- (void)_setState:(int)arg1;
@property(nonatomic) int state;
- (void)loadView;
- (void)dealloc;
- (id)initWithInteractionAffordances:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
