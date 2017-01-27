/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute;

@interface GEORouteMatcher : NSObject {

	GEOComposedRoute* _route;
	BOOL _useStrictInitialOnRouteCriteria;

}

@property (assign,nonatomic) BOOL useStrictInitialOnRouteCriteria;              //@synthesize useStrictInitialOnRouteCriteria=_useStrictInitialOnRouteCriteria - In the implementation block
-(void)dealloc;
-(id)initWithRoute:(id)arg1 ;
-(id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3 ;
-(void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(id)matchToRouteWithLocation:(id)arg1 ;
-(id)matchToRouteWithLocation:(id)arg1 previousRouteMatch:(id)arg2 ;
-(id)matchToClosestPointOnRouteWithLocation:(id)arg1 ;
-(double)distanceToRouteFrom:(SCD_Struct_GE26)arg1 ;
-(double)distanceToRouteFrom:(SCD_Struct_GE26)arg1 startDistance:(double)arg2 endDistance:(double)arg3 ;
-(void)_forEachSegmentNearLocation:(id)arg1 previousRouteMatch:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_startRouteMatch;
-(id)_startStepForPreviousRouteMatch:(id)arg1 ;
-(id)_stepForPointIndex:(unsigned)arg1 previousStep:(id)arg2 ;
-(void)_considerCandidateMatch:(id)arg1 ;
-(double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2 ;
-(BOOL)_shouldConsiderCourseForLocation:(id)arg1 ;
-(BOOL)useStrictInitialOnRouteCriteria;
-(void)setUseStrictInitialOnRouteCriteria:(BOOL)arg1 ;
@end
