/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/_LPResolvable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface LPImageMetadata : NSObject <_LPResolvable, NSSecureCoding> {

	unsigned _version;
	NSURL* _URL;
	NSString* _type;
	CGSize _size;

}

@property (nonatomic,readonly) unsigned version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(unsigned)version;
-(id)_initWithDictionary:(id)arg1 ;
-(long long)maximumBytes;
-(id)tryToResolveWithWebViewForProcessSharing:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isValidMIMEType:(id)arg1 ;
@end

