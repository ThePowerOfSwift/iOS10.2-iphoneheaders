/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSNumberFormatter, NSObject;

@interface MCFormatterVendor : NSObject {

	NSNumberFormatter* _numberFormatter;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)numberFormatter;
-(void)_localeDidChange:(id)arg1 ;
@end

