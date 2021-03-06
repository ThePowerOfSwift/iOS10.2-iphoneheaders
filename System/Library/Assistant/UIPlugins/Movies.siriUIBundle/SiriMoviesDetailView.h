/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class SAMovieV2MovieDetailSnippet, SiriMoviesMovieCreditsView, SiriMoviesMovieInfoView, SiriUIDownloadableImageView, SiriUIKeyline, UILabel, SiriMoviesChevronButton, SiriUIChevronButton, UIButton, SiriMoviesMediaContentProviderView;

@interface SiriMoviesDetailView : UIView {

	SAMovieV2MovieDetailSnippet* _snippet;
	SiriMoviesMovieCreditsView* _movieCreditsView;
	SiriMoviesMovieInfoView* _movieInfoView;
	SiriUIDownloadableImageView* _posterImageView;
	SiriUIKeyline* _punchoutKeyline;
	UILabel* _synopsisTitle;
	UILabel* _synopsisLabel;
	SiriMoviesChevronButton* _showtimesButton;
	SiriUIChevronButton* _reviewsButton;
	SiriUIChevronButton* _detailsPunchoutButton;
	UIButton* _watchTrailerButton;
	/*^block*/id _mediaPunchOutAction;
	SiriMoviesMediaContentProviderView* _mediaContentProviderView;

}

@property (nonatomic,readonly) SiriMoviesMediaContentProviderView * mediaContentProviderView;              //@synthesize mediaContentProviderView=_mediaContentProviderView - In the implementation block
@property (nonatomic,readonly) SiriMoviesChevronButton * showtimesButton;                                  //@synthesize showtimesButton=_showtimesButton - In the implementation block
@property (nonatomic,readonly) SiriUIChevronButton * reviewsButton;                                        //@synthesize reviewsButton=_reviewsButton - In the implementation block
@property (nonatomic,readonly) SiriUIChevronButton * detailsPunchoutButton;                                //@synthesize detailsPunchoutButton=_detailsPunchoutButton - In the implementation block
@property (nonatomic,readonly) UIButton * watchTrailerButton;                                              //@synthesize watchTrailerButton=_watchTrailerButton - In the implementation block
@property (nonatomic,copy) id mediaPunchOutAction;                                                         //@synthesize mediaPunchOutAction=_mediaPunchOutAction - In the implementation block
-(id)initWithFrame:(CGRect)arg1 movieDetailSnippet:(id)arg2 ;
-(UIButton *)watchTrailerButton;
-(id)mediaPunchOutAction;
-(SiriMoviesMediaContentProviderView *)mediaContentProviderView;
-(SiriUIChevronButton *)reviewsButton;
-(SiriUIChevronButton *)detailsPunchoutButton;
-(void)setMediaPunchOutAction:(id)arg1 ;
-(SiriMoviesChevronButton *)showtimesButton;
-(CGSize)_posterSizeMax;
-(id)_mediaButtonAnalyticsDictionaryForSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_updateMediaButtonsForContainerResponse:(id)arg1 playablesResponse:(id)arg2 ;
-(CGSize)_calculateLayoutForSize:(CGSize)arg1 setFrame:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_leftInset;
-(double)_rightInset;
-(UIEdgeInsets)defaultViewInsets;
@end

