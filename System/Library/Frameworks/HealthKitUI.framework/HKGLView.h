/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <GLKit/GLKView.h>

@class UIScreen, CADisplayLink, BKSProcessAssertion;

@interface HKGLView : GLKView {

	UIScreen* _screen;
	CADisplayLink* _displayLink;
	BOOL _displayLinkPaused;
	BOOL _viewIsVisible;
	BOOL _viewWillMoveToWindow;
	double _lastUpdateTime;
	BOOL _needsRender;
	unsigned _latestDrawErrror;
	BKSProcessAssertion* _renderingAssertion;
	BOOL _synchronizesWithCA;
	BOOL _shouldBypassApplicationStateChecking;
	float _preferredFramesPerSecond;

}

@property (assign,nonatomic) BOOL synchronizesWithCA;                                //@synthesize synchronizesWithCA=_synchronizesWithCA - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) float preferredFramesPerSecond;                         //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (assign,nonatomic) BOOL shouldBypassApplicationStateChecking;              //@synthesize shouldBypassApplicationStateChecking=_shouldBypassApplicationStateChecking - In the implementation block
@property (nonatomic,readonly) double timeSinceLastUpdate; 
+(void)_clearCachedProgramForVertexShader:(id)arg1 fragmentShader:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(unsigned)drawInRect:(CGRect)arg1 ;
-(id)snapshot;
-(void)_commonInit;
-(void)willMoveToWindow:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_update;
-(void)setPreferredFramesPerSecond:(float)arg1 ;
-(void)update;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(void)_updateScreenIfChanged;
-(void)_createDisplayLinkForScreen:(id)arg1 ;
-(float)preferredFramesPerSecond;
-(BOOL)viewIsVisible;
-(void)_loadVertexShader:(id)arg1 fragmentShader:(id)arg2 inBundle:(id)arg3 forProgram:(unsigned*)arg4 cache:(BOOL)arg5 ;
-(double)timeSinceLastUpdate;
-(void)setNeedsRender;
-(void)_displayLinkFired;
-(void)setShouldBypassApplicationStateChecking:(BOOL)arg1 ;
-(void)_pauseByNotification:(id)arg1 ;
-(void)_resumeByNotification:(id)arg1 ;
-(void)_willResignActive:(id)arg1 ;
-(void)_invalidateLastUpdateTime;
-(void)_updateGLLayerIsAsynchronous;
-(void)_acquireRenderingAssertionIfNeeded;
-(void)_releaseRenderingAssertion;
-(BOOL)_isLastUpdateTimeValid;
-(void)_loadVertexShaderSource:(id)arg1 fragmentShaderSource:(id)arg2 forProgram:(unsigned*)arg3 ;
-(void)setSynchronizesWithCA:(BOOL)arg1 ;
-(BOOL)synchronizesWithCA;
-(BOOL)shouldBypassApplicationStateChecking;
@end

