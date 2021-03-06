/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTransformGeometryRenderProcessor.h>

@class NSMutableArray, TSCH3DGetSelectionKnobsPositionsPipelineDelegate;

@interface TSCH3DGetSelectionKnobsPositionsRenderProcessor : TSCH3DTransformGeometryRenderProcessor {

	NSMutableArray* mProjectedPoints;
	TSCH3DGetSelectionKnobsPositionsPipelineDelegate* mSceneObjectDelegate;
	float mNormalizedKnobRadius;

}

@property (nonatomic,retain) TSCH3DGetSelectionKnobsPositionsPipelineDelegate * sceneObjectDelegate; 
@property (nonatomic,retain) NSMutableArray * projectedPoints; 
@property (assign,nonatomic) float normalizedKnobRadius; 
-(tmat4x4<float>)modelViewNormalizedProjection;
-(void)submit:(const PrimitiveInfo*)arg1 ;
-(void)setNormalizedKnobRadius:(float)arg1 ;
-(void)setProjectedPoints:(NSMutableArray *)arg1 ;
-(void)setSceneObjectDelegate:(TSCH3DGetSelectionKnobsPositionsPipelineDelegate *)arg1 ;
-(NSMutableArray *)projectedPoints;
-(TSCH3DGetSelectionKnobsPositionsPipelineDelegate *)sceneObjectDelegate;
-(float)normalizedKnobRadius;
-(void)dealloc;
@end

