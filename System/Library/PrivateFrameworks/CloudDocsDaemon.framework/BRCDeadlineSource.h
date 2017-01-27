/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, BRCDeadlineScheduler;

@interface BRCDeadlineSource : NSObject {

	long long _deadline;
	NSObject*<OS_dispatch_source> _latch;
	BRCDeadlineScheduler* _scheduler;
	Ai _suspendCount;

}
-(void)cancel;
-(void)dealloc;
-(id)description;
-(void)suspend;
-(void)resume;
-(void)signal;
-(void)setTargetQueue:(id)arg1 ;
-(id)initWithScheduler:(id)arg1 ;
-(void)setBottomQueue:(id)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(void)signalWithDeadline:(long long)arg1 ;
@end
