/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPRadioController, NSArray;

@interface MPRadioLibrary : NSObject {

	MPRadioController* _radioController;

}

@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,readonly) unsigned long long stationCount; 
@property (nonatomic,readonly) NSArray * stations; 
+(id)defaultRadioLibrary;
-(id)init;
-(void)dealloc;
-(BOOL)isEnabled;
-(NSArray *)stations;
-(void)getRecentStationGroupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_radioAvailabilityDidChangeNotification:(id)arg1 ;
-(void)_radioRecentStationsDidChangeNotification:(id)arg1 ;
-(id)_radioModel;
-(unsigned long long)stationCount;
-(id)stationWithIdentifier:(long long)arg1 ;
-(void)addStationBasedOnTrackIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
@end

