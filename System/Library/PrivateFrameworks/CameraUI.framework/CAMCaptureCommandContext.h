/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVCaptureSession, AVCaptureDevice, AVCaptureDeviceFormat, NSString, AVCaptureDeviceInput, AVCaptureStillImageOutput, AVCapturePhotoOutput, AVCaptureMovieFileOutput, CAMPanoramaOutput, AVCaptureMetadataOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, CAMCaptureEngine, CAMPanoramaConfiguration;

@interface CAMCaptureCommandContext : NSObject {

	AVCaptureSession* _currentCaptureSession;
	AVCaptureDevice* _currentVideoDevice;
	AVCaptureDeviceFormat* _currentVideoDeviceFormat;
	NSString* _currentVideoDevicePreset;
	AVCaptureDeviceInput* _currentVideoDeviceInput;
	AVCaptureDevice* _currentAudioDevice;
	AVCaptureDeviceInput* _currentAudioDeviceInput;
	AVCaptureStillImageOutput* _currentLegacyStillImageOutput;
	AVCapturePhotoOutput* _currentStillImageOutput;
	AVCaptureMovieFileOutput* _currentMovieFileOutput;
	CAMPanoramaOutput* _currentPanoramaOutput;
	AVCaptureMetadataOutput* _currentMetadataOutput;
	AVCaptureVideoDataOutput* _currentEffectsPreviewOutput;
	AVCaptureVideoPreviewLayer* _currentVideoPreviewLayer;
	CAMCaptureEngine* __captureEngine;

}

