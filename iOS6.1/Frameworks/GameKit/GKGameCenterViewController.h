/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

@class GKHostedGameCenterViewController, GKRemoteGameCenterViewController, NSMutableDictionary, NSString;

@interface GKGameCenterViewController : UINavigationController
{
    id <GKGameCenterControllerDelegate> _gameCenterDelegateWeak;
    GKHostedGameCenterViewController *_privateViewController;
    GKRemoteGameCenterViewController *_remoteViewController;
    NSMutableDictionary *_volatileProperties;
}

+ (BOOL)accessInstanceVariablesDirectly;
@property(retain, nonatomic) NSMutableDictionary *volatileProperties; // @synthesize volatileProperties=_volatileProperties;
@property(retain, nonatomic) GKRemoteGameCenterViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) GKHostedGameCenterViewController *privateViewController; // @synthesize privateViewController=_privateViewController;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
@property(nonatomic) int leaderboardTimeScope; // @dynamic leaderboardTimeScope;
@property(retain, nonatomic) NSString *leaderboardCategory; // @dynamic leaderboardCategory;
@property(nonatomic) int viewState; // @dynamic viewState;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)_flushVolatileProperties;
- (BOOL)_canSetPropertiesOnRemoteViewController;
- (BOOL)_remoteControllerIsPresented;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)_setupChildViewController;
@property(nonatomic) id <GKGameCenterControllerDelegate> gameCenterDelegate; // @synthesize gameCenterDelegate=_gameCenterDelegateWeak;
- (void)dealloc;
- (id)init;
- (void)notifyDelegateOnWillFinish;

@end

