/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSHistoryItem;

@interface WBSFrequentlyVisitedSiteCandidate : NSObject {

	float _score;
	WBSHistoryItem* _historyItem;

}

@property (nonatomic,readonly) WBSHistoryItem * historyItem;              //@synthesize historyItem=_historyItem - In the implementation block
@property (nonatomic,readonly) float score;                               //@synthesize score=_score - In the implementation block
-(id)initWithHistoryItem:(id)arg1 score:(float)arg2 ;
-(WBSHistoryItem *)historyItem;
-(float)score;
@end

