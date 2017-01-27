/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, MDRenderTarget;
#import <VectorKit/VectorKit-Structs.h>
@class VKWorld, NSMutableArray, NSObject, VKSharedResources, NSArray;

@interface VKModelObject : NSObject {

	VKWorld* _world;
	VKModelObject* _supermodel;
	NSMutableArray* _submodels;
	BOOL _active;
	unsigned _needsLayout;
	unsigned _needsDisplay;
	NSObject*<OS_dispatch_semaphore> _drawReady;
	map<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> >, std::__1::less<md::CommandBufferId>, std::__1::allocator<std::__1::pair<const md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > >* _commandBuffers;
	CommandBufferIdSet* _supportedPassIds;
	VKSharedResources* _sharedResources;
	id<MDRenderTarget> _renderTarget;

}

@property (assign,nonatomic) VKWorld * world;                                                                   //@synthesize world=_world - In the implementation block
@property (nonatomic,readonly) VKSharedResources * sharedResources;                                             //@synthesize sharedResources=_sharedResources - In the implementation block
@property (nonatomic,readonly) id<MDRenderTarget> renderTarget;                                                 //@synthesize renderTarget=_renderTarget - In the implementation block
@property (nonatomic,readonly) NSArray * submodels;                                                             //@synthesize submodels=_submodels - In the implementation block
@property (nonatomic,readonly) VKModelObject * supermodel;                                                      //@synthesize supermodel=_supermodel - In the implementation block
@property (nonatomic,readonly) shared_ptr<gss::StylesheetManager<gss::PropertyID> >* styleManager; 
@property (assign,getter=isActive,nonatomic) BOOL active;                                                       //@synthesize active=_active - In the implementation block
-(void)setNeedsLayout;
-(void)setNeedsDisplay;
-(void)dealloc;
-(BOOL)isActive;
-(void)reset;
-(void)setActive:(BOOL)arg1 ;
-(void)didReceiveMemoryWarning:(BOOL)arg1 ;
-(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)styleManager;
-(void)layoutScene:(id)arg1 withContext:(LayoutContext*)arg2 ;
-(void)addSubmodel:(id)arg1 ;
-(VKSharedResources *)sharedResources;
-(void)setWorld:(VKWorld *)arg1 ;
-(void)setSupermodel:(VKModelObject *)arg1 ;
-(BOOL)shouldLayoutWithoutStyleManager;
-(id)initWithTarget:(id)arg1 sharedResources:(id)arg2 ;
-(void)_removeSubmodel:(id)arg1 ;
-(BOOL)hasSubmodel:(id)arg1 ;
-(void)removeSubmodel:(id)arg1 ;
-(void)removeFromSupermodel;
-(void)didRemoveFromSuperModel;
-(const CommandBufferIdSet*)supportedRenderPasses;
-(void)clearCommandBuffers;
-(void)clearLockedCommandBuffers;
-(void)willMoveToSupermodel:(id)arg1 ;
-(void)didMoveToSupermodel;
-(void)gglLayoutSceneIfNeeded:(id)arg1 withContext:(LayoutContext*)arg2 renderQueue:(RenderQueue*)arg3 dispatchQueue:(id)arg4 ;
-(void)setSupportedPasses:(const CommandBufferIdSet*)arg1 ;
-(void)lockCommandBuffers:(RenderQueue*)arg1 ;
-(void)unLockCommandBuffers:(RenderQueue*)arg1 ;
-(void)gglLayoutScene:(id)arg1 withContext:(LayoutContext*)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)gglLayoutSceneWithoutStyleManager:(id)arg1 withContext:(LayoutContext*)arg2 renderQueue:(RenderQueue*)arg3 ;
-(VKWorld *)world;
-(NSArray *)submodels;
-(VKModelObject *)supermodel;
-(id<MDRenderTarget>)renderTarget;
-(void)runAnimation:(id)arg1 ;
@end
