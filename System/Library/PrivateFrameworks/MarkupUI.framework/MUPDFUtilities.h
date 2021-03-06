/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MarkupUI/MarkupUI-Structs.h>
@interface MUPDFUtilities : NSObject
+(unsigned long long)indexOfDictionary:(CGPDFDictionaryRef)arg1 inArray:(CGPDFArrayRef)arg2 ;
+(unsigned long long)normalizedRotationAngleOfPage:(CGPDFPageRef)arg1 ;
+(id)createPDFDateString:(id)arg1 ;
+(id)createDictionaryFromPDFDictionary:(CGPDFDictionaryRef)arg1 ;
+(long long)exifOrientationOfPage:(CGPDFPageRef)arg1 ;
+(CGAffineTransform)flattenRotationTransformForPage:(CGPDFPageRef)arg1 outMediaBox:(CGRect*)arg2 outCropBox:(CGRect*)arg3 ;
@end

