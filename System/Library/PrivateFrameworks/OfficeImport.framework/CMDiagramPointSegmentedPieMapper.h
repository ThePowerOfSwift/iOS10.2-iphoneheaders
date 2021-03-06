/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMDiagramPointMapper.h>

@interface CMDiagramPointSegmentedPieMapper : CMDiagramPointMapper {

	double mStartAngle;
	double mStopAngle;
	BOOL mDrawArrows;
	unsigned long long mSegmentIndex;
	unsigned long long mSegmentCount;

}
-(void)setStartAngle:(double)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)setDrawArrows:(BOOL)arg1 ;
-(id)transformPresentationName;
-(void)setStopAngle:(double)arg1 ;
-(void)setSegmentIndex:(unsigned long long)arg1 ;
-(void)setSegmentCount:(unsigned long long)arg1 ;
-(id)_arrowFillWithState:(id)arg1 ;
@end

