/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class SKUIClientContext, NSURL;

@interface SKUILoadTrendingSearchPageOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSURL* _pageURL;
	/*^block*/id _outputBlock;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSURL * pageURL;                                //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,copy,readonly) id outputBlock;                            //@synthesize outputBlock=_outputBlock - In the implementation block
-(NSURL *)pageURL;
-(void)main;
-(SKUIClientContext *)clientContext;
-(id)outputBlock;
-(id)initWithClientContext:(id)arg1 pageURL:(id)arg2 outputBlock:(/*^block*/id)arg3 ;
@end
