/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MiroAutoEditDownloadProgressControllerDelegate;
@class MiroAutoEditor, RoundProgressViewController;

@interface MiroAutoEditDownloadProgressController : NSObject {

	BOOL _progressIncludesDownload;
	BOOL _shouldHandleProgressUpdates;
	id<MiroAutoEditDownloadProgressControllerDelegate> _delegate;
	MiroAutoEditor* _autoEditor;
	RoundProgressViewController* _progressViewController;

}

@property (nonatomic,retain) MiroAutoEditor * autoEditor;                                                     //@synthesize autoEditor=_autoEditor - In the implementation block
@property (assign,nonatomic) BOOL progressIncludesDownload;                                                   //@synthesize progressIncludesDownload=_progressIncludesDownload - In the implementation block
@property (assign,nonatomic) BOOL shouldHandleProgressUpdates;                                                //@synthesize shouldHandleProgressUpdates=_shouldHandleProgressUpdates - In the implementation block
@property (nonatomic,retain) RoundProgressViewController * progressViewController;                            //@synthesize progressViewController=_progressViewController - In the implementation block
@property (assign,nonatomic,__weak) id<MiroAutoEditDownloadProgressControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<MiroAutoEditDownloadProgressControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MiroAutoEditDownloadProgressControllerDelegate>)delegate;
-(MiroAutoEditor *)autoEditor;
-(void)setAutoEditor:(MiroAutoEditor *)arg1 ;
-(id)initWithAutoEditor:(id)arg1 ;
-(void)_handleAutoEditorWillBeginNotification:(id)arg1 ;
-(void)_handleAutoEditorDidEndNotification:(id)arg1 ;
-(void)_handleAutoEditorDidCancelNotification:(id)arg1 ;
-(void)_handleAutoEditorChangedProgressNotification:(id)arg1 ;
-(void)_handleAutoEditorChangedDownloadProgressNotification:(id)arg1 ;
-(void)setProgressIncludesDownload:(BOOL)arg1 ;
-(void)setShouldHandleProgressUpdates:(BOOL)arg1 ;
-(void)_dismissProgressUserDidCancel:(BOOL)arg1 ;
-(BOOL)shouldHandleProgressUpdates;
-(RoundProgressViewController *)progressViewController;
-(void)_presentProgressWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)progressIncludesDownload;
-(void)_dismissProgressWithCompletion:(/*^block*/id)arg1 ;
-(void)setProgressViewController:(RoundProgressViewController *)arg1 ;
-(void)_cancelProgress:(id)arg1 ;
@end

