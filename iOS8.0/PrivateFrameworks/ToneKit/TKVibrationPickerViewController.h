//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "TKVibrationPickerTableViewCellDelegate.h"
#import "TKVibrationRecorderViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSArray, NSIndexPath, NSString, NSTimer, TKLabelContainerView, TKVibratorController, TLVibrationManager;

@interface TKVibrationPickerViewController : UITableViewController <TKVibrationPickerTableViewCellDelegate, TKVibrationRecorderViewControllerDelegate, UINavigationControllerDelegate>
{
    int _alertType;
    BOOL _showsDefault;
    BOOL _showsUserGenerated;
    BOOL _showsNone;
    BOOL _showsNothingSelected;
    BOOL _showsEditButtonAtRightSideOfCurrentNavigationController;
    BOOL _allowsDeletingDefaultVibration;
    NSString *_noneString;
    NSIndexPath *_selectedVibrationIndexPath;
    BOOL _canEnterEditingMode;
    BOOL _vibrating;
    BOOL _viewHasAppearedAtLeastOnce;
    BOOL _isCallingParentViewController;
    BOOL _swipeToDeleteMode;
    BOOL _skipNextUserGeneratedVibrationsDidChangeNotification;
    TLVibrationManager *_vibrationManager;
    TKVibratorController *_vibratorController;
    id <TKVibrationPickerViewControllerDelegate> _delegate;
    NSTimer *_vibrationShouldStopTimer;
    NSArray *_sortedVibrationIdentifiers;
    NSArray *_sortedUserGeneratedVibrationIdentifiers;
    BOOL _defaultVibrationIdentifierWasExplicitlySet;
    BOOL _showsEditButtonInNavigationBar;
    BOOL _shouldForceShowingAllAvailableSections;
    NSString *_accountIdentifier;
    id <TKVibrationPickerViewControllerDelegate> _additionalDelegate;
    id <TKVibrationPickerViewControllerDismissalDelegate> _dismissalDelegate;
    NSString *_defaultVibrationIdentifier;
    NSIndexPath *_indexPathOfCellBeingDeleted;
    id <TKVibrationPickerStyleProvider> _styleProvider;
    TKLabelContainerView *_defaultSectionHeaderView;
    TKLabelContainerView *_systemSectionHeaderView;
    TKLabelContainerView *_userGeneratedSectionHeaderView;
}

