/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRAssetPlayerTimeSupport
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) BOOL isPlaying; 
@required
-(double)duration;
-(void)setDuration:(double)arg1;
-(void)setStartTime:(double)arg1;
-(double)startTime;
-(BOOL)isPlaying;
-(double)time;
-(void)setTime:(double)arg1;
-(void)setIsPlaying:(BOOL)arg1;

@end
