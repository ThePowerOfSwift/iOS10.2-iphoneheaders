/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SPRemoteInterfaceOpenParentRequest : NSObject {

	BOOL _waitingForReply;
	NSData* _userInfoData;
	/*^block*/id _reply;

}

@property (assign,nonatomic) BOOL waitingForReply;              //@synthesize waitingForReply=_waitingForReply - In the implementation block
@property (nonatomic,copy) NSData * userInfoData;               //@synthesize userInfoData=_userInfoData - In the implementation block
@property (nonatomic,copy) id reply;                            //@synthesize reply=_reply - In the implementation block
-(NSData *)userInfoData;
-(void)setUserInfoData:(NSData *)arg1 ;
-(BOOL)waitingForReply;
-(void)setWaitingForReply:(BOOL)arg1 ;
-(id)reply;
-(void)setReply:(id)arg1 ;
@end

