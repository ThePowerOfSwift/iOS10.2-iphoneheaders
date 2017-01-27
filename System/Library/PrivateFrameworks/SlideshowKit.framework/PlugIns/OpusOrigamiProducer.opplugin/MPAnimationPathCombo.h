/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPAnimationPath.h>
#import <OpusOrigamiProducer/MPAnimationSupport.h>

@class NSMutableDictionary, NSString;

@interface MPAnimationPathCombo : MPAnimationPath <MPAnimationSupport> {

	NSMutableDictionary* _animationPaths;
	NSString* _operation;
	NSString* _key;

}

@property (nonatomic,copy) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * operation;              //@synthesize operation=_operation - In the implementation block
+(id)animationPath;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(id)animationPaths;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)operation;
-(void)setOperation:(NSString *)arg1 ;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)cleanup;
@end
