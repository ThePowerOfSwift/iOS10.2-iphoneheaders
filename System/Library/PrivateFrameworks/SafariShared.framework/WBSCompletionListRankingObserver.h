/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CompletionListRankingObserverFeedbackGeneratorDelegate.h>

@protocol _CompletionListRankingObserverFeedbackGenerator, WBSCompletionListRankingObserverDelegate;
@class SFRankingFeedback, NSString;

@interface WBSCompletionListRankingObserver : NSObject <_CompletionListRankingObserverFeedbackGeneratorDelegate> {

	id<_CompletionListRankingObserverFeedbackGenerator> _feedbackGenerator;
	id<WBSCompletionListRankingObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSCompletionListRankingObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SFRankingFeedback * rankingFeedback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WBSCompletionListRankingObserverDelegate>)arg1 ;
-(id<WBSCompletionListRankingObserverDelegate>)delegate;
-(id)_createFeedbackGenerator;
-(void)didBeginRanking;
-(void)didEndRanking;
-(void)didBeginSectionWithBundleIdentifier:(id)arg1 ;
-(void)didAddItem:(id)arg1 hidingOutrankedResults:(id)arg2 hidingDuplicateResults:(id)arg3 ;
-(void)removeAllSectionsAndItems;
-(SFRankingFeedback *)rankingFeedback;
-(Class)_feedbackGeneratorClass;
-(unsigned long long)completionListRankingObserverFeedbackGenerator:(id)arg1 frequentlyVisitedSitesIndexOfItem:(id)arg2 hidingItem:(id)arg3 ;
-(void)didAddItem:(id)arg1 ;
@end

