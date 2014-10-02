//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding>
{
    NSString *_clientID;
    NSString *_displayUUID;
    unsigned int _contextID;
}

+ (BOOL)supportsSecureCoding;
+ (id)propertiesWithClientID:(id)arg1 displayUUID:(id)arg2 contextID:(unsigned int)arg3;
+ (id)propertiesWithMainDisplayAndClientID:(id)arg1 contextID:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property(readonly, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)propertiesOneLevelMoreGeneric;
- (BOOL)isEqualNotIncludingClientID:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithClientID:(id)arg1 displayUUID:(id)arg2 contextID:(unsigned int)arg3;

@end
