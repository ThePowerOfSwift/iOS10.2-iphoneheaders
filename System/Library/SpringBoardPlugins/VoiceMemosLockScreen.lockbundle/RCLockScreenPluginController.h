/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/VoiceMemosLockScreen.lockbundle/VoiceMemosLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAwayViewPluginController.h>
#import <libobjc.A.dylib/RCCurrentRecordingViewControllerDelegate.h>
#import <libobjc.A.dylib/SBLockScreenBundleController.h>

@class UIActivityIndicatorView, RCCurrentRecordingViewController, NSString;

@interface RCLockScreenPluginController : SBAwayViewPluginController <RCCurrentRecordingViewControllerDelegate, SBLockScreenBundleController> {

	UIActivityIndicatorView* _spinnerView;
	BOOL _screenUpdatesDisabled;
	BOOL _recordingViewControllerIsReady;
	RCCurrentRecordingViewController* _recordingViewController;
	BOOL _isScreenBlanked;
	int _blankedStateNotifyToken;
	BOOL _blankedStateNotifyTokenIsValid;
	NSString* _subtitleText;

}

@property (nonatomic,retain) NSString * subtitleText;               //@synthesize subtitleText=_subtitleText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rootViewController;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)notificationBehavior;
-(BOOL)showDateView;
-(BOOL)hasCustomSubtitle;
-(id)customSubtitleText;
-(id)customSubtitleColor;
-(BOOL)showDate;
-(BOOL)allowsTimer;
-(BOOL)allowsSiri;
-(BOOL)allowsLockScreenMediaControls;
-(long long)overlayStyle;
-(void)purgeView;
-(void)pluginWillActivateWithContext:(id)arg1 ;
-(void)pluginDidDeactivateWithContext:(id)arg1 ;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)animateResumingToApplicationWithIdentifier:(id)arg1 ;
-(BOOL)showBatteryChargingText;
-(BOOL)allowsPhotoSlideshow;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)currentRecordingViewControllerRecordingDidEnd:(id)arg1 ;
-(void)currentRecordingViewController:(id)arg1 didChangeAVState:(id)arg2 ;
-(void)currentRecordingViewController:(id)arg1 didDeterminteAvailability:(BOOL)arg2 ;
-(void)_dismissRecordingViewController;
-(void)_tearDownBlankedStateNotify;
-(void)_setupBlankedStateNotifyToken;
-(void)_setScreenUpdatesDisabled:(BOOL)arg1 ;
-(void)_attachRecordingViewIfReady;
-(void)_beginLoadingRemoteView;
-(void)_updateSubtitleText;
-(void)_refreshBlankedState;
-(void)setScreenIsBlanked:(BOOL)arg1 ;
-(BOOL)showAwayItems;
-(BOOL)viewWantsFullscreenLayout;
-(NSString *)subtitleText;
@end

