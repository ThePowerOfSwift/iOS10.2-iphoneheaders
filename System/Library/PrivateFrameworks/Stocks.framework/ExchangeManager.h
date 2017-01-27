/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ExchangeManager : NSObject {

	NSMutableDictionary* _exchangesByName;

}
+(id)sharedManager;
-(id)init;
-(void)saveChanges;
-(id)exchangeWithName:(id)arg1 createIfNotFound:(BOOL)arg2 ;
-(void)_loadExchangesFromDefaults;
-(void)addExchange:(id)arg1 ;
-(id)exchangeWithName:(id)arg1 ;
-(void)_addExchange:(id)arg1 ;
-(id)exchangeList;
-(BOOL)containsExchange:(id)arg1 ;
-(void)removeExchange:(id)arg1 ;
-(void)reloadExchangesFromDefaults;
@end
