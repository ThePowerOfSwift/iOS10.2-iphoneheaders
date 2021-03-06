/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTFormula.h>

@interface TSTWrappedFormula : TSTFormula {

	int mFunctionIndex;

}

@property (assign,nonatomic) int functionIndex; 
-(int)functionIndex;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(id)nodesToCheckForBareArgumentPlaceholders;
-(void)reparseWithStorage:(id)arg1 adjustExpressionTree:(/*^block*/id)arg2 ;
-(void)setFunctionIndex:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

