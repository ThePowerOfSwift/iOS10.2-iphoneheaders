/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface _LSDClient : NSObject <NSXPCConnectionDelegate> {

	NSXPCConnection* _XPCConnection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain,readonly) NSXPCConnection * XPCConnection;              //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCConnection:(id)arg1 queue:(id)arg2 ;
-(NSXPCConnection *)XPCConnection;
-(void)willHandleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)didHandleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)dealloc;
-(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(id)initWithXPCConnection:(id)arg1 ;
@end

