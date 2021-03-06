/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSString, NSUUID, HMFMessageDispatcher, NSObject, NSMutableArray, HMAccessoryCategory;

@interface HMDUnpairedAccessory : NSObject <HMFMessageReceiver> {

	NSString* _identifier;
	NSString* _name;
	NSUUID* _uuid;
	NSString* _homeName;
	NSString* _password;
	HMFMessageDispatcher* _msgDispatcher;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _servers;
	HMAccessoryCategory* _category;

}

@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * servers;                                        //@synthesize servers=_servers - In the implementation block
@property (nonatomic,retain) HMAccessoryCategory * category;                                  //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (getter=getName,nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long transportTypes; 
@property (nonatomic,copy) NSString * homeName;                                               //@synthesize homeName=_homeName - In the implementation block
@property (nonatomic,copy) NSString * password;                                               //@synthesize password=_password - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(HMAccessoryCategory *)category;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(unsigned long long)transportTypes;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSMutableArray *)servers;
-(void)setServers:(NSMutableArray *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForMessages;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)initWithMessageDispatcher:(id)arg1 ;
-(NSString *)homeName;
-(BOOL)hasBTLELink;
-(void)updateCategory:(id)arg1 ;
-(void)updateName:(id)arg1 ;
-(void)_updateCategory:(id)arg1 notifyClients:(BOOL)arg2 ;
-(void)_updateName:(id)arg1 ;
-(void)_handleIdentify:(id)arg1 ;
-(id)accessoryServers;
-(id)descriptionNonBlocking;
-(id)descriptionForTransportTypes;
-(id)preferredAccessoryServer;
-(void)addAccessoryServer:(id)arg1 ;
-(void)removeAccessoryServer:(id)arg1 ;
-(id)dumpDescription;
-(void)setHomeName:(NSString *)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)getName;
@end

