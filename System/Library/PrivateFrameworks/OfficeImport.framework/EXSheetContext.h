/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OCDDelayedNodeContext.h>

@class EXReadState, NSURL, NSString;

@interface EXSheetContext : NSObject <OCDDelayedNodeContext> {

	EXReadState* mSheetState;
	NSURL* mPackageLocation;
	NSString* mType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)initWithSheetLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3 ;
@end

