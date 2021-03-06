/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartInfo, TSCH3DLabelResources, TSCH3DChartTitlePositioner;

@interface TSCH3DChartTitleProperties : NSObject {

	TSCHChartInfo* mInfo;
	TSCH3DLabelResources* mLabels;
	BOOL mHidden;
	TSCH3DChartTitlePositioner* mCachedPositioner;

}

@property (nonatomic,readonly) TSCH3DLabelResources * labels; 
@property (nonatomic,readonly) TSCHChartInfo * chartInfo; 
@property (assign,nonatomic) BOOL hidden; 
@property (nonatomic,retain) TSCH3DChartTitlePositioner * cachedPositioner; 
+(id)propertiesWithInfo:(id)arg1 styleIndex:(unsigned long long)arg2 ;
-(TSCHChartInfo *)chartInfo;
-(id)initWithInfo:(id)arg1 styleIndex:(unsigned long long)arg2 ;
-(TSCH3DChartTitlePositioner *)cachedPositioner;
-(void)setCachedPositioner:(TSCH3DChartTitlePositioner *)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSCH3DLabelResources *)labels;
-(BOOL)hidden;
@end