@property(retain, nonatomic, setter=_setUserGeneratedSectionHeaderView:) TKLabelContainerView *_userGeneratedSectionHeaderView; // @synthesize _userGeneratedSectionHeaderView;
@property(retain, nonatomic, setter=_setSystemSectionHeaderView:) TKLabelContainerView *_systemSectionHeaderView; // @synthesize _systemSectionHeaderView;
@property(retain, nonatomic, setter=_setDefaultSectionHeaderView:) TKLabelContainerView *_defaultSectionHeaderView; // @synthesize _defaultSectionHeaderView;
@property(nonatomic, setter=_setShouldForceShowingAllAvailableSections:) BOOL _shouldForceShowingAllAvailableSections; // @synthesize _shouldForceShowingAllAvailableSections;
@property(retain, nonatomic, setter=_setStyleProvider:) id <TKVibrationPickerStyleProvider> _styleProvider; // @synthesize _styleProvider;
@property(retain, nonatomic, setter=_setIndexPathOfCellBeingDeleted:) NSIndexPath *_indexPathOfCellBeingDeleted; // @synthesize _indexPathOfCellBeingDeleted;
@property(nonatomic) BOOL allowsDeletingDefaultVibration; // @synthesize allowsDeletingDefaultVibration=_allowsDeletingDefaultVibration;
@property(nonatomic) BOOL showsEditButtonInNavigationBar; // @synthesize showsEditButtonInNavigationBar=_showsEditButtonInNavigationBar;
@property(nonatomic) BOOL showsNothingSelected; // @synthesize showsNothingSelected=_showsNothingSelected;
@property(retain, nonatomic) NSString *noneString; // @synthesize noneString=_noneString;
@property(nonatomic) BOOL showsNone; // @synthesize showsNone=_showsNone;
@property(nonatomic) BOOL showsUserGenerated; // @synthesize showsUserGenerated=_showsUserGenerated;
@property(nonatomic, setter=_setDefaultVibrationIdentifierWasExplicitlySet:) BOOL _defaultVibrationIdentifierWasExplicitlySet; // @synthesize _defaultVibrationIdentifierWasExplicitlySet;
@property(copy, nonatomic, setter=_setDefaultVibrationIdentifier:) NSString *_defaultVibrationIdentifier; // @synthesize _defaultVibrationIdentifier;
@property(nonatomic) BOOL showsDefault; // @synthesize showsDefault=_showsDefault;
@property(nonatomic, setter=_setDismissalDelegate:) id <TKVibrationPickerViewControllerDismissalDelegate> _dismissalDelegate; // @synthesize _dismissalDelegate;
@property(nonatomic, setter=_setAdditionalDelegate:) id <TKVibrationPickerViewControllerDelegate> _additionalDelegate; // @synthesize _additionalDelegate;
@property(nonatomic) id <TKVibrationPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) int alertType; // @synthesize alertType=_alertType;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_presentVibrationRecorderViewController;
- (void)vibrationPickerTableViewCell:(id)arg1 endedEditingWithText:(id)arg2;
- (void)_stopVibrating;
- (void)_startVibratingWithVibrationIdentifier:(id)arg1;
- (unsigned int)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)vibrationRecorderViewControllerWasDismissedWithoutSavingRecordedVibrationPattern:(id)arg1;
- (void)vibrationRecorderViewController:(id)arg1 didFinishRecordingVibrationPattern:(id)arg2 name:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)_getTitle:(id *)arg1 customHeaderView:(id *)arg2 forHeaderInSection:(int)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) int _sectionForNoneGroup;
@property(readonly, nonatomic) int _sectionForUserGeneratedGroup;
@property(readonly, nonatomic) int _sectionForSystemGroup;
@property(readonly, nonatomic) int _sectionForDefaultGroup;
- (void)_updateSectionVisibilityFlagAtLocation:(char *)arg1 toValue:(BOOL)arg2 sectionIndexGetter:(CDUnknownBlockType)arg3;
- (void)_performBlockForcingShowingAllAvailableSections:(CDUnknownBlockType)arg1;
- (void)_handleError:(id)arg1;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_adjustedNameForVibrationWithDesiredName:(id)arg1 vibrationIdentifier:(id)arg2;
- (void)_updateSelectionStyleForCell:(id)arg1 indexPath:(id)arg2;
- (void)_updateEditButtonItemWithAnimation:(BOOL)arg1;
- (void)_updateEditButtonItem;
- (id)_navigationItem;
- (void)_processSelectionOfVibrationWithIdentifier:(id)arg1;
- (id)_indexPathForVibrationWithIdentifier:(id)arg1;
- (id)_identifierOfVibrationAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *_sortedUserGeneratedVibrationIdentifiers;
@property(readonly, nonatomic) NSArray *_sortedVibrationIdentifiers;
- (id)_sortedArrayWithVibrationIdentifiers:(id)arg1 allowsDuplicateVibrationNames:(BOOL)arg2;
- (void)applicationWillSuspend;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) BOOL _showsOnlyEditableSections;
@property(retain, nonatomic, setter=_setSelectedVibrationIndexPathAdjustedForCurrentEditingMode:) NSIndexPath *_selectedVibrationIndexPathAdjustedForCurrentEditingMode;
- (id)_actualIndexPathFromNonEditingIndexPath:(id)arg1;
- (id)_nonEditingIndexPathFromActualIndexPath:(id)arg1;
- (void)_updateStyleOfTableView:(id)arg1 forStyleProvider:(id)arg2;
@property(retain, nonatomic) id <TKVibrationPickerStyleProvider> styleProvider;
- (void)_setSelectedVibrationIdentifier:(id)arg1 processSelectionOfVibrationIdentifier:(BOOL)arg2;
@property(retain, nonatomic) NSString *selectedVibrationIdentifier;
@property(readonly, nonatomic) BOOL canEnterEditingMode;
@property(copy, nonatomic) NSString *defaultVibrationIdentifier;
- (void)dealloc;
- (id)initWithAlertType:(int)arg1;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
