/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VMULibraryLoadDelegate, OS_dispatch_queue;
#import <Symbolication/Symbolication-Structs.h>
@class NSObject;

@interface _VMULibraryLoadObserver : NSObject {

	id<VMULibraryLoadDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialNotificationsQueue;
	CSTypeRef _symbolicator;

}
-(void)dealloc;
-(id)initWithTask:(unsigned)arg1 taskIsCorpse:(BOOL)arg2 delegate:(id)arg3 ;
-(void)stopObserving;
@end

