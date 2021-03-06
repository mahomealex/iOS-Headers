/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<CKContentEntryBridgeClient>;

@interface CKContentEntryBridge : NSObject
{
    int _outgoingBubbleColor;
    NSObject<CKContentEntryBridgeClient> *_entryView;
}

+ (id)newContentEntryBridge;
- (void)dealloc;
@property(nonatomic) int outgoingBubbleColor; // @synthesize outgoingBubbleColor=_outgoingBubbleColor;
- (void)setMessageComposition:(id)arg1;
- (id)messageComposition;
- (id)messageCompositionIfTextOnly;
- (void)setMessageParts:(id)arg1;
- (id)messageParts;
- (id)attachments;
- (void)insertMessagePart:(id)arg1;
- (BOOL)hasContent;
- (id)newContentViewWithFrame:(struct CGRect)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1 inTextContentView:(id)arg2;
- (void)updateComposition;
@property(nonatomic) NSObject<CKContentEntryBridgeClient> *contentEntryView; // @synthesize contentEntryView=_entryView;

@end

