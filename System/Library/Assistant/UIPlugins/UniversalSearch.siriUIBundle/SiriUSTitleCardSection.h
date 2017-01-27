/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UniversalSearch/SiriUSCardSection.h>
#import <UniversalSearch/SearchUITitleCardSection.h>

@class NSString, NSURL, NSArray;

@interface SiriUSTitleCardSection : SiriUSCardSection <SearchUITitleCardSection> {

	NSString* _title;

}

@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,readonly) BOOL hideDivider; 
@property (nonatomic,readonly) BOOL hasTopPadding; 
@property (nonatomic,readonly) BOOL hasBottomPadding; 
@property (nonatomic,readonly) NSString * punchoutPickerLabel; 
@property (nonatomic,readonly) NSString * punchoutPickerDismissLabel; 
@property (nonatomic,readonly) NSArray * punchoutOptions; 
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)type;
@end
