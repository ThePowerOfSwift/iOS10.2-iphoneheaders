/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, CLLocationManager, NSUUID, NSString;

@interface CLSLocationManager : NSObject <CLLocationManagerDelegate> {

	double _desiredAccuracy;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _minimumDelayReached;
	BOOL _isBrowsing;
	NSMutableArray* _pendingBlocks;
	CLLocationManager* _locationManager;
	BOOL _isUpdatingLocation;
	NSUUID* _shutdownUUID;

}

@property (assign,nonatomic) double desiredAccuracy;                //@synthesize desiredAccuracy=_desiredAccuracy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(id)currentLocation;
-(double)desiredAccuracy;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)_dispatchProximityPendingBlocks:(BOOL)arg1 ;
-(void)locationResult:(/*^block*/id)arg1 ;
@end

