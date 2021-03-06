/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CUIStructuredThemeStorage <NSObject>
- (unsigned int)authoredWithSchemaVersion;
- (unsigned int)distilledInCoreUIVersion;
- (unsigned int)documentFormatVersion;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1;
- (double)fontSizeForFontSizeType:(id)arg1;
- (_Bool)getFontName:(id *)arg1 baselineOffset:(double *)arg2 forFontType:(id)arg3;
- (_Bool)hasPhysicalColorWithName:(id)arg1;
- (_Bool)getPhysicalColor:(struct _colordef *)arg1 withName:(id)arg2;

@optional
- (unsigned long long)colorSpaceID;
@end

