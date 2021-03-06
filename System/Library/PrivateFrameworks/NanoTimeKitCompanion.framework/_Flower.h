/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSNumber;

@interface _Flower : _Geometry {

	float _width;
	float _height;
	NSNumber* _tex;

}

@property (nonatomic,retain) NSNumber * tex;              //@synthesize tex=_tex - In the implementation block
@property (assign,nonatomic) float width;                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float height;                //@synthesize height=_height - In the implementation block
-(float)width;
-(float)height;
-(void)setWidth:(float)arg1 ;
-(void)setHeight:(float)arg1 ;
-(NSNumber *)tex;
-(void)setTex:(NSNumber *)arg1 ;
@end

