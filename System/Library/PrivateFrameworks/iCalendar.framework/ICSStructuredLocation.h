/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString, NSData;

@interface ICSStructuredLocation : ICSProperty

@property (nonatomic,retain) NSString * fmtype; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * loctype; 
@property (nonatomic,retain) NSString * abURLString; 
@property (nonatomic,retain) NSData * mapKitHandle; 
@property (assign,nonatomic) double radius; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,retain) NSString * routing; 
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)displayName;
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(void)setAddress:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)propertiesToObscure;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(NSString *)loctype;
-(void)setLoctype:(NSString *)arg1 ;
-(NSString *)abURLString;
-(void)setAbURLString:(NSString *)arg1 ;
-(NSString *)fmtype;
-(void)setFmtype:(NSString *)arg1 ;
-(NSString *)routing;
-(void)setRouting:(NSString *)arg1 ;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSData *)mapKitHandle;
-(NSString *)address;
@end

