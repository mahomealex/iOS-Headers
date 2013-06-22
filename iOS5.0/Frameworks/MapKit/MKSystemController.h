/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface MKSystemController : NSObject
{
    NSMutableArray *_backgroundTasks;
}

+ (id)sharedInstance;
- (void)popBackgroundTask;
- (void)pushBackgroundTaskWithHandler:(id)arg1;
- (int)deviceTileSize;
- (int)deviceTileScale;
- (void)removeReachabilityObserver:(id)arg1;
- (void)addReachabilityObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3;
- (BOOL)isMultitaskingSupported;
- (int)userInterfaceIdiom;
- (BOOL)hasMultitouchDeviceInstalled;
- (BOOL)hasTelephonyCapability;
- (BOOL)isRunningOniPad;
- (BOOL)isLiveScrollCapable;
- (BOOL)isSensitiveUIEnabled;
- (BOOL)isHiDPI;
- (struct CGSize)screenSize;
- (float)screenScale;
- (BOOL)isWifiEnabled;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)init;

@end
