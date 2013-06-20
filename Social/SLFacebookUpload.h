/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface SLFacebookUpload : NSObject <NSSecureCoding>
{
    NSString *_uploadID;
    int _uploadType;
    unsigned long long _totalBytes;
    unsigned long long _transferredBytes;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long transferredBytes; // @synthesize transferredBytes=_transferredBytes;
@property(nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(nonatomic) int uploadType; // @synthesize uploadType=_uploadType;
@property(retain, nonatomic) NSString *uploadID; // @synthesize uploadID=_uploadID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
