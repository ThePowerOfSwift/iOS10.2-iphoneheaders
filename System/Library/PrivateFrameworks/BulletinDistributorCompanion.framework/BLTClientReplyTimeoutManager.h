/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PCPersistentTimer, NSMutableArray, NSObject;

@interface BLTClientReplyTimeoutManager : NSObject {

	PCPersistentTimer* _clientReplyTimeoutTimer;
	NSMutableArray* _clientReplyTimeouts;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithQueue:(id)arg1 ;
-(void)_invalidateClientReplyTimer;
-(void)_startClientReplyTimerWithFireDate:(id)arg1 ;
-(void)_handleClientReplyTimeout;
-(void)_startNextClientReplyTimer;
-(BOOL)invalidateClientReplyTimeout:(id)arg1 ;
-(id)addClientReplyTimeoutForBulletin:(id)arg1 sectionID:(id)arg2 timeout:(double)arg3 handler:(/*^block*/id)arg4 ;
@end

