/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFHomeKitObject.h>

@class NSUUID, NSString, HMAccessory, NSDate, NSError;

@interface HFDiscoveredAccessory : NSObject <HFHomeKitObject> {

	NSUUID* _accessoryUUID;
	NSString* _accessoryName;
	HMAccessory* _accessory;
	NSDate* _discoveryDate;
	unsigned long long _status;
	NSError* _error;

}

@property (nonatomic,retain) HMAccessory * accessory;                       //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSUUID * accessoryUUID;                      //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,readonly) NSString * accessoryName;                    //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) NSDate * discoveryDate;                      //@synthesize discoveryDate=_discoveryDate - In the implementation block
@property (nonatomic,readonly) unsigned long long status;                   //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
-(id)init;
-(NSString *)description;
-(NSUUID *)uniqueIdentifier;
-(unsigned long long)status;
-(NSError *)error;
-(HMAccessory *)accessory;
-(NSUUID *)accessoryUUID;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(NSString *)accessoryName;
-(id)initWithAccessory:(id)arg1 ;
-(void)updateStatus:(unsigned long long)arg1 error:(id)arg2 ;
-(id)_descriptionForStatus:(unsigned long long)arg1 ;
-(id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 ;
-(NSDate *)discoveryDate;
@end

