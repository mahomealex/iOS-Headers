/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class UITapGestureRecognizer;

@interface UIMovieSnapshotView : UIImageView <UIGestureRecognizerDelegate>
{
    id <UIMovieSnapshotViewDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(nonatomic) id <UIMovieSnapshotViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_viewWasTapped:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

