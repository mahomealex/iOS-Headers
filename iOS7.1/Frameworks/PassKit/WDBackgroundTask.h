//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_xpc_object>;

@interface WDBackgroundTask : NSObject
{
    NSObject<OS_xpc_object> *_job;
}

+ (BOOL)isLegalStartDate:(id)arg1;
+ (id)_taskWithJob:(id)arg1;
@property(readonly, nonatomic) BOOL batteryLevelSatisfied;
@property(readonly, nonatomic) BOOL pluggedInSatisfied;
@property(readonly, nonatomic) BOOL screenBlankedSatisfied;
@property(readonly, nonatomic) BOOL networkSatisfied;
@property(readonly, nonatomic) BOOL taskExpired;
@property(readonly, nonatomic) BOOL taskSatisfied;
@property(readonly, nonatomic) BOOL taskValid;
- (void)setEndDateForMaximumWindow;
@property(retain, nonatomic) id userContext;
@property(nonatomic) double requiredBatteryLevel;
@property(nonatomic) double requiredPluggedInTime;
@property(nonatomic) double requiredScreenBlankedTime;
@property(nonatomic) BOOL optimizeNetworkPower;
@property(nonatomic) BOOL allowedDuringRoaming;
@property(nonatomic) BOOL allowedDuringVoiceCall;
@property(nonatomic) BOOL cellularAllowed;
@property(nonatomic) BOOL networkRequired;
@property(nonatomic) BOOL adjustDates;
@property(retain, nonatomic) NSDate *endDate;
@property(retain, nonatomic) NSDate *startDate;
- (id)description;
- (id)_job;
- (void)dealloc;
- (id)_initWithJob:(id)arg1;
- (id)init;

@end
