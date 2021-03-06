/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSProcessAssertion, NSString;

@interface SBBackgroundFetchTask : NSObject {

	BOOL _finished;
	int _sequenceNumber;
	BKSProcessAssertion* _assertion;
	/*^block*/id _completionHandler;
	NSString* _bundleID;
	unsigned long long _trigger;

}

@property (nonatomic,retain) BKSProcessAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned long long trigger;                           //@synthesize trigger=_trigger - In the implementation block
@property (readonly) int sequenceNumber;                                   //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (readonly) BOOL finished;                                        //@synthesize finished=_finished - In the implementation block
-(void)_fireCompletionHandlerWithResult:(unsigned long long)arg1 ;
-(id)initForApplication:(id)arg1 trigger:(unsigned long long)arg2 sequenceNumber:(int)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)description;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(unsigned long long)trigger;
-(int)sequenceNumber;
-(void)finishWithResult:(unsigned long long)arg1 ;
-(BKSProcessAssertion *)assertion;
-(NSString *)bundleID;
-(BOOL)finished;
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
@end

