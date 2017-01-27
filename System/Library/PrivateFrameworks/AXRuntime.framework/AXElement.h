/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <AXRuntime/AXGroupable.h>

@class AXElementGroup, AXUIElement, NSArray, NSString, NSURL, NSDictionary;

@interface AXElement : NSObject <AXGroupable> {

	BOOL _representsScannerGroup;
	AXUIElement* _uiElement;
	AXElementGroup* _parentGroup;
	AXElement* _cachedRemoteParent;
	AXElement* _cachedRemoteParentForContextID;
	CGPathRef _cachedPath;
	CGRect _cachedFrame;
	CGRect _cachedVisibleFrame;

}

@property (nonatomic,retain) AXUIElement * uiElement;                                                            //@synthesize uiElement=_uiElement - In the implementation block
@property (nonatomic,retain) AXElement * cachedRemoteParent;                                                     //@synthesize cachedRemoteParent=_cachedRemoteParent - In the implementation block
@property (nonatomic,retain) AXElement * cachedRemoteParentForContextID;                                         //@synthesize cachedRemoteParentForContextID=_cachedRemoteParentForContextID - In the implementation block
@property (nonatomic,retain) CGPathRef cachedPath;                                                               //@synthesize cachedPath=_cachedPath - In the implementation block
@property (assign,nonatomic) CGRect cachedFrame;                                                                 //@synthesize cachedFrame=_cachedFrame - In the implementation block
@property (assign,nonatomic) CGRect cachedVisibleFrame;                                                          //@synthesize cachedVisibleFrame=_cachedVisibleFrame - In the implementation block
@property (nonatomic,readonly) AXUIElementRef elementRef; 
@property (nonatomic,readonly) BOOL isSystemWideElement; 
@property (assign,getter=isPassivelyListeningForEvents,nonatomic) BOOL passivelyListeningForEvents; 
@property (nonatomic,readonly) AXElement * currentApplication; 
@property (nonatomic,readonly) NSArray * currentApplications; 
@property (nonatomic,readonly) NSArray * currentApplicationsIgnoringSiri; 
@property (nonatomic,readonly) AXElement * springBoardApplication; 
@property (nonatomic,readonly) AXElement * systemApplication; 
@property (nonatomic,readonly) AXElement * accessibilityUIServerApplication; 
@property (nonatomic,readonly) BOOL isScreenLocked; 
@property (nonatomic,readonly) int applicationOrientation; 
@property (nonatomic,readonly) NSArray * visibleElements; 
@property (nonatomic,readonly) AXElement * firstResponder; 
@property (nonatomic,readonly) AXElement * nativeFocusElement; 
@property (nonatomic,readonly) AXElement * nativeFocusPreferredElement; 
@property (nonatomic,readonly) AXElement * firstElementInApplication; 
@property (nonatomic,readonly) AXElement * firstElementInApplicationForFocus; 
@property (nonatomic,readonly) NSString * bundleId; 
@property (nonatomic,readonly) BOOL isSpringBoard; 
@property (nonatomic,readonly) BOOL isSystemApplication; 
@property (nonatomic,readonly) BOOL isAXUIServer; 
@property (nonatomic,readonly) NSArray * explorerElements; 
@property (nonatomic,readonly) NSArray * nativeFocusableElements; 
@property (nonatomic,readonly) NSArray * elementsWithSemanticContext; 
@property (nonatomic,readonly) NSArray * siriContentNativeFocusableElements; 
@property (nonatomic,readonly) NSArray * siriContentElementsWithSemanticContext; 
@property (nonatomic,readonly) AXElement * application; 
@property (nonatomic,readonly) BOOL isAccessibleElement; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * hint; 
@property (assign,nonatomic) NSString * value; 
@property (nonatomic,readonly) CGPathRef path; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) CGRect visibleFrame; 
@property (nonatomic,readonly) CGRect textCursorFrame; 
@property (nonatomic,readonly) CGPoint centerPoint; 
@property (nonatomic,readonly) CGPoint visiblePoint; 
@property (nonatomic,readonly) CGRect focusableFrameForZoom; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) AXElement * touchContainer; 
@property (nonatomic,readonly) BOOL isKeyboardKey; 
@property (nonatomic,readonly) BOOL isTouchContainer; 
@property (nonatomic,readonly) BOOL hasWebContent; 
@property (nonatomic,readonly) BOOL hasTextEntry; 
@property (nonatomic,readonly) BOOL isMathEquation; 
@property (nonatomic,readonly) unsigned windowContextId; 
@property (nonatomic,readonly) NSArray * variantKeys; 
@property (nonatomic,readonly) BOOL hasVariantKeys; 
@property (nonatomic,readonly) NSArray * textOperations; 
@property (nonatomic,readonly) NSArray * typingCandidates; 
@property (assign,nonatomic) BOOL assistiveTechFocused; 
@property (nonatomic,readonly) NSArray * customActions; 
@property (nonatomic,readonly) BOOL isAccessibilityOpaqueElementProvider; 
@property (nonatomic,readonly) NSDictionary * semanticContext; 
@property (nonatomic,readonly) AXElement * remoteParent; 
@property (nonatomic,readonly) int scanningBehaviorTraits; 
@property (assign,nonatomic) NSRange selectedTextRange; 
@property (getter=isNativeFocused,nonatomic,readonly) BOOL nativeFocus; 
@property (nonatomic,readonly) BOOL canPerformEscape; 
@property (nonatomic,readonly) BOOL canPerformZoom; 
@property (nonatomic,readonly) NSArray * supportedGestures; 
@property (nonatomic,readonly) BOOL isScannerElement; 
@property (nonatomic,readonly) BOOL representsScannerGroup;                                                      //@synthesize representsScannerGroup=_representsScannerGroup - In the implementation block
@property (nonatomic,readonly) int scannerActivateBehavior; 
@property (nonatomic,retain) AXElement * autoscrollTarget; 
@property (nonatomic,readonly) BOOL isAutoscrolling; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSArray * parent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) AXElementGroup * parentGroup;                                                       //@synthesize parentGroup=_parentGroup - In the implementation block
+(id)elementWithUIElement:(id)arg1 ;
+(id)systemWideElement;
+(id)elementWithAXUIElement:(AXUIElementRef)arg1 ;
+(id)elementsWithUIElements:(id)arg1 ;
+(id)primaryApp;
+(void)unregisterNotifications:(id)arg1 ;
+(void)registerNotifications:(id)arg1 withIdentifier:(id)arg2 withHandler:(/*^block*/id)arg3 ;
+(id)elementAtCoordinate:(CGPoint)arg1 withVisualPadding:(BOOL)arg2 ;
-(CGPoint)centerPoint;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(void)dealloc;
-(CGRect)frame;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)identifier;
-(NSURL *)url;
-(AXElement *)firstResponder;
-(BOOL)isValid;
-(CGPathRef)path;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSRange)selectedTextRange;
-(void)setSelectedTextRange:(NSRange)arg1 ;
-(void)_updateLabel;
-(NSString *)label;
-(BOOL)isVisible;
-(unsigned long long)traits;
-(CGRect)visibleFrame;
-(AXElement *)application;
-(BOOL)isGroup;
-(BOOL)press;
-(NSString *)bundleId;
-(NSString *)language;
-(BOOL)longPress;
-(AXElementGroup *)parentGroup;
-(void)setParentGroup:(AXElementGroup *)arg1 ;
-(BOOL)performAction:(int)arg1 ;
-(NSArray *)visibleElements;
-(id)previousElementsWithCount:(unsigned long long)arg1 ;
-(id)nextElementsWithCount:(unsigned long long)arg1 ;
-(void)updateCache:(int)arg1 ;
-(id)initWithAXUIElement:(AXUIElementRef)arg1 ;
-(id)initWithUIElement:(id)arg1 ;
-(AXElement *)systemApplication;
-(NSArray *)currentApplications;
-(AXUIElement *)uiElement;
-(void)setCachedVisibleFrame:(CGRect)arg1 ;
-(void)setCachedFrame:(CGRect)arg1 ;
-(id)_elementForAttribute:(int)arg1 shouldUpdateCache:(BOOL)arg2 shouldFetchAttributes:(BOOL)arg3 ;
-(BOOL)isSystemWideElement;
-(id)_axElementsForAXUIElements:(id)arg1 ;
-(id)elementForAttribute:(int)arg1 ;
-(unsigned)windowContextId;
-(CGPathRef)convertPath:(CGPathRef)arg1 fromContextId:(unsigned)arg2 ;
-(CGRect)cachedFrame;
-(CGRect)convertRect:(CGRect)arg1 fromContextId:(unsigned)arg2 ;
-(CGRect)cachedVisibleFrame;
-(id)containerTypes;
-(BOOL)hasAllTraits:(unsigned long long)arg1 ;
-(BOOL)hasAnyTraits:(unsigned long long)arg1 ;
-(AXElement *)touchContainer;
-(AXElement *)remoteParent;
-(NSArray *)customActions;
-(AXElement *)cachedRemoteParent;
-(void)setCachedRemoteParent:(AXElement *)arg1 ;
-(AXElement *)cachedRemoteParentForContextID;
-(void)setCachedRemoteParentForContextID:(AXElement *)arg1 ;
-(BOOL)hasWebContent;
-(BOOL)hasTextEntry;
-(BOOL)isKeyboardKey;
-(BOOL)isMathEquation;
-(BOOL)canPerformActivate;
-(BOOL)canPerformSecondaryActivate;
-(BOOL)canPerformEscape;
-(BOOL)canPerformZoom;
-(BOOL)canPerformTrackingDetail;
-(id)_remoteParentForContextID;
-(BOOL)_performActivate;
-(CGPoint)visiblePoint;
-(BOOL)performAction:(int)arg1 withValue:(id)arg2 ;
-(BOOL)_zoomInOrOut:(BOOL)arg1 ;
-(void)insertText:(id)arg1 atPosition:(long long)arg2 ;
-(id)highestAncestorGroup;
-(id)keyboardContainer;
-(id)elementForAttribute:(int)arg1 parameter:(id)arg2 ;
-(id)elementsForAttribute:(int)arg1 ;
-(AXUIElementRef)elementRef;
-(BOOL)isPassivelyListeningForEvents;
-(void)setPassivelyListeningForEvents:(BOOL)arg1 ;
-(AXElement *)currentApplication;
-(NSArray *)currentApplicationsIgnoringSiri;
-(AXElement *)springBoardApplication;
-(AXElement *)accessibilityUIServerApplication;
-(void)sendUserEventOccurred;
-(BOOL)systemPressTVSelectButton;
-(BOOL)systemPressTVPlayPauseButton;
-(BOOL)systemPressTVUpButton;
-(BOOL)systemPressTVDownButton;
-(BOOL)systemPressTVLeftButton;
-(BOOL)systemPressTVRightButton;
-(BOOL)systemPressTVMenuButton;
-(BOOL)systemPressTVHomeButton;
-(BOOL)systemPressTVSiriButton;
-(void)clearCachedFrame:(BOOL)arg1 cachedVisibleFrame:(BOOL)arg2 ;
-(int)applicationOrientation;
-(id)firstResponderForFocus;
-(AXElement *)nativeFocusElement;
-(AXElement *)nativeFocusPreferredElement;
-(AXElement *)firstElementInApplication;
-(AXElement *)firstElementInApplicationForFocus;
-(BOOL)isSpringBoard;
-(BOOL)isAXUIServer;
-(NSArray *)explorerElements;
-(NSArray *)nativeFocusableElements;
-(NSArray *)elementsWithSemanticContext;
-(NSArray *)siriContentNativeFocusableElements;
-(NSArray *)siriContentElementsWithSemanticContext;
-(id)elementsMatchingText:(id)arg1 ;
-(id)remoteApplication;
-(BOOL)isAccessibleElement;
-(id)auditIssuesForOptions:(id)arg1 ;
-(CGRect)textCursorFrame;
-(CGRect)focusableFrameForZoom;
-(BOOL)isTouchContainer;
-(NSArray *)variantKeys;
-(BOOL)hasVariantKeys;
-(NSArray *)textOperations;
-(NSArray *)typingCandidates;
-(void)setAssistiveTechFocused:(BOOL)arg1 ;
-(BOOL)assistiveTechFocused;
-(BOOL)hasOnlyTraits:(unsigned long long)arg1 ;
-(double)distanceToElement:(id)arg1 ;
-(BOOL)isNativeFocused;
-(BOOL)viewHierarchyHasNativeFocus;
-(BOOL)setNativeFocus;
-(NSDictionary *)semanticContext;
-(int)scanningBehaviorTraits;
-(void)scrollToVisible;
-(BOOL)canScrollInAtLeastOneDirection;
-(BOOL)supportsAction:(int)arg1 ;
-(AXUIElementRef)scrollAncestorForScrollAction:(int)arg1 ;
-(NSArray *)supportedGestures;
-(BOOL)zoomIn;
-(BOOL)zoomOut;
-(void)insertTextAtCurrentPosition:(id)arg1 ;
-(BOOL)isScannerElement;
-(int)scannerActivateBehavior;
-(AXElement *)autoscrollTarget;
-(void)setAutoscrollTarget:(AXElement *)arg1 ;
-(void)increaseAutoscrollSpeed;
-(void)decreaseAutoscrollSpeed;
-(BOOL)pressTVSelectButton;
-(BOOL)pressTVBackButton;
-(BOOL)pressTVMenuButton;
-(BOOL)pressTVPlayPauseButton;
-(BOOL)pressTVUpButton;
-(BOOL)pressTVDownButton;
-(BOOL)pressTVLeftButton;
-(BOOL)pressTVRightButton;
-(BOOL)pressTVPlayButton;
-(BOOL)pressTVPauseButton;
-(BOOL)pressTVStopButton;
-(BOOL)pressTVRewindButton;
-(BOOL)pressTVFastForwardButton;
-(BOOL)pressTVNextTrackButton;
-(BOOL)pressTVPreviousTrackButton;
-(BOOL)pressTVSkipForwardsButton;
-(BOOL)pressTVSkipBackwardsButton;
-(BOOL)pressTVDataOnScreenButton;
-(BOOL)pressTVMicButton;
-(void)setUiElement:(AXUIElement *)arg1 ;
-(BOOL)representsScannerGroup;
-(BOOL)isScreenLocked;
-(void)autoscrollInDirection:(int)arg1 ;
-(void)scrollToBottom;
-(NSArray *)children;
-(NSArray *)parent;
-(void)setCachedPath:(CGPathRef)arg1 ;
-(CGPathRef)cachedPath;
-(void)scrollToTop;
-(NSString *)hint;
-(BOOL)isMap;
-(BOOL)isAutoscrolling;
-(void)pauseAutoscrolling;
-(BOOL)isAccessibilityOpaqueElementProvider;
-(BOOL)isSystemApplication;
-(double)distanceToPoint:(CGPoint)arg1 ;
@end
