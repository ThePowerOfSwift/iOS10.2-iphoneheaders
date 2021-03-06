/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicContextualActionsHeaderLockupViewDelegate.h>

@class MusicEntityProviderDownloadInformationController, MusicEntityViewHorizontalLockupContentDescriptor, MusicContextualAlertAction, MusicContextualActionsHeaderLockupView, NSArray, MusicEntityValueContext, NSString;

@interface MusicContextualActionsHeaderViewController : UIViewController <MusicContextualActionsHeaderLockupViewDelegate> {

	MusicEntityProviderDownloadInformationController* _containerDownloadInformationController;
	MusicEntityViewHorizontalLockupContentDescriptor* _contentDescriptor;
	MusicContextualAlertAction* _pendingAlertAction;
	MusicContextualActionsHeaderLockupView* _lockupView;
	CGSize _previousBoundsSize;
	NSArray* _contextualActions;
	/*^block*/id _dismissRequestHandler;
	MusicEntityValueContext* _entityValueContext;
	/*^block*/id _selectionHandler;

}

@property (nonatomic,copy,readonly) NSArray * contextualActions;                          //@synthesize contextualActions=_contextualActions - In the implementation block
@property (nonatomic,copy) id dismissRequestHandler;                                      //@synthesize dismissRequestHandler=_dismissRequestHandler - In the implementation block
@property (nonatomic,readonly) MusicEntityValueContext * entityValueContext;              //@synthesize entityValueContext=_entityValueContext - In the implementation block
@property (nonatomic,copy) id selectionHandler;                                           //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)_newContentDescriptorForEntityValueContext:(id)arg1 ;
-(void)_updatePreferredContentSizeForced:(BOOL)arg1 ;
-(void)_getEntityValueProvider:(id*)arg1 identifierCollection:(id*)arg2 ;
-(id)_shareAlertAction;
-(id)_contentTasteAlertAction;
-(id)_addToLibraryAlertAction;
-(id)_keepLocalAlertAction;
-(id)_removeFromLibraryAlertAction;
-(void)_requestDismissalWithDelay:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_libraryUpdateAlertActionPassingTest:(/*^block*/id)arg1 ;
-(id)_actionsWithClass:(Class)arg1 ;
-(void)contextualActionsHeaderLockupViewDidSelectDownloadButton:(id)arg1 ;
-(void)contextualActionsHeaderLockupViewDidSelectLikeButton:(id)arg1 ;
-(void)contextualActionsHeaderLockupViewDidSelectShareButton:(id)arg1 ;
-(void)contextualActionsHeaderLockupViewWasSelected:(id)arg1 ;
-(id)initWithEntityValueContext:(id)arg1 contextualActions:(id)arg2 ;
-(void)setSelectionHandler:(id)arg1 ;
-(NSArray *)contextualActions;
-(id)dismissRequestHandler;
-(void)setDismissRequestHandler:(id)arg1 ;
-(MusicEntityValueContext *)entityValueContext;
-(id)selectionHandler;
@end

