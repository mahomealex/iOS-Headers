/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKeyboardCandidateView.h>

#import "UICollectionViewDelegate-Protocol.h"
#import "UIKeyboardCandidateBarDelegate-Protocol.h"

@class UIKeyboardCandidatePageControl;

@interface UIKeyboardCandidateView_iPad : UIKeyboardCandidateView <UICollectionViewDelegate, UIKeyboardCandidateBarDelegate>
{
    UIKeyboardCandidatePageControl *_pageControl;
}

+ (float)defaultExtendedControlHeight;
- (void)didEndSplitTransition;
- (void)candidateBarDidScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updatePageControlStatus;
- (float)_additionalClipHeight;
- (void)setCandidateViewExtended:(BOOL)arg1;
- (void)layoutSubviews;
- (unsigned int)_numberOfColumns:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
