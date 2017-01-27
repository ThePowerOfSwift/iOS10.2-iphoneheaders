/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/AKFormFeatureDetectorDelegate.h>

@class AKController, NSString;

@interface AKFormFeatureDetectorController : NSObject <AKFormFeatureDetectorDelegate> {

	AKController* _controller;

}

@property (__weak) AKController * controller;                       //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(CGSize)defaultFeatureSizeForPage:(id)arg1 ;
-(double)maximumFeatureWidthForPage:(id)arg1 ;
-(BOOL)wantsDefaultFeatures;
-(BOOL)detectFormFeatureAtPoint:(CGPoint)arg1 inPageController:(id)arg2 ;
-(id)formFeatureAtPoint:(CGPoint)arg1 inPageController:(id)arg2 ;
-(BOOL)formFeature:(id)arg1 intersectsAnnotationsOnPage:(id)arg2 ;
-(void)createAnnotationWithFeature:(id)arg1 onPageController:(id)arg2 ;
-(id)_convertFont:(id)arg1 toSize:(double)arg2 ;
@end
