/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@protocol TSCH3DGLResolveFramebuffer;
@class TSCH3DGLFBO;

@interface TSCH3DGLFramebufferMultisample : NSObject <TSCHUnretainedParent> {

	id<TSCH3DGLResolveFramebuffer> mParent;
	FramebufferAttributes mAttributes;
	TSCH3DGLFBO* mMultisampleFBO;
	BOOL mResolved;
	BOOL mMultisampleDisabled;

}

@property (nonatomic,readonly) BOOL usingMultisample; 
@property (nonatomic,readonly) BOOL resolved; 
@property (nonatomic,readonly) FramebufferAttributes attributes; 
+(id)multisampleWithParent:(id)arg1 framebufferAttributes:(const FramebufferAttributes*)arg2 ;
-(void)clearParent;
-(BOOL)validForSession:(id)arg1 ;
-(BOOL)bindInSession:(id)arg1 ;
-(BOOL)activateInsideSession:(id)arg1 ;
-(void)disableSamplingInSession:(id)arg1 ;
-(id)initWithParent:(id)arg1 framebufferAttributes:(const FramebufferAttributes*)arg2 ;
-(BOOL)p_supportsMultisample;
-(id)multisampleFBOResource;
-(FramebufferAttributes)p_clampedAttributes;
-(SessionLoadResourceResult)p_loadFramebufferInSession:(id)arg1 ;
-(BOOL)usingMultisample;
-(BOOL)p_createMultisampleFBOOnDemandInsideSession:(id)arg1 returningResolveFramebufferActivated:(BOOL*)arg2 ;
-(void)resolveInSession:(id)arg1 ;
-(BOOL)resolved;
-(void)dealloc;
-(FramebufferAttributes)attributes;
@end

