/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDVideoStreamInterfaceDelegate <NSObject>
@required
-(void)videoStream:(id)arg1 didStartRelay:(id)arg2;
-(void)videoStream:(id)arg1 didStart:(id)arg2;
-(void)videoStream:(id)arg1 didStop:(id)arg2;
-(void)videoStreamDidNetworkImprove:(id)arg1;
-(void)videoStreamDidNetworkDeteriorate:(id)arg1;
-(void)videoStreamDidUpdateConfiguration:(id)arg1;

@end
