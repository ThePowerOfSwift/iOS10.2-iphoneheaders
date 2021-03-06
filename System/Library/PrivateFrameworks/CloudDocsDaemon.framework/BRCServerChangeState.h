/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, CKServerChangeToken;

@interface BRCServerChangeState : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _lastSyncDownDate;
	long long _lastSyncDownStatus;
	CKServerChangeToken* _changeToken;
	CKServerChangeToken* _pendingChangeToken;
	unsigned long long _clientRequestID;

}

@property (retain) NSDate * lastSyncDownDate;                                                 //@synthesize lastSyncDownDate=_lastSyncDownDate - In the implementation block
@property (assign,nonatomic) long long lastSyncDownStatus;                                    //@synthesize lastSyncDownStatus=_lastSyncDownStatus - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * changeToken;                               //@synthesize changeToken=_changeToken - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * pendingChangeToken;                        //@synthesize pendingChangeToken=_pendingChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long clientRequestID;                              //@synthesize clientRequestID=_clientRequestID - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * nextSyncRequestChangeToken; 
@property (nonatomic,readonly) BOOL hasNeverSyncedDown; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionWithContext:(id)arg1 ;
-(CKServerChangeToken *)nextSyncRequestChangeToken;
-(BOOL)updateWithServerChangeToken:(id)arg1 clientRequestID:(unsigned long long)arg2 syncDownStatus:(long long)arg3 ;
-(NSDate *)lastSyncDownDate;
-(CKServerChangeToken *)changeToken;
-(unsigned long long)clientRequestID;
-(long long)lastSyncDownStatus;
-(CKServerChangeToken *)pendingChangeToken;
-(void)setLastSyncDownDate:(NSDate *)arg1 ;
-(void)setLastSyncDownStatus:(long long)arg1 ;
-(void)setChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setPendingChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setClientRequestID:(unsigned long long)arg1 ;
-(void)forgetPendingChangeToken;
-(void)forgetChangeTokens;
-(void)forgetClientRequestID;
-(BOOL)hasNeverSyncedDown;
-(id)initWithServerSyncState:(id)arg1 ;
@end

