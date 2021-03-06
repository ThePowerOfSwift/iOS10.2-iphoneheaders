/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardCandidateView.h>
#import <UIKit/UIKeyboardCandidateViewInline.h>

@class NSString;

@interface UIKeyboardCandidateView_Floating : UIKeyboardCandidateView <UIKeyboardCandidateViewInline> {

	CGRect _collapsedRect;
	CGSize presentationSize;

}

@property (assign) CGSize presentationSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultExtendedControlHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)candidatesDidChange;
-(id)_inheritedRenderConfig;
-(id)activeCandidateList;
-(void)setCandidateViewExtended:(BOOL)arg1 ;
-(unsigned long long)_numberOfColumns:(BOOL)arg1 ;
-(void)setPresentationSize:(CGSize)arg1 ;
-(CGSize)presentationSize;
@end

