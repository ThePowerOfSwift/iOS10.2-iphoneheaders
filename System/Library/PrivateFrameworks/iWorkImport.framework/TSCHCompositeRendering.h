/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHCompositeRendering <NSObject>
@optional
-(void)willBeginTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;
-(void)didBeginTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;
-(void)willEndTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;
-(void)didEndTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;

@required
-(id)transparencyLayers;
-(void)drawIntoLayer:(int)arg1 inContext:(CGContextRef)arg2 visible:(CGRect)arg3;
-(BOOL)needsAnySeparateLayers;

@end

