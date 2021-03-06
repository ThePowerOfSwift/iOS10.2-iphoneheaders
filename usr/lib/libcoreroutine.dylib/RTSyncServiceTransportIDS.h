/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/RTSyncServiceTransportProtocol.h>

@protocol RTSyncServiceTransportClientProtocol, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface RTSyncServiceTransportIDS : NSObject <IDSServiceDelegate, RTSyncServiceTransportProtocol> {

	id<RTSyncServiceTransportClientProtocol> _delegate;
	NSMutableArray* _services;
	long long _linkState;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * services;                                             //@synthesize services=_services - In the implementation block
@property (assign,nonatomic) long long linkState;                                                   //@synthesize linkState=_linkState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<RTSyncServiceTransportClientProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<RTSyncServiceTransportClientProtocol>)arg1 ;
-(id<RTSyncServiceTransportClientProtocol>)delegate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)devices;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(NSMutableArray *)services;
-(void)setServices:(NSMutableArray *)arg1 ;
-(void)establishLink:(/*^block*/id)arg1 ;
-(void)sendMessage:(id)arg1 recipients:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)invalidateLink:(/*^block*/id)arg1 ;
-(long long)linkState;
-(id)initWithServiceNames:(id)arg1 ;
-(id)initWithServices:(id)arg1 ;
-(void)_updateLinkState:(long long)arg1 ;
-(id)_serviceForDataProtectionClass:(long long)arg1 ;
-(void)setLinkState:(long long)arg1 ;
@end

