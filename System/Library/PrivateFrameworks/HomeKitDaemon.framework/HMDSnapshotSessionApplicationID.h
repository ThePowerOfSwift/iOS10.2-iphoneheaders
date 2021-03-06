/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDCameraSessionID, NSString;

@interface HMDSnapshotSessionApplicationID : NSObject <NSCopying> {

	HMDCameraSessionID* _sessionID;
	NSString* _applicationIdentifier;

}

@property (nonatomic,readonly) HMDCameraSessionID * sessionID;                //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)applicationIdentifier;
-(HMDCameraSessionID *)sessionID;
-(id)initWithSessionID:(id)arg1 applicationIdentifier:(id)arg2 ;
@end

