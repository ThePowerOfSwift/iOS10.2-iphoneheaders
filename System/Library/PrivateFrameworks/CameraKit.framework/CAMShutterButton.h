/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKShutterButton.h>
#import <libobjc.A.dylib/CKActionMenuItemView.h>

@class NSString;

@interface CAMShutterButton : CMKShutterButton <CKActionMenuItemView>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long mode; 
+(id)actionMenuShutterButton;
+(id)shutterButtonWithSpec:(CAMShutterButtonSpec)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)mode;
-(void)setMode:(long long)arg1 animated:(BOOL)arg2 ;
@end

