/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMObject.h>

@class DOMCSSPrimitiveValue;

@interface DOMRGBColor : DOMObject

@property (readonly) DOMCSSPrimitiveValue * red; 
@property (readonly) DOMCSSPrimitiveValue * green; 
@property (readonly) DOMCSSPrimitiveValue * blue; 
@property (readonly) DOMCSSPrimitiveValue * alpha; 
-(void)dealloc;
-(CGColorRef)color;
-(DOMCSSPrimitiveValue *)alpha;
-(DOMCSSPrimitiveValue *)red;
-(DOMCSSPrimitiveValue *)green;
-(DOMCSSPrimitiveValue *)blue;
@end
