/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKCSSMediaQueryList.h>

@class NSMutableArray;

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList {

	NSMutableArray* _queryList;

}
-(id)init;
-(unsigned long long)count;
-(id)description;
-(id)subQueryAtIndex:(unsigned long long)arg1 ;
-(id)subQueryList;
-(void)addSubQueryList:(id)arg1 ;
-(BOOL)evaluate;
@end
