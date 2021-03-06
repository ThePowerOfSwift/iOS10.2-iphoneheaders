/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class SFService, NSObject;

@interface PKProximityAdvertiser : NSObject {

	SFService* _sharingService;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_queue> _advertiserQueue;
	double _timeoutDuration;
	BOOL _isAdvertising;

}

@property (nonatomic,readonly) BOOL isAdvertising;              //@synthesize isAdvertising=_isAdvertising - In the implementation block
-(id)init;
-(void)dealloc;
-(void)endAdvertising;
-(void)startAdvertisingForDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isAdvertising;
@end

