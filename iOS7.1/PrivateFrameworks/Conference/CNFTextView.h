//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface CNFTextView : UIView
{
    UIView *_backgroundView;
    UIView *_backgroundViewTop;
    UIView *_backgroundViewBottom;
    UIView *_labelView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
}

- (void)setOrientation:(int)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 frame:(struct CGRect)arg3;

@end
