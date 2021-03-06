/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallObserverDataSource.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSMutableDictionary, NSHashTable, NSXPCConnection, NSString;

@interface CXCallObserverXPCClient : NSObject <CXCallObserverDataSource> {

	int _notifyToken;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSMutableDictionary* _mutableCallUUIDToCallMap;
	NSHashTable* _delegates;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueue;                //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableCallUUIDToCallMap;              //@synthesize mutableCallUUIDToCallMap=_mutableCallUUIDToCallMap - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                     //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int notifyToken;                                             //@synthesize notifyToken=_notifyToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * callUUIDToCallMap; 
+(id)sharedXPCClientSemaphore;
+(id)sharedXPCClient;
+(void)releaseSharedXPCClient;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)_init;
-(void)_invalidate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(int)notifyToken;
-(void)setNotifyToken:(int)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSHashTable *)delegates;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(NSDictionary *)callUUIDToCallMap;
-(oneway void)addOrUpdateCall:(id)arg1 ;
-(oneway void)removeCall:(id)arg1 ;
-(void)requestTransaction:(id)arg1 forExtensionIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_requestCalls;
-(NSMutableDictionary *)mutableCallUUIDToCallMap;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 isSynchronous:(BOOL)arg2 ;
-(void)_removeCall:(id)arg1 ;
-(void)_addOrUpdateCall:(id)arg1 ;
-(void)_markAllCallsAsEnded;
-(void)setMutableCallUUIDToCallMap:(NSMutableDictionary *)arg1 ;
@end

