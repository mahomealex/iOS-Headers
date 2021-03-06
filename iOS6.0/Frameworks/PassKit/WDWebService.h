/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSString, NSURL;

@interface WDWebService : NSObject <NSSecureCoding>
{
    NSString *_passType;
    NSURL *_serviceURL;
    NSString *_pushToken;
    NSString *_deviceIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(retain, nonatomic) NSURL *serviceURL; // @synthesize serviceURL=_serviceURL;
@property(retain, nonatomic) NSString *passType; // @synthesize passType=_passType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)generateNewDeviceIdentifier;
- (void)dealloc;

@end

