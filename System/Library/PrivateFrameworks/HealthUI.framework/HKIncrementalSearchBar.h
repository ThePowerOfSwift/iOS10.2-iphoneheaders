/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, _SearchBarContent;

@interface HKIncrementalSearchBar : UIView {

	NSString* _matchDisplayText;
	_SearchBarContent* _searchBarContent;

}

@property (nonatomic,readonly) _SearchBarContent * searchBarContent;                            //@synthesize searchBarContent=_searchBarContent - In the implementation block
@property (nonatomic,retain) id<HKIncrementalSearchBarDelegate> searchBarDelegate; 
@property (nonatomic,retain) NSString * searchText; 
@property (nonatomic,retain) NSString * matchDisplayText;                                       //@synthesize matchDisplayText=_matchDisplayText - In the implementation block
+(id)regularExpressionFromString:(id)arg1 quoteForJavascript:(BOOL)arg2 caseless:(BOOL*)arg3 ;
+(BOOL)_hasUppercaseCharacters:(id)arg1 ;
+(id)_patternFromSearchString:(id)arg1 quoteForJavascript:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)canBecomeFirstResponder;
-(CGSize)intrinsicContentSize;
-(id)inputAccessoryView;
-(NSString *)searchText;
-(void)setSearchText:(NSString *)arg1 ;
-(id<HKIncrementalSearchBarDelegate>)searchBarDelegate;
-(void)setSearchBarDelegate:(id<HKIncrementalSearchBarDelegate>)arg1 ;
-(void)activateSearch:(BOOL)arg1 ;
-(void)setMatchDisplayText:(NSString *)arg1 ;
-(void)setUpEnabled:(BOOL)arg1 ;
-(void)setDownEnabled:(BOOL)arg1 ;
-(void)setMatchDisplayVisible:(BOOL)arg1 ;
-(void)searchKeyboardDidHide:(id)arg1 ;
-(BOOL)keyboardIsUp;
-(BOOL)keyboardIsDown;
-(BOOL)searchIsActive;
-(void)_lowerKeyboard;
-(void)doneAction:(id)arg1 ;
-(NSString *)matchDisplayText;
-(_SearchBarContent *)searchBarContent;
@end

