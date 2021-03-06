/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseModifier.h>

@interface GKCurveNoiseModifier : GKNoiseModifier {

	double* _parameters;
	double* _controlPoints;
	int _count;

}
-(id)init;
-(void)dealloc;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithControlPoints:(id)arg1 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end

