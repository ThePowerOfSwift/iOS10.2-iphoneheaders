/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPassFaceView.h>

@class PKBarcodeStickerView, WLEasyToHitCustomButton, UILabel, PKLinkedAppIconView;

@interface PKPassFrontFaceView : PKPassFaceView {

	PKBarcodeStickerView* _barcodeView;
	WLEasyToHitCustomButton* _flipButton;
	WLEasyToHitCustomButton* _barcodeButton;
	UILabel* _logoLabel;
	BOOL _showsLinkedApp;
	BOOL _showsInfo;
	BOOL _showsBarcodeButton;
	BOOL _showsBarcodeView;
	PKLinkedAppIconView* _linkedApp;

}

@property (nonatomic,readonly) PKBarcodeStickerView * barcodeView; 
@property (assign,nonatomic) BOOL showsLinkedApp;                               //@synthesize showsLinkedApp=_showsLinkedApp - In the implementation block
@property (assign,nonatomic) BOOL showsInfo;                                    //@synthesize showsInfo=_showsInfo - In the implementation block
@property (assign,nonatomic) BOOL showsBarcodeButton;                           //@synthesize showsBarcodeButton=_showsBarcodeButton - In the implementation block
@property (assign,nonatomic) BOOL showsBarcodeView;                             //@synthesize showsBarcodeView=_showsBarcodeView - In the implementation block
@property (nonatomic,readonly) PKLinkedAppIconView * linkedApp;                 //@synthesize linkedApp=_linkedApp - In the implementation block
-(id)init;
-(CGSize)contentSize;
-(void)layoutSubviews;
-(void)dealloc;
-(id)shortFaceTemplate;
-(void)createBodyContentViews;
-(void)insertContentView:(id)arg1 ofType:(long long)arg2 ;
-(BOOL)showsBarcodeView;
-(void)setShowsBarcodeView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)barcodeFrame;
-(id)shortScrunchedFaceTemplate;
-(id)tallFaceTemplate;
-(id)passFaceTemplate;
-(BOOL)isFrontFace;
-(id)_relevantBuckets;
-(void)createHeaderContentViews;
-(void)setClipsContent:(BOOL)arg1 ;
-(void)setShowsBarcodeButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_barcodeButtonPressed;
-(void)_flipButtonPressed;
-(PKBarcodeStickerView *)barcodeView;
-(void)_positionBarcodeView;
-(void)setShowsLinkedApp:(BOOL)arg1 ;
-(void)setShowsInfo:(BOOL)arg1 ;
-(void)setShowsBarcodeButton:(BOOL)arg1 ;
-(void)setShowsBarcodeView:(BOOL)arg1 ;
-(void)updateValidity;
-(BOOL)showsLinkedApp;
-(BOOL)showsInfo;
-(BOOL)showsBarcodeButton;
-(PKLinkedAppIconView *)linkedApp;
@end

