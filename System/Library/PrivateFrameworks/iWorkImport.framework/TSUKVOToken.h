/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSString;

@interface TSUKVOToken : NSObject {

	NSObject* _observer;
	NSObject* _target;
	NSString* _keyPath;
	void* _context;

}

@property (nonatomic,readonly) NSObject * observer;                  //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSObject * target;                    //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) void* context;                        //@synthesize context=_context - In the implementation block
-(id)initWithObserver:(id)arg1 target:(id)arg2 keyPath:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSObject *)target;
-(void*)context;
-(NSString *)keyPath;
-(NSObject *)observer;
@end

