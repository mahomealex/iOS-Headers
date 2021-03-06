//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UITextFieldDelegate.h"

@class NSMutableArray, NSString, SKUIGiftConfiguration, UITextField, UIView;

@interface SKUIGiftAmountControl : UIControl <UITextFieldDelegate>
{
    NSMutableArray *_amountButtons;
    UIView *_customAmountBackgroundView;
    UITextField *_customAmountField;
    SKUIGiftConfiguration *_giftConfiguration;
    int _selectedAmount;
    int _trackingAmount;
}

- (void).cxx_destruct;
- (void)_updateButtonsWithTouch:(id)arg1;
- (void)_reloadSelectedButton;
- (void)_textFieldDidEndEditing:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (void)_textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) NSString *selectedAmountString;
@property(readonly, nonatomic) int selectedAmount;
- (void)dealloc;
- (id)initWithGiftConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

