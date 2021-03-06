/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TPDialerKeypadProtocol <NSObject>
@optional
-(void)performTapActionDownForHighlightedKey;
-(void)performTapActionEndForHighlightedKey;
-(void)performTapActionCancelForHighlightedKey;
-(void)replaceButton:(id)arg1 atIndex:(unsigned long long)arg2;

@required
-(void)setDelegate:(id)arg1;
-(void)setPlaysSounds:(BOOL)arg1;
-(void)highlightKeyAtIndex:(long long)arg1;
-(long long)indexForHighlightedKey;

@end

