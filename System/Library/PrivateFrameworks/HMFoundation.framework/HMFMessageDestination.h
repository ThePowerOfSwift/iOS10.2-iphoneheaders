/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface HMFMessageDestination : NSObject {

	NSUUID* _target;

}

@property (nonatomic,copy,readonly) NSUUID * target;              //@synthesize target=_target - In the implementation block
+(id)shortDescription;
+(id)allMessageDestinations;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSUUID *)target;
-(id)initWithTarget:(id)arg1 ;
-(id)shortDescription;
-(id)descriptionWithPointer:(BOOL)arg1 ;
@end

