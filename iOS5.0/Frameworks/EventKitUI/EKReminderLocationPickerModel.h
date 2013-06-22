/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CLLocationManagerDelegate-Protocol.h"

@class CLGeocoder, CLLocationManager, EKReminderLocationItem, NSArray, NSMutableArray;

@interface EKReminderLocationPickerModel : NSObject <CLLocationManagerDelegate>
{
    CLGeocoder *_geocoder;
    CLLocationManager *_locationManager;
    BOOL _needsUpdate;
    BOOL _isReverseGeocoding;
    int _indexOfItemBeingGeocoded;
    void *_addressBook;
    NSArray *_locationItemsForMe;
    BOOL _meCardIsSet;
    int _operationCount;
    struct __CFArray *_delegates;
    NSMutableArray *_indicesOfItemsQueuedForGeocoding;
    BOOL _isReverseGeocodingQueued;
    EKReminderLocationItem *_currentLocationItem;
    EKReminderLocationItem *_customLocationItem;
    int _selectedIndex;
}

@property(readonly, nonatomic) BOOL meCardIsSet; // @synthesize meCardIsSet=_meCardIsSet;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) EKReminderLocationItem *customLocationItem; // @synthesize customLocationItem=_customLocationItem;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)_endUpdatingCurrentLocation;
@property(readonly, nonatomic) EKReminderLocationItem *currentLocationItem; // @synthesize currentLocationItem=_currentLocationItem;
- (id)locationItemAtIndex:(int)arg1;
- (int)indexOfCustomItem;
- (BOOL)isCustomLocationItemAtIndex:(int)arg1;
- (BOOL)hasCustomLocationItem;
- (int)numberOfLocationItems;
- (id)selectedLocationItem;
- (void)selectLocation:(id)arg1 withAddressDictionary:(id)arg2;
- (void)selectLocation:(id)arg1;
- (void)startUpdatingLocationItemsIfNecessary;
- (void)_giveUpGettingCurrentLocation;
- (void)_handleGeocodingAllItems;
- (void)_geocodeItemAtIndex:(int)arg1;
- (void)_handleCompletedGeocodeWithPlacemarks:(id)arg1 error:(id)arg2;
- (void)_reverseGeocodeCurrentLocation;
- (void)_startNextGeocoderOperation;
- (BOOL)_isGeocoding;
- (id)cachedLocationForAddressDictionary:(id)arg1;
- (void)_cacheLocation:(id)arg1 forAddressDictionary:(id)arg2;
- (void)_didEncounterError:(id)arg1;
- (void)_didUpdateLocationItemAtIndex:(int)arg1;
- (void)_didChangeSelection;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_killTimer;
- (void)reloadMeCardLocationItems;
@property(readonly, nonatomic) void *addressBook;
- (void)_endOperation;
- (void)_beginOperation;

@end
