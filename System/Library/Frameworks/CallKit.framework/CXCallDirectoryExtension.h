/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSExtension, NSString, LSPlugInKitProxy;

@interface CXCallDirectoryExtension : NSObject {

	NSExtension* _extension;

}

@property (nonatomic,retain) NSExtension * extension;                              //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * localizedContainingAppName; 
@property (nonatomic,readonly) LSPlugInKitProxy * plugInKitProxy; 
-(id)init;
-(id)description;
-(NSString *)identifier;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSString *)localizedName;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(void)resetEnabledStatus;
-(NSString *)localizedContainingAppName;
-(LSPlugInKitProxy *)plugInKitProxy;
@end
