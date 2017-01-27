/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UILocalNotification, NSString;

@interface TimerManager : NSObject {

	int _state;
	UILocalNotification* _notification;
	double _remainingTime;

}

@property (assign,nonatomic) double defaultDuration; 
@property (nonatomic,readonly) NSString * defaultSound; 
@property (nonatomic,readonly) int state; 
@property (nonatomic,readonly) double fireTime; 
@property (nonatomic,readonly) double remainingTime; 
+(id)sharedManager;
+(BOOL)isTimerNotification:(id)arg1 ;
+(BOOL)upgrade;
+(BOOL)discardOldVersion;
+(id)copyFetchScheduledNotification;
+(id)newNotificationAt:(double)arg1 withSound:(id)arg2 ;
+(void)setSoundID:(id)arg1 forNotification:(id)arg2 ;
+(void)updateTimerShortcutItem;
-(double)fireTime;
-(BOOL)cancel;
-(int)state;
-(BOOL)resume;
-(BOOL)pause;
-(double)remainingTime;
-(void)_reloadStateAndRefreshLocalNotificationsWithCompletion:(/*^block*/id)arg1 ;
-(void)reloadState;
-(void)setDefaultSound:(NSString *)arg1 ;
-(void)changeSound:(id)arg1 ;
-(void)setDefaultDuration:(double)arg1 ;
-(NSString *)defaultSound;
-(void)scheduleAt:(double)arg1 withSound:(id)arg2 ;
-(double)defaultDuration;
@end
