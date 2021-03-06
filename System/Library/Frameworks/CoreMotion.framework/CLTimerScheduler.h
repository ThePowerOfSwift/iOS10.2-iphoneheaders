/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLTimer;


@protocol CLTimerScheduler
@property (assign,nonatomic,__weak) CLTimer * timer; 
@required
-(CLTimer *)timer;
-(void)setTimer:(id)arg1;
-(void)reflectNextFireTime:(double)arg1 fireInterval:(double)arg2;

@end

