/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAMPRateMediaEntity : SABaseClientBoundCommand

@property (assign,nonatomic) long long rating; 
+(id)rateMediaEntity;
+(id)rateMediaEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)rating;
-(void)setRating:(long long)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

