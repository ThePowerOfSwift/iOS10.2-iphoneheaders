/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SKCloudServiceController : NSObject {

	BOOL _hasValidCloudServiceCapability;
	unsigned long long _cloudServiceCapability;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(long long)authorizationStatus;
+(void)requestAuthorization:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)requestCapabilitiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_playbackCapabilitiesDidChangeNotification;
-(void)_accountStoreDidChangeNotification;
-(void)_updateCapabilitiesWithResponse:(id)arg1 postNotification:(BOOL)arg2 ;
-(void)_handleInvalidation;
-(void)_storefrontDidChangeNotification;
-(void)requestStorefrontIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
@end

