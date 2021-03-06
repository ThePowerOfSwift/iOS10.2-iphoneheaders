/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PGPictureInPictureViewController.h>

@protocol AVPictureInPictureViewControllerDelegate;
@class AVPlayerController, AVPictureInPicturePlayerLayerView, NSString;

@interface AVPictureInPictureViewController : UIViewController <PGPictureInPictureViewController> {

	id<AVPictureInPictureViewControllerDelegate> _delegate;
	SCD_Struct_AV6 _delegateRespondsTo;
	AVPlayerController* _playerController;

}

@property (nonatomic,retain) AVPlayerController * playerController;                                              //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,readonly) AVPictureInPicturePlayerLayerView * pictureInPicturePlayerLayerView; 
@property (assign,nonatomic,__weak) id<AVPictureInPictureViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldShowAlternateActionButtonImage; 
@property (nonatomic,readonly) BOOL shouldShowLoadingIndicator; 
+(id)keyPathsForValuesAffectingShouldShowAlternateActionButtonImage;
+(id)keyPathsForValuesAffectingShouldShowLoadingIndicator;
-(AVPictureInPicturePlayerLayerView *)pictureInPicturePlayerLayerView;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<AVPictureInPictureViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<AVPictureInPictureViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)willAnimatePictureInPictureStart;
-(void)didAnimatePictureInPictureStop;
-(void)actionButtonTapped;
-(BOOL)shouldShowAlternateActionButtonImage;
-(BOOL)shouldShowLoadingIndicator;
-(id)initWithPictureInPicturePlayerLayerView:(id)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
@end

