/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class MKUserLocationInternal, CLLocation, CLHeading, NSString;

@interface MKUserLocation : NSObject <MKAnnotation> {

	MKUserLocationInternal* _internal;
	double _expectedCoordinateUpdateInterval;
	double _expectedHeadingUpdateInterval;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) double headingDegrees; 
@property (nonatomic,readonly) double accuracy; 
@property (assign,getter=isUpdating,nonatomic) BOOL updating; 
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) CLHeading * heading; 
@property (nonatomic,retain) CLLocation * fixedLocation; 
@property (nonatomic,retain) CLLocation * predictedLocation; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) NSString * shortDescription; 
@property (assign,nonatomic) double expectedCoordinateUpdateInterval;              //@synthesize expectedCoordinateUpdateInterval=_expectedCoordinateUpdateInterval - In the implementation block
@property (assign,nonatomic) double expectedHeadingUpdateInterval;                 //@synthesize expectedHeadingUpdateInterval=_expectedHeadingUpdateInterval - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
+(void)_setAnnotationClass:(Class)arg1 ;
+(id)keyPathsForValuesAffectingSubtitle;
-(id)init;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(double)timestamp;
-(NSString *)title;
-(void)setTimestamp:(double)arg1 ;
-(void)reset;
-(CLHeading *)heading;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)shortDescription;
-(id)annotation;
-(void)setHeading:(CLHeading *)arg1 ;
-(void)setCourse:(double)arg1 ;
-(double)course;
-(double)accuracy;
-(CLLocation *)fixedLocation;
-(CLLocation *)predictedLocation;
-(BOOL)isUpdating;
-(void)setUpdating:(BOOL)arg1 ;
-(void)setFixedLocation:(CLLocation *)arg1 ;
-(void)setPredictedLocation:(CLLocation *)arg1 ;
-(double)headingDegrees;
-(void)_updateCoordinate;
-(double)expectedCoordinateUpdateInterval;
-(void)setExpectedCoordinateUpdateInterval:(double)arg1 ;
-(double)expectedHeadingUpdateInterval;
-(void)setExpectedHeadingUpdateInterval:(double)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(BOOL)isEqualToLocation:(id)arg1 ;
@end

