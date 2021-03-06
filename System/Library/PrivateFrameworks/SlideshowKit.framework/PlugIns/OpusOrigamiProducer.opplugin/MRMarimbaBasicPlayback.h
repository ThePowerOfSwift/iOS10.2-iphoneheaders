/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPDocument, MRRenderer;


@protocol MRMarimbaBasicPlayback
@property (nonatomic,retain) MPDocument * document; 
@property (assign,nonatomic) double time; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (assign,nonatomic) double volume; 
@property (assign,nonatomic) BOOL stopWithVideo; 
@property (assign,nonatomic) BOOL displaysFPS; 
@property (nonatomic,readonly) MRRenderer * renderer; 
@property (assign,nonatomic) BOOL enableSlideDidChangeNotification; 
@required
-(void)touchesCancelled:(id)arg1;
-(void)pauseWhenStill;
-(void)setDisplaysFPS:(BOOL)arg1;
-(void)requestRendering:(BOOL)arg1;
-(void)goForth;
-(void)warmupRenderer;
-(void)touchesEnded:(id)arg1;
-(void)touchesBegan:(id)arg1;
-(void)touchesMoved:(id)arg1;
-(BOOL)displaysFPS;
-(CGImageRef)snapshotAsCGImage;
-(void)setStopWithVideo:(BOOL)arg1;
-(void)prevFrame;
-(void)gotoBeginning;
-(void)nextFrame;
-(CGImageRef)snapshotAsCGImageForTime:(double)arg1 withSize:(CGSize)arg2;
-(void)setEnableSlideDidChangeNotification:(BOOL)arg1;
-(BOOL)enableSlideDidChangeNotification;
-(BOOL)stopWithVideo;
-(void)gotoEnd;
-(double)volume;
-(void)setVolume:(double)arg1;
-(BOOL)isPlaying;
-(void)goBack;
-(MPDocument *)document;
-(void)play;
-(void)setDocument:(id)arg1;
-(void)pause;
-(double)time;
-(void)setTime:(double)arg1;
-(double)timeRemaining;
-(void)togglePlayback;
-(MRRenderer *)renderer;

@end

