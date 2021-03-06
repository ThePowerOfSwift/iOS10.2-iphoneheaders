/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKChatInputControllerDelegate <NSObject>
@required
-(id)viewControllerForChatInputModalPresentation;
-(id)viewForDragAndChatInputDropTarget;
-(void)chatInputControllerRequestInputViewFocusFromFullscreen:(id)arg1;
-(void)sendSticker:(id)arg1;
-(void)sendSticker:(id)arg1 withDragTarget:(id)arg2;
-(id)dragControllerTranscriptDelegate;
-(void)chatInputSentComposition:(id)arg1;
-(void)chatInputDidUpdateInputViewShowingBrowser:(BOOL)arg1 entryFieldCollapsed:(BOOL)arg2 animated:(BOOL)arg3;
-(void)chatInputDidUpdateWithNewInputViewController:(id)arg1;
-(void)setLocalUserIsComposing:(BOOL)arg1 withPluginBundleID:(id)arg2 typingIndicatorData:(id)arg3;
-(void)chatInputDidSelectPhotoPicker;
-(void)chatInputDidChangeSize;
-(void)chatInputControllerDidShowHandwriting:(id)arg1;
-(void)chatInputControllerWillHideHandwriting:(id)arg1;
-(void)chatInputControllerWillPresentModalBrowserViewController:(id)arg1;
-(void)chatInputControllerDidPresentModalBrowserViewController:(id)arg1;
-(void)chatInputControllerWillDismissModalBrowserViewController:(id)arg1;
-(void)chatInputControllerDidDismissModalBrowserViewController:(id)arg1;
-(void)chatInputControllerWillTransitionExpanded:(id)arg1;
-(void)chatInputControllerDidTransitionExpanded:(id)arg1;
-(void)chatInputControllerWillTransitionCollapsed:(id)arg1;
-(void)chatInputControllerDidTransitionCollapsed:(id)arg1;

@end

