/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIScreenEdgePanRecognizerDelegate.h>
#import <UIKit/_UIKBRTRecognizerDelegate.h>
#import <UIKit/_UIKBRTTouchDriftingDelegate.h>

@protocol OS_dispatch_queue;
@class UITextInputTraits, UIKBScreenTraits, UIKBTextEditingTraits, NSMutableArray, NSUUID, UIKeyboardTaskQueue, _UIScreenEdgePanRecognizer, _UIKBRTRecognizer, _UIKBRTFingerDetection, UIKBCadenceMonitor, _UIKBRTTouchVelocities, _UIKBRTTouchDrifting, NSMutableDictionary, NSObject, NSMutableSet, NSString;

@interface UIKeyboardLayout : UIView <_UIScreenEdgePanRecognizerDelegate, _UIKBRTRecognizerDelegate, _UIKBRTTouchDriftingDelegate> {

	UITextInputTraits* _inputTraits;
	UIKBScreenTraits* _screenTraits;
	UIKBTextEditingTraits* _textEditingTraits;
	NSMutableArray* _uncommittedTouchUUIDs;
	NSUUID* _activeTouchUUID;
	NSUUID* _shiftKeyTouchUUID;
	unsigned long long _cursorLocation;
	BOOL _disableInteraction;
	UIKeyboardTaskQueue* _taskQueue;
	BOOL hideKeysUnderIndicator;
	BOOL _hasPreferredHeight;
	BOOL _isExecutingDeferredTouchTasks;
	BOOL _listeningForWillChange;
	BOOL _listeningForDidChange;
	double _preferredHeight;
	_UIScreenEdgePanRecognizer* _screenEdgePanRecognizer;
	/*^block*/id _deferredTouchDownTask;
	/*^block*/id _deferredTouchMovedTask;
	_UIKBRTRecognizer* _handRestRecognizer;
	_UIKBRTFingerDetection* _fingerDetection;
	UIKBCadenceMonitor* _cadenceMonitor;
	_UIKBRTTouchVelocities* _touchVelocities;
	double lastTouchUpTime;
	double _timestampOfLastTouchesEnded;
	/*^block*/id _deferredTaskForActiveTouch;
	_UIKBRTTouchDrifting* _touchDrifting;
	NSMutableDictionary* _deferredTouchTaskLists;
	NSObject*<OS_dispatch_queue> _deferredTouchTaskListsQueue;
	NSMutableSet* _touchIgnoredUUIDSet;

}

