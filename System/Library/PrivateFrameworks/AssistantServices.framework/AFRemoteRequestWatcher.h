/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AFRemoteRequestWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	/*^block*/id _handler;

}
-(id)init;
-(void)dealloc;
-(void)_setupListener;
-(void)setNewRequestHandler:(/*^block*/id)arg1 ;
@end

