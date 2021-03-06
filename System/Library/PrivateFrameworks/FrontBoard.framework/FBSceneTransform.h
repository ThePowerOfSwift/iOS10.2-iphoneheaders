/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FrontBoard/FrontBoard-Structs.h>
@class NSHashTable;

@interface FBSceneTransform : NSObject {

	CGAffineTransform _transform;
	NSHashTable* _targets;

}

@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
+(CGAffineTransform)concatenateTransforms:(id)arg1 ;
-(id)init;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)dealloc;
-(id)description;
-(CGAffineTransform)transform;
-(id)_initWithTransform:(CGAffineTransform)arg1 ;
-(void)addTransformTarget:(id)arg1 ;
-(void)removeTransformTarget:(id)arg1 ;
@end

