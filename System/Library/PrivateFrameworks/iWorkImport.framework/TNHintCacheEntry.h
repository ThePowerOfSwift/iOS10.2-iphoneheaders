/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDHint;
#import <iWorkImport/iWorkImport-Structs.h>
@interface TNHintCacheEntry : NSObject {

	id<TSDHint> mHint;
	BOOL mIsValid;
	CGPoint mOrigin;

}

@property (retain) id<TSDHint> hint; 
@property (getter=isValid) BOOL valid; 
@property (assign) CGPoint origin; 
-(id)initWithHint:(id)arg1 origin:(CGPoint)arg2 ;
-(void)dealloc;
-(BOOL)isValid;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(void)setHint:(id<TSDHint>)arg1 ;
-(id<TSDHint>)hint;
-(void)setValid:(BOOL)arg1 ;
@end

