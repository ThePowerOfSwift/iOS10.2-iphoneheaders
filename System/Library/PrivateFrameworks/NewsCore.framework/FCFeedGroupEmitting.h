/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FCFeedGroupEmitting <NSObject>
@property (nonatomic,copy,readonly) NSString * groupEmitterIdentifier; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL requiresForYouCatchUpOperation; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
@optional
-(BOOL)supportsPagination;
-(BOOL)canMergeGroupsUnconditionally;
-(BOOL)canMergeHeadlinesFromGroup:(id)arg1 intoGroup:(id)arg2;
-(BOOL)emitsSingletonGroups;
-(BOOL)requiresForYouCatchUpOperation;
-(BOOL)isRequiredByFollowingEmitters;

@required
-(NSString *)groupEmitterIdentifier;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
-(BOOL)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;
-(BOOL)canEmitGroupsWithType:(long long)arg1;

@end

