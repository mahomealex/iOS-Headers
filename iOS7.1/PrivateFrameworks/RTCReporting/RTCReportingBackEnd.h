//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface RTCReportingBackEnd : NSObject
{
    NSDictionary *_profile;
    NSString *_name;
    int _state;
    NSString *_productVersion;
    NSString *_buildVersion;
    NSString *_hardwareType;
    NSString *_productFamily;
    double _startTimeStamp;
    unsigned int _sessionID;
    int _compType;
    unsigned short _clientVersion;
    unsigned short _eventID;
    unsigned char _selfVersionMajor;
    unsigned char _selfVersionMinor;
    unsigned char _isInternal;
    unsigned char _requireUserInfo;
    NSDictionary *_userInfoDict;
    unsigned char _batchEvents;
    char *_udid;
    NSString *_displayURL;
    double _samplingFactor;
}

@property double samplingFactor; // @synthesize samplingFactor=_samplingFactor;
@property unsigned char batchEvents; // @synthesize batchEvents=_batchEvents;
@property unsigned char requireUserInfo; // @synthesize requireUserInfo=_requireUserInfo;
@property unsigned char isInternal; // @synthesize isInternal=_isInternal;
@property(copy) NSString *productFamily; // @synthesize productFamily=_productFamily;
@property(copy) NSString *hardwareType; // @synthesize hardwareType=_hardwareType;
@property(copy) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(copy) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(copy) NSString *displayURL; // @synthesize displayURL=_displayURL;
@property char *udid; // @synthesize udid=_udid;
@property unsigned short clientVersion; // @synthesize clientVersion=_clientVersion;
@property int compType; // @synthesize compType=_compType;
@property unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property int state; // @synthesize state=_state;
- (BOOL)uploadFileAtPath:(id)arg1;
- (id)flushMessages;
- (id)sendMsgOfType:(int)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 dict:(id)arg5;
- (void)setStartTimestamp:(const struct timeval *)arg1;
- (id)sendMsgOfType:(int)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 dict:(id)arg6;
- (id)setUserInfoDict:(id)arg1;
- (void)setSelfVersion:(id)arg1;
- (void)dealloc;
- (void)cleanup;
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;
- (id)convertIntoSHA256:(id)arg1;

@end

