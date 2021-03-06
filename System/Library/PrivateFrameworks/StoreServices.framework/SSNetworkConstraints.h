/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface SSNetworkConstraints : NSObject <NSCoding, SSXPCCoding, NSCopying> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _sizeLimits;

}

@property (getter=isAnyNetworkTypeEnabled,readonly) BOOL anyNetworkTypeEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_newModernNetworkConstraintsWithArray:(id)arg1 ;
+(id)_newLegacyNetworkConstraintsWithDictionary:(id)arg1 ;
+(void)_addNetworkConstraintsToDictionary:(id)arg1 forNetworkType:(long long)arg2 legacyDictionary:(id)arg3 ;
+(id)newNetworkConstraintsByDownloadKindFromURLBag:(id)arg1 ;
-(void)_setSizeLimit:(long long)arg1 forNetworkType:(long long)arg2 ;
-(long long)_sizeLimitForNetworkType:(long long)arg1 ;
-(void)_disableAllNetworkTypes;
-(id)_copySizeLimits;
-(void)setAllNetworkTypesDisabled;
-(void)disableCellularNetworkTypes;
-(BOOL)hasSizeLimitForNetworkType:(long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSizeLimit:(long long)arg1 forNetworkType:(long long)arg2 ;
-(long long)sizeLimitForNetworkType:(long long)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setSizeLimitsWithStoreConstraintDictionary:(id)arg1 ;
-(BOOL)isAnyNetworkTypeEnabled;
@end

