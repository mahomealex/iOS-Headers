//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDSaveUserPrivacySettingsOperation : CKDOperation
{
    int _discoverable;
    NSString *_applicationBundleID;
}

@property(copy, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(nonatomic) int discoverable; // @synthesize discoverable=_discoverable;
- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldCheckAppVersion;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