@property (nonatomic,__weak,readonly) CAMCaptureEngine * _captureEngine;                                              //@synthesize _captureEngine=__captureEngine - In the implementation block
@property (nonatomic,retain) AVCaptureSession * currentCaptureSession;                                                //@synthesize currentCaptureSession=_currentCaptureSession - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * currentVideoDevice;                                                    //@synthesize currentVideoDevice=_currentVideoDevice - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceFormat * currentVideoDeviceFormat;                                        //@synthesize currentVideoDeviceFormat=_currentVideoDeviceFormat - In the implementation block
@property (nonatomic,retain) NSString * currentVideoDevicePreset;                                                     //@synthesize currentVideoDevicePreset=_currentVideoDevicePreset - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * currentVideoDeviceInput;                                          //@synthesize currentVideoDeviceInput=_currentVideoDeviceInput - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * currentAudioDevice;                                                    //@synthesize currentAudioDevice=_currentAudioDevice - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * currentAudioDeviceInput;                                          //@synthesize currentAudioDeviceInput=_currentAudioDeviceInput - In the implementation block
@property (nonatomic,retain) AVCaptureStillImageOutput * currentLegacyStillImageOutput;                               //@synthesize currentLegacyStillImageOutput=_currentLegacyStillImageOutput - In the implementation block
@property (nonatomic,retain) AVCapturePhotoOutput * currentStillImageOutput;                                          //@synthesize currentStillImageOutput=_currentStillImageOutput - In the implementation block
@property (nonatomic,retain) AVCaptureMovieFileOutput * currentMovieFileOutput;                                       //@synthesize currentMovieFileOutput=_currentMovieFileOutput - In the implementation block
@property (nonatomic,retain) CAMPanoramaOutput * currentPanoramaOutput;                                               //@synthesize currentPanoramaOutput=_currentPanoramaOutput - In the implementation block
@property (nonatomic,retain) AVCaptureMetadataOutput * currentMetadataOutput;                                         //@synthesize currentMetadataOutput=_currentMetadataOutput - In the implementation block
@property (nonatomic,retain) AVCaptureVideoDataOutput * currentEffectsPreviewOutput;                                  //@synthesize currentEffectsPreviewOutput=_currentEffectsPreviewOutput - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * currentVideoPreviewLayer;                                   //@synthesize currentVideoPreviewLayer=_currentVideoPreviewLayer - In the implementation block
@property (nonatomic,__weak,readonly) id<AVCaptureFileOutputRecordingDelegate> currentRecordingDelegate; 
@property (nonatomic,readonly) CAMPanoramaConfiguration * currentPanoramaConfiguration; 
@property (nonatomic,__weak,readonly) id<AVCapturePhotoCaptureDelegate> currentStillImageDelegate; 
-(void)clear;
-(AVCaptureDevice *)currentVideoDevice;
-(AVCaptureDeviceFormat *)currentVideoDeviceFormat;
-(AVCaptureMovieFileOutput *)currentMovieFileOutput;
-(CAMCaptureEngine *)_captureEngine;
-(AVCapturePhotoOutput *)currentStillImageOutput;
-(void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2 ;
-(id<AVCapturePhotoCaptureDelegate>)currentStillImageDelegate;
-(AVCaptureStillImageOutput *)currentLegacyStillImageOutput;
-(void)registerLegacyStillImageCaptureRequest:(id)arg1 ;
-(void)legacyStillImageRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2 ;
-(CAMPanoramaOutput *)currentPanoramaOutput;
-(CAMPanoramaConfiguration *)currentPanoramaConfiguration;
-(id)videoDeviceForMode:(long long)arg1 desiredDevice:(long long)arg2 videoConfiguration:(long long)arg3 resolvedDevice:(long long*)arg4 ;
-(AVCaptureSession *)currentCaptureSession;
-(id)audioDeviceInput;
-(AVCaptureDeviceInput *)currentVideoDeviceInput;
-(AVCaptureDeviceInput *)currentAudioDeviceInput;
-(id)outputsForMode:(long long)arg1 ;
-(id)metadataOutputForMode:(long long)arg1 ;
-(AVCaptureMetadataOutput *)currentMetadataOutput;
-(AVCaptureVideoDataOutput *)currentEffectsPreviewOutput;
-(id)primaryOutputForMode:(long long)arg1 ;
-(void)registerVideoCaptureRequest:(id)arg1 ;
-(void)startPanoramaCaptureWithRequest:(id)arg1 ;
-(void)stopPanoramaCapture;
-(void)setCurrentCaptureSession:(AVCaptureSession *)arg1 ;
-(void)setCurrentVideoDevice:(AVCaptureDevice *)arg1 ;
-(void)setCurrentVideoDeviceFormat:(AVCaptureDeviceFormat *)arg1 ;
-(void)setCurrentVideoDevicePreset:(NSString *)arg1 ;
-(void)setCurrentVideoDeviceInput:(AVCaptureDeviceInput *)arg1 ;
-(void)setCurrentAudioDevice:(AVCaptureDevice *)arg1 ;
-(void)setCurrentAudioDeviceInput:(AVCaptureDeviceInput *)arg1 ;
-(void)setCurrentLegacyStillImageOutput:(AVCaptureStillImageOutput *)arg1 ;
-(void)setCurrentMovieFileOutput:(AVCaptureMovieFileOutput *)arg1 ;
-(void)setCurrentPanoramaOutput:(CAMPanoramaOutput *)arg1 ;
-(void)setCurrentMetadataOutput:(AVCaptureMetadataOutput *)arg1 ;
-(void)setCurrentEffectsPreviewOutput:(AVCaptureVideoDataOutput *)arg1 ;
-(void)setCurrentVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(id)_captureEngineDeviceForMode:(long long)arg1 desiredDevice:(long long)arg2 videoConfiguration:(long long)arg3 resolvedDevice:(long long*)arg4 ;
-(id)initWithCaptureEngine:(id)arg1 ;
-(id<AVCaptureFileOutputRecordingDelegate>)currentRecordingDelegate;
-(NSString *)currentVideoDevicePreset;
-(AVCaptureDevice *)currentAudioDevice;
-(void)setCurrentStillImageOutput:(AVCapturePhotoOutput *)arg1 ;
-(AVCaptureVideoPreviewLayer *)currentVideoPreviewLayer;
@end

