/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>

@class SearchUIMovieCardSectionBuyButtonView;

@interface SearchUIMovieCardSectionView : SearchUICardSectionView {

	SearchUIMovieCardSectionBuyButtonView* _watchListButton;
	SearchUIMovieCardSectionBuyButtonView* _playButton;

}

@property (retain) SearchUIMovieCardSectionBuyButtonView * watchListButton;              //@synthesize watchListButton=_watchListButton - In the implementation block
@property (retain) SearchUIMovieCardSectionBuyButtonView * playButton;                   //@synthesize playButton=_playButton - In the implementation block
-(SearchUIMovieCardSectionBuyButtonView *)playButton;
-(id)initWithCardSection:(id)arg1 controller:(id)arg2 ;
-(void)setWatchListButton:(SearchUIMovieCardSectionBuyButtonView *)arg1 ;
-(SearchUIMovieCardSectionBuyButtonView *)watchListButton;
-(void)lookupWatchListStatusForCardSection:(id)arg1 ;
-(void)updateButtonsIsWatchListed:(BOOL)arg1 playables:(id)arg2 continuationText:(id)arg3 ;
-(void)setPlayButton:(SearchUIMovieCardSectionBuyButtonView *)arg1 ;
@end
