//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMediaItem, MPMediaQuery;

@protocol MPAVControllerProtocol <NSObject>
@property(readonly, nonatomic) unsigned int state;
@property(nonatomic) unsigned int displayOverridePlaybackState;
@property(readonly, nonatomic) MPMediaQuery *currentMediaQuery;
@property(readonly, nonatomic) MPMediaItem *currentMediaItem;
- (BOOL)shouldDisplayAsPlaying;
@end

