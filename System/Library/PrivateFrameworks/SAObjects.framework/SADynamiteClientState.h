/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceClientState.h>

@class SACalendar, NSString;

@interface SADynamiteClientState : SAAceClientState

@property (nonatomic,retain) SACalendar * expirationDate; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * userToken; 
+(id)deliveryDeadline;
+(id)persistencePolicy;
+(id)syncKey;
+(id)uniqueObjectIdentifier;
+(id)dynamiteClientState;
+(id)dynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(SACalendar *)expirationDate;
-(void)setExpirationDate:(SACalendar *)arg1 ;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setUserToken:(NSString *)arg1 ;
-(NSString *)userToken;
@end
