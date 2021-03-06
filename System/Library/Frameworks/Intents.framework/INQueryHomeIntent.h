/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INQueryHomeIntentExport.h>

@class NSArray, NSString;

@interface INQueryHomeIntent : INIntent <INQueryHomeIntentExport>

@property (nonatomic,copy,readonly) NSArray * entities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEntities:(NSArray *)arg1 ;
-(NSString *)description;
-(id)_dictionaryRepresentation;
-(NSArray *)entities;
-(id)_metadata;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 ;
-(id)initWithEntities:(id)arg1 ;
@end

