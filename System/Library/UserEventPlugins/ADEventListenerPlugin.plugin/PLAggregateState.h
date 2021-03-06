/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSSet;

@interface PLAggregateState : NSObject {

	NSNumber* energy;
	NSNumber* energyAbsolute;
	NSNumber* energyRaw;
	NSNumber* time;
	NSNumber* count;
	NSSet* substateIndices;

}

@property (nonatomic,copy) NSNumber * energy; 
@property (nonatomic,copy) NSNumber * energyAbsolute; 
@property (nonatomic,copy) NSNumber * energyRaw; 
@property (nonatomic,copy) NSNumber * time; 
@property (nonatomic,copy) NSNumber * count; 
@property (nonatomic,retain) NSSet * substateIndices; 
+(id)stateWithSubstateIndices:(id)arg1 ;
-(id)initWithSubstateIndices:(id)arg1 ;
-(void)setSubstateIndices:(NSSet *)arg1 ;
-(void)setTime:(id)arg1 energy:(id)arg2 energyAbsolute:(id)arg3 energyRaw:(id)arg4 ;
-(void)updateCompositeStateWithBaseStates:(id)arg1 ;
-(NSSet *)substateIndices;
-(NSNumber *)energyAbsolute;
-(NSNumber *)energyRaw;
-(void)setEnergyAbsolute:(NSNumber *)arg1 ;
-(void)resetStats;
-(void)setEnergyRaw:(NSNumber *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSNumber *)count;
-(void)setCount:(NSNumber *)arg1 ;
-(NSNumber *)time;
-(void)setTime:(NSNumber *)arg1 ;
-(void)setEnergy:(NSNumber *)arg1 ;
-(NSNumber *)energy;
-(void)incrementCount;
@end

