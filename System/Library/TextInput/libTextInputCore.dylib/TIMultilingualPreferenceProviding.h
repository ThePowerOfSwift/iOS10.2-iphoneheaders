/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TIInputMode, NSArray;


@protocol TIMultilingualPreferenceProviding <NSObject>
@property (nonatomic,readonly) TIInputMode * preferredSecondaryInputMode; 
@property (nonatomic,readonly) NSArray * userEnabledInputModes; 
@required
-(TIInputMode *)preferredSecondaryInputMode;
-(NSArray *)userEnabledInputModes;

@end
