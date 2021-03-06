/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface StoreBannerTracker : NSObject {

	NSMutableDictionary* _blockedProducts;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedTracker;
-(id)init;
-(void)load;
-(void)clear;
-(id)filePath;
-(void)save;
-(void)isProductBannerBlocked:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)blockProductBanner:(id)arg1 ;
@end

