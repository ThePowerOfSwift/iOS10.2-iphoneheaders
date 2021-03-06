/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusRegion.h>

@protocol _UIFocusPromiseRegionDelegate;
@interface _UIFocusPromiseRegion : _UIFocusRegion {

	id<_UIFocusPromiseRegionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_UIFocusPromiseRegionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_UIFocusPromiseRegionDelegate>)arg1 ;
-(id<_UIFocusPromiseRegionDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)_shouldCropRegionToSearchArea;
-(id)_visualRepresentationColor;
-(unsigned long long)_focusableBoundaries;
-(id)_destinationItemForFocusMovement:(id)arg1 inMap:(id)arg2 ;
-(long long)_visualRepresentationPatternType;
-(id)_delegateFulfillFocusPromiseRegion;
@end

