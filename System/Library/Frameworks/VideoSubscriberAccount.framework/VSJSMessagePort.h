/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSMessagePort.h>

@protocol VSJSMessagePort <JSExport>
@required
-(void)postMessage:(id)arg1;

@end


@protocol VSJSMessagePortDelegate;
@interface VSJSMessagePort : IKJSObject <VSJSMessagePort> {

	id<VSJSMessagePortDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VSJSMessagePortDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<VSJSMessagePortDelegate>)arg1 ;
-(id<VSJSMessagePortDelegate>)delegate;
-(void)postMessage:(id)arg1 ;
@end
