/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUDefaultDownloadPolicy.h>

@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)isPowerRequired;
-(unsigned long long)wifiOnlyPeriodInDays;
-(id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)arg1 ;
@end
