/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, IKElementChangeSet;


@protocol IKDataSourceElementImplementing <NSObject>
@property (nonatomic,readonly) NSArray * prototypes; 
@property (nonatomic,readonly) IKElementChangeSet * itemsChangeset; 
@required
-(void)initialize;
-(long long)numberOfItems;
-(void)teardown;
-(void)configureUpdatesWithImplementation:(id)arg1;
-(void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(/*^block*/id)arg2;
-(long long)indexOfItemForChildElement:(id)arg1;
-(void)updateStylesUsingUpdater:(/*^block*/id)arg1;
-(id)prototypeForItemAtIndex:(long long)arg1;
-(id)elementForItemAtIndex:(long long)arg1 loadIfNeeded:(BOOL)arg2;
-(void)unloadIndex:(long long)arg1;
-(NSArray *)prototypes;
-(IKElementChangeSet *)itemsChangeset;

@end
