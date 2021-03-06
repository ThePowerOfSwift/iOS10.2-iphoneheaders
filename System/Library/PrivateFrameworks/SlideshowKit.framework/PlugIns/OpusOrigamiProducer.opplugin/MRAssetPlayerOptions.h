/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRImage;

@interface MRAssetPlayerOptions : NSObject {

	MRImage* _initialImage;
	BOOL _wantsMonochromatic;
	BOOL _wantsMipmap;
	BOOL _wantsPowerOfTwo;
	BOOL _isForExport;
	BOOL _thumbnailIsOK;
	double _stillTime;
	id _playerHint;
	double _introDuration;
	double _mainDuration;
	double _outroDuration;
	CGSize _resolutionIfEmbeddedAsset;

}

@property (readonly) BOOL isEmbeddedAsset; 
@property (readonly) BOOL isStill; 
@property (assign,nonatomic) BOOL wantsMonochromatic;                       //@synthesize wantsMonochromatic=_wantsMonochromatic - In the implementation block
@property (assign,nonatomic) BOOL wantsMipmap;                              //@synthesize wantsMipmap=_wantsMipmap - In the implementation block
@property (assign,nonatomic) BOOL wantsPowerOfTwo;                          //@synthesize wantsPowerOfTwo=_wantsPowerOfTwo - In the implementation block
@property (assign,nonatomic) BOOL isForExport;                              //@synthesize isForExport=_isForExport - In the implementation block
@property (assign,nonatomic) BOOL thumbnailIsOK;                            //@synthesize thumbnailIsOK=_thumbnailIsOK - In the implementation block
@property (assign,nonatomic) double stillTime;                              //@synthesize stillTime=_stillTime - In the implementation block
@property (assign,nonatomic) CGSize resolutionIfEmbeddedAsset;              //@synthesize resolutionIfEmbeddedAsset=_resolutionIfEmbeddedAsset - In the implementation block
@property (retain) MRImage * initialImage; 
@property (assign,nonatomic) id playerHint;                                 //@synthesize playerHint=_playerHint - In the implementation block
@property (assign,nonatomic) double introDuration;                          //@synthesize introDuration=_introDuration - In the implementation block
@property (assign,nonatomic) double mainDuration;                           //@synthesize mainDuration=_mainDuration - In the implementation block
@property (assign,nonatomic) double outroDuration;                          //@synthesize outroDuration=_outroDuration - In the implementation block
-(void)setMainDuration:(double)arg1 ;
-(double)stillTime;
-(MRImage *)initialImage;
-(void)setIsForExport:(BOOL)arg1 ;
-(void)setStillTime:(double)arg1 ;
-(CGSize)resolutionIfEmbeddedAsset;
-(double)outroDuration;
-(double)introDuration;
-(void)setWantsMonochromatic:(BOOL)arg1 ;
-(void)setWantsMipmap:(BOOL)arg1 ;
-(id)playerHint;
-(void)setWantsPowerOfTwo:(BOOL)arg1 ;
-(BOOL)wantsPowerOfTwo;
-(BOOL)isEmbeddedAsset;
-(BOOL)isForExport;
-(void)setThumbnailIsOK:(BOOL)arg1 ;
-(BOOL)thumbnailIsOK;
-(BOOL)isStill;
-(void)setIntroDuration:(double)arg1 ;
-(void)setOutroDuration:(double)arg1 ;
-(double)mainDuration;
-(BOOL)wantsMipmap;
-(void)setResolutionIfEmbeddedAsset:(CGSize)arg1 ;
-(BOOL)wantsMonochromatic;
-(void)setInitialImage:(MRImage *)arg1 ;
-(void)setPlayerHint:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

