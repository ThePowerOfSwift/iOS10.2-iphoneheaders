/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ServerAccounts.framework/ServerAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SVAVPNUtility : NSObject
+(BOOL)isVPNProfileInstalledForAccount:(id)arg1 ;
+(BOOL)setPassword:(id)arg1 forVPNConfiguration:(id)arg2 ;
+(void)installVPNProfileForAccount:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)removeVPNProfileForAccount:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
