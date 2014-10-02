//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDataObserver.h"
#import "HDDiagnosticObject.h"
#import "HDHealthDataCollectionManager.h"

@class CMPedometer, HDDemoManager, NSCountedSet, NSDate, NSObject<OS_dispatch_queue>, NSString;

@interface HDDataCollectionManager : NSObject <HDDataObserver, HDDiagnosticObject, HDHealthDataCollectionManager>
{
    BOOL _continuousActivityDataCollectionEnabled;
    BOOL _stepCountingAvailable;
    BOOL _stairCountingAvailable;
    BOOL _distanceAvailable;
    BOOL _gettingPedometerUpdates;
    NSDate *_lastLaunchUpdate;
    BOOL _queryingPedometer;
    CMPedometer *_pedometer;
    id <HDHealthDaemon> _healthDaemon;
    id <HDDataCollectionManagerDelegate> _delegate;
    NSCountedSet *_activeDataClasses;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _lastPedometerRecordID;
    NSDate *_lastTimestamp;
    HDDemoManager *_demoManager;
}

@property(retain, nonatomic) HDDemoManager *demoManager; // @synthesize demoManager=_demoManager;
@property(retain, nonatomic) NSDate *lastTimestamp; // @synthesize lastTimestamp=_lastTimestamp;
@property(nonatomic) unsigned int lastPedometerRecordID; // @synthesize lastPedometerRecordID=_lastPedometerRecordID;
@property(nonatomic) BOOL queryingPedometer; // @synthesize queryingPedometer=_queryingPedometer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSCountedSet *activeDataClasses; // @synthesize activeDataClasses=_activeDataClasses;
@property(nonatomic) __weak id <HDDataCollectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property(retain, nonatomic) CMPedometer *pedometer; // @synthesize pedometer=_pedometer;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)stopRecordingData;
- (void)startRecordingDataToFile:(id)arg1;
- (void)stopReplayingData;
- (void)startReplayingDataFromFile:(id)arg1 repeat:(BOOL)arg2;
- (void)stopFakingData;
- (void)startFakingDataWithActivity:(int)arg1 speed:(id)arg2;
- (id)_localDeviceSource;
- (id)_demoManagerCreatingIfNecessary;
- (BOOL)_shouldGetPedometerUpdates;
- (void)_adjustPedometerUpdatesWithAnchor:(BOOL)arg1;
- (void)_didStartCollection:(BOOL)arg1 forDataType:(id)arg2;
- (void)_userDefaultReceived:(id)arg1;
- (BOOL)_dataReceived:(id)arg1 fromSource:(id)arg2 provenance:(unsigned int)arg3 isDemoData:(BOOL)arg4 error:(id *)arg5;
- (id)_didUpdateDistance:(double)arg1 fromTotalDistance:(double)arg2 betweenStartTime:(id)arg3 endTime:(id)arg4;
- (id)_didUpdateFloorsAscended:(int)arg1 fromTotalFloors:(int)arg2 betweenStartTime:(id)arg3 endTime:(id)arg4;
- (id)_didUpdateSteps:(int)arg1 fromStepsBasis:(int)arg2 betweenStartTime:(id)arg3 endTime:(id)arg4;
- (void)_updateLastPedometerRecords:(int)arg1 lastTime:(id)arg2;
- (BOOL)_fetchLastPedometerRecords;
- (void)_handlePedometerData:(id)arg1 startDate:(id)arg2 stepsBasis:(int)arg3 distanceBasis:(double)arg4 floorsBasis:(int)arg5 addedToArray:(id)arg6;
- (void)_fetchPedometerHistoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startPedometerUpdates;
- (BOOL)_isPedometerAvailable;
- (void)_setUserProfile;
- (void)samplesOfTypeWereRemoved:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_unregisterObservedTypes;
- (void)_registerObservedTypes;
- (void)sensorDataArrayReceived:(id)arg1 sourceEntity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sensorDataArrayReceived:(id)arg1 sourceEntity:(id)arg2;
- (void)sensorDataReceived:(id)arg1 sourceEntity:(id)arg2;
- (void)stopDataCollection:(id)arg1;
- (void)startDataCollection:(id)arg1;
- (void)clientUserDefaultReceived:(id)arg1;
- (void)demoDataReceived:(id)arg1;
- (void)periodicUpdate;
- (void)dealloc;
- (void)_initCoreMotion;
- (id)initWithHealthDaemon:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
