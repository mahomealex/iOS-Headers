//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface RCSavedRecordingAssetRemaker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_remakeQueue;
    NSMutableDictionary *_remakerCompletionBlocksByRecordingURIRepresentation;
    NSMutableDictionary *_recordingURIsRemakeLockfileFD;
    NSMutableArray *_remadeURIRepresentations;
}

+ (id)supportPathsToDeleteWhenDeletingRecording:(id)arg1;
+ (id)intermediateRecordingURLForRecording:(id)arg1;
+ (id)remakeLockfilePathForRecording:(id)arg1;
+ (id)remakeIntermediateDestinationForRecording:(id)arg1;
+ (id)remakeSourceForRecording:(id)arg1;
+ (id)sharedRemaker;
- (void).cxx_destruct;
- (void)_invokeRemakingBlocksForRecordingURIRepresentation:(id)arg1 remadePathExists:(BOOL)arg2;
- (void)_remakeQueueBlock_remakeRecordingWithRecordingsModelQueue:(id)arg1 recordingURIRepresentation:(id)arg2;
- (BOOL)_onQueue_hasRemadeRecording:(id)arg1;
- (BOOL)_onQueue_shouldEnqueueRemakingOperationWithRecording:(id)arg1;
- (BOOL)isRemakingRecordingWithUIRepresentation:(id)arg1;
- (void)_awakeFromFetchRecording:(id)arg1;
- (void)prepareRecordingWithURIRepresentation:(id)arg1 priority:(double)arg2 recordingsModelQueue:(id)arg3 finishedPreparingBlock:(CDUnknownBlockType)arg4;
- (void)_remakeRecording:(id)arg1 withURIRepresentation:(id)arg2 priority:(double)arg3 recordingsModelQueue:(id)arg4 finishedPreparingBlock:(CDUnknownBlockType)arg5;
- (id)init;

@end