@property (nonatomic,retain) _UIScreenEdgePanRecognizer * screenEdgePanRecognizer;                  //@synthesize screenEdgePanRecognizer=_screenEdgePanRecognizer - In the implementation block
@property (nonatomic,retain) _UIKBRTRecognizer * handRestRecognizer;                                //@synthesize handRestRecognizer=_handRestRecognizer - In the implementation block
@property (nonatomic,retain) _UIKBRTFingerDetection * fingerDetection;                              //@synthesize fingerDetection=_fingerDetection - In the implementation block
@property (nonatomic,retain) _UIKBRTTouchDrifting * touchDrifting;                                  //@synthesize touchDrifting=_touchDrifting - In the implementation block
@property (nonatomic,retain) UIKBCadenceMonitor * cadenceMonitor;                                   //@synthesize cadenceMonitor=_cadenceMonitor - In the implementation block
@property (nonatomic,retain) _UIKBRTTouchVelocities * touchVelocities;                              //@synthesize touchVelocities=_touchVelocities - In the implementation block
@property (nonatomic,copy) id deferredTouchDownTask;                                                //@synthesize deferredTouchDownTask=_deferredTouchDownTask - In the implementation block
@property (nonatomic,copy) id deferredTouchMovedTask;                                               //@synthesize deferredTouchMovedTask=_deferredTouchMovedTask - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deferredTouchTaskLists;                          //@synthesize deferredTouchTaskLists=_deferredTouchTaskLists - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> deferredTouchTaskListsQueue;              //@synthesize deferredTouchTaskListsQueue=_deferredTouchTaskListsQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * touchIgnoredUUIDSet;                                    //@synthesize touchIgnoredUUIDSet=_touchIgnoredUUIDSet - In the implementation block
@property (assign,nonatomic) BOOL isExecutingDeferredTouchTasks;                                    //@synthesize isExecutingDeferredTouchTasks=_isExecutingDeferredTouchTasks - In the implementation block
@property (assign,nonatomic) double lastTouchUpTime; 
@property (assign,nonatomic) BOOL listeningForWillChange;                                           //@synthesize listeningForWillChange=_listeningForWillChange - In the implementation block
@property (assign,nonatomic) BOOL listeningForDidChange;                                            //@synthesize listeningForDidChange=_listeningForDidChange - In the implementation block
@property (nonatomic,retain) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,retain) NSUUID * activeTouchUUID;                                              //@synthesize activeTouchUUID=_activeTouchUUID - In the implementation block
@property (nonatomic,retain) NSUUID * shiftKeyTouchUUID;                                            //@synthesize shiftKeyTouchUUID=_shiftKeyTouchUUID - In the implementation block
@property (nonatomic,readonly) long long orientation; 
@property (nonatomic,readonly) long long idiom; 
@property (assign,nonatomic) BOOL hideKeysUnderIndicator; 
@property (nonatomic,retain) NSString * layoutTag; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded;                                  //@synthesize timestampOfLastTouchesEnded=_timestampOfLastTouchesEnded - In the implementation block
@property (nonatomic,copy) id deferredTaskForActiveTouch;                                           //@synthesize deferredTaskForActiveTouch=_deferredTaskForActiveTouch - In the implementation block
@property (assign,nonatomic) unsigned long long cursorLocation;                                     //@synthesize cursorLocation=_cursorLocation - In the implementation block
@property (assign,nonatomic) BOOL disableInteraction;                                               //@synthesize disableInteraction=_disableInteraction - In the implementation block
@property (assign,nonatomic) double preferredHeight;                                                //@synthesize preferredHeight=_preferredHeight - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredHeight;                                             //@synthesize hasPreferredHeight=_hasPreferredHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3 ;
+(BOOL)_showSmallDisplayKeyplane;
+(Class)_subclassForScreenTraits:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShift:(BOOL)arg1 ;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setRenderConfig:(id)arg1 ;
-(long long)orientation;
-(void)willMoveToWindow:(id)arg1 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(id)candidateList;
-(unsigned long long)_uikbrtTouchDrifting:(id)arg1 fingerIDFortouchIdentifier:(id)arg2 ;
-(id)_uikbrtTouchDrifting:(id)arg1 touchIdentifiersForFingerID:(unsigned long long)arg2 ;
-(void)_uikbrtTouchDriftingStateChanged:(id)arg1 ;
-(CGPoint)_uikbrtTouchDrifting:(id)arg1 touchCenterForFingerID:(unsigned long long)arg2 ;
-(CGRect)dragGestureRectInView:(id)arg1 ;
-(void)resetTouchProcessingForKeyboardChange;
-(void)clearUnusedObjects:(BOOL)arg1 ;
-(void)clearTransientState;
-(void)setCursorLocation:(unsigned long long)arg1 ;
-(void)updateTouchProcessingForKeyboardChange;
-(long long)idiom;
-(BOOL)isAlphabeticPlane;
-(BOOL)hasCandidateKeys;
-(BOOL)hasAccentKey;
-(BOOL)canMultitap;
-(BOOL)diacriticForwardCompose;
-(NSString *)layoutTag;
-(void)setLayoutTag:(NSString *)arg1 ;
-(id)currentKeyplane;
-(void)deactivateActiveKeys;
-(CGRect)frameForKeylayoutName:(id)arg1 ;
-(UIKeyboardTaskQueue *)taskQueue;
-(BOOL)shouldShowIndicator;
-(id)activationIndicatorView;
-(void)setHideKeysUnderIndicator:(BOOL)arg1 ;
-(BOOL)keyplaneContainsEmojiKey;
-(void)acceptRecentInputIfNecessary;
-(NSUUID *)activeTouchUUID;
-(void)setDeferredTaskForActiveTouch:(id)arg1 ;
-(BOOL)performReturnAction;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(void)setAutoshift:(BOOL)arg1 ;
-(void)setTaskQueue:(UIKeyboardTaskQueue *)arg1 ;
-(BOOL)shouldFadeFromLayout;
-(BOOL)shouldFadeToLayout;
-(void)fadeWithInvocation:(id)arg1 ;
-(double)timestampOfLastTouchesEnded;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(void)setTwoFingerTapTimestamp:(double)arg1 ;
-(void)setLabel:(id)arg1 forKey:(id)arg2 ;
-(void)restoreDefaultsForKey:(id)arg1 ;
-(unsigned long long)textEditingKeyMask;
-(void)setTextEditingTraits:(id)arg1 ;
-(void)triggerSpaceKeyplaneSwitchIfNecessary;
-(void)didClearInput;
-(void)restoreDefaultsForAllKeys;
-(void)updateBackgroundCorners;
-(void)setTarget:(id)arg1 forKey:(id)arg2 ;
-(void)setAction:(SEL)arg1 forKey:(id)arg2 ;
-(void)setLongPressAction:(SEL)arg1 forKey:(id)arg2 ;
-(BOOL)canProduceString:(id)arg1 ;
-(BOOL)canHandleEvent:(id)arg1 ;
-(double)hitBuffer;
-(void)longPressAction;
-(void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(BOOL)usesAutoShift;
-(BOOL)ignoresShiftState;
-(BOOL)isShiftKeyPlaneChooser;
-(BOOL)isShiftKeyBeingHeld;
-(void)updateLocalizedKeys:(BOOL)arg1 ;
-(void)setRecentInputs:(id)arg1 ;
-(unsigned long long)cursorLocation;
-(BOOL)disableInteraction;
-(void)setDisableInteraction:(BOOL)arg1 ;
-(void)setPreferredHeight:(double)arg1 ;
-(void)setPasscodeOutlineAlpha:(double)arg1 ;
-(void)setDisableTouchInput:(BOOL)arg1 ;
-(id)baseKeyForString:(id)arg1 ;
-(id)keyplaneForKey:(id)arg1 ;
-(id)keyplaneNamed:(id)arg1 ;
-(void)changeToKeyplane:(id)arg1 ;
-(id)simulateTouch:(CGPoint)arg1 ;
-(id)simulateTouchForCharacter:(id)arg1 errorVector:(CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4 ;
-(void)wipeGestureRecognized:(id)arg1 ;
-(void)addWipeRecognizer;
-(void)setActiveTouchUUID:(NSUUID *)arg1 ;
-(void)setShiftKeyTouchUUID:(NSUUID *)arg1 ;
-(SEL)handlerForNotification:(id)arg1 ;
-(_UIKBRTRecognizer *)handRestRecognizer;
-(UIKBCadenceMonitor *)cadenceMonitor;
-(void)touchDown:(id)arg1 executionContext:(id)arg2 ;
-(/*^block*/id)touchDownTaskForTouchState:(id)arg1 ;
-(BOOL)_shouldAllowKeyboardHandlingIfNecessaryForTouch:(id)arg1 phase:(long long)arg2 withTouchState:(id)arg3 task:(/*^block*/id)arg4 ;
-(void)touchDragged:(id)arg1 executionContext:(id)arg2 ;
-(/*^block*/id)touchDraggedTaskForTouchState:(id)arg1 ;
-(BOOL)canForceTouchUUIDCommit:(id)arg1 inWindow:(id)arg2 ;
-(void)commitTouchUUIDs:(id)arg1 ;
-(void)touchUp:(id)arg1 ;
-(_UIScreenEdgePanRecognizer *)screenEdgePanRecognizer;
-(void)didFinishScreenGestureRecognition;
-(void)setDeferredTouchDownTask:(id)arg1 ;
-(void)setDeferredTouchMovedTask:(id)arg1 ;
-(void)clearShiftIfNecessaryForEndedTouchState:(id)arg1 ;
-(void)didCommitTouchState:(id)arg1 ;
-(void)touchUp:(id)arg1 executionContext:(id)arg2 ;
-(/*^block*/id)touchUpTaskForTouchState:(id)arg1 ;
-(void)setLastTouchUpTime:(double)arg1 ;
-(id)deferredTaskForActiveTouch;
-(void)touchCancelled:(id)arg1 forResting:(BOOL)arg2 executionContext:(id)arg3 ;
-(/*^block*/id)touchCancelledTaskForTouchState:(id)arg1 forResting:(BOOL)arg2 ;
-(void)touchChanged:(id)arg1 executionContext:(id)arg2 ;
-(/*^block*/id)touchChangedTaskForTouchState:(id)arg1 ;
-(BOOL)_shouldAllowKeyboardHandlingForTouchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)touchUUIDsToCommitBeforeTouchUUID:(id)arg1 ;
-(void)touchDown:(id)arg1 ;
-(BOOL)_shouldAllowKeyboardHandlingForTouchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchDragged:(id)arg1 ;
-(BOOL)_shouldAllowKeyboardHandlingForTouchesEndedOrCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_removeTouchesFromProcessing:(id)arg1 ;
-(void)_touchEndedProcessingForTouches:(id)arg1 ;
-(void)touchCancelled:(id)arg1 ;
-(void)touchChanged:(id)arg1 ;
-(void)handRestRecognizerNotifyRestForBegin:(BOOL)arg1 location:(CGPoint)arg2 timestamp:(double)arg3 pathIndex:(int)arg4 touchUUID:(id)arg5 context:(id)arg6 ;
-(void)forceUpdatesForCommittedTouch;
-(void)commitTouches:(id)arg1 executionContext:(id)arg2 ;
-(void)setIsExecutingDeferredTouchTasks:(BOOL)arg1 ;
-(BOOL)queryShouldNeverIgnoreTouchStateWithIdentifier:(id)arg1 touchState:(id)arg2 startPoint:(CGPoint)arg3 forRestingState:(unsigned long long)arg4 ;
-(void)_enumerateDeferredTouchUUIDs:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)recognizerBlockUntilTaskQueueReadyForceUsingDeferredTask:(BOOL)arg1 ;
-(BOOL)handRestRecognizerShouldNeverIgnoreTouchState:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 forRestingState:(unsigned long long)arg4 otherRestedTouchLocations:(id)arg5 ;
-(BOOL)_handRestRecognizerCancelShouldBeEnd;
-(BOOL)isExecutingDeferredTouchTasks;
-(_UIKBRTFingerDetection *)fingerDetection;
-(_UIKBRTTouchDrifting *)touchDrifting;
-(void)_executeDeferredTouchTasks;
-(BOOL)_canAddTouchesToScreenGestureRecognizer:(id)arg1 ;
-(void)_addTouchToScreenEdgePanRecognizer:(id)arg1 ;
-(void)assertSavedLocation:(CGPoint)arg1 onTouch:(id)arg2 inWindow:(id)arg3 resetPrevious:(BOOL)arg4 ;
-(void)_notifyLayoutOfGesturePosition:(CGPoint)arg1 relativeToEdge:(unsigned long long)arg2 ;
-(CGSize)handRestRecognizerStandardKeyPixelSize;
-(CGPoint)getCenterForKeyUnderLeftIndexFinger;
-(CGPoint)getCenterForKeyUnderRightIndexFinger;
-(id)getHorizontalOffsetFromHomeRowForRowRelativeToHomeRow:(long long)arg1 ;
-(unsigned long long)targetEdgesForScreenGestureRecognition;
-(void)setScreenEdgePanRecognizer:(_UIScreenEdgePanRecognizer *)arg1 ;
-(unsigned char)getHandRestRecognizerState;
-(void)setCadenceMonitor:(UIKBCadenceMonitor *)arg1 ;
-(void)setTouchDrifting:(_UIKBRTTouchDrifting *)arg1 ;
-(void)setFingerDetection:(_UIKBRTFingerDetection *)arg1 ;
-(void)setHandRestRecognizer:(_UIKBRTRecognizer *)arg1 ;
-(_UIKBRTTouchVelocities *)touchVelocities;
-(void)setTouchVelocities:(_UIKBRTTouchVelocities *)arg1 ;
-(void)_resetFingerDetectionFromLayout;
-(void)resetHRRLayoutState;
-(double)lastTouchUpTime;
-(void)didRecognizeGestureOnEdge:(unsigned long long)arg1 withDistance:(double)arg2 ;
-(void)setNeedsVirtualDriftUpdate;
-(void)screenEdgePanRecognizerStateDidChange:(id)arg1 ;
-(void)recognizer:(id)arg1 beginTouchDownForTouchWithId:(id)arg2 atPoint:(CGPoint)arg3 forBeginState:(unsigned long long)arg4 whenStateReady:(/*^block*/id)arg5 ;
-(void)recognizer:(id)arg1 restartTouchDownForTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5 whenStateReady:(/*^block*/id)arg6 ;
-(void)recognizer:(id)arg1 shouldContinueTrackingTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5 forContinueState:(unsigned long long)arg6 whenStateReady:(/*^block*/id)arg7 ;
-(void)recognizer:(id)arg1 willIgnoreTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5 whenReady:(/*^block*/id)arg6 ;
-(void)recognizer:(id)arg1 continueTrackingIgnoredTouchWithId:(id)arg2 currentPoint:(CGPoint)arg3 whenReady:(/*^block*/id)arg4 ;
-(void)recognizer:(id)arg1 releaseTouchToLayoutWithId:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4 whenReady:(/*^block*/id)arg5 ;
-(void)recognizer:(id)arg1 cancelTouchOnLayoutWithId:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4 whenReady:(/*^block*/id)arg5 ;
-(BOOL)performSpaceAction;
-(void)deactivateActiveKeysClearingTouchInfo:(BOOL)arg1 clearingDimming:(BOOL)arg2 ;
-(void)touchCancelled:(id)arg1 executionContext:(id)arg2 ;
-(void)reloadKeyboardGestureRecognition;
-(void)updateTouchProcessingForKeyplaneChange;
-(/*^block*/id)handRestRecognizerSilenceNextTouchDown;
-(void)_updateTouchState:(id)arg1 errorVector:(CGPoint)arg2 rowOffsetFromHomeRow:(long long)arg3 ;
-(void)_ignoreTouchState:(id)arg1 ;
-(BOOL)_hasRelatedTouchesForTouchState:(id)arg1 ;
-(BOOL)isReachableDevice;
-(BOOL)supportsVirtualDrift;
-(CGPoint)leftVirtualDriftOffset;
-(CGPoint)rightVirtualDriftOffset;
-(unsigned long long)fingerIDForTouchUUID:(id)arg1 ;
-(double)flickDistance;
-(void)willBeginIndirectSelectionGesture;
-(void)didEndIndirectSelectionGesture;
-(void)cancelTouchesForTwoFingerTapGesture:(id)arg1 ;
-(BOOL)keyplaneContainsDismissKey;
-(BOOL)isEmojiKeyplane;
-(BOOL)supportsEmoji;
-(NSUUID *)shiftKeyTouchUUID;
-(double)preferredHeight;
-(BOOL)hideKeysUnderIndicator;
-(id)deferredTouchDownTask;
-(id)deferredTouchMovedTask;
-(BOOL)hasPreferredHeight;
-(NSMutableDictionary *)deferredTouchTaskLists;
-(void)setDeferredTouchTaskLists:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)deferredTouchTaskListsQueue;
-(void)setDeferredTouchTaskListsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableSet *)touchIgnoredUUIDSet;
-(void)setTouchIgnoredUUIDSet:(NSMutableSet *)arg1 ;
-(BOOL)listeningForWillChange;
-(void)setListeningForWillChange:(BOOL)arg1 ;
-(BOOL)listeningForDidChange;
-(void)setListeningForDidChange:(BOOL)arg1 ;
@end

