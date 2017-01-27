/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <SiriUI/SiriUIReusableSubtitledHeaderView.h>

@class UIImageView;

@interface ACTwitterUserHeaderView : SiriUIReusableSubtitledHeaderView {

	UIImageView* _verificationBadgeImageView;
	BOOL _showsVerificationBadge;

}

@property (assign,nonatomic) BOOL showsVerificationBadge;              //@synthesize showsVerificationBadge=_showsVerificationBadge - In the implementation block
-(void)setShowsVerificationBadge:(BOOL)arg1 ;
-(BOOL)showsVerificationBadge;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
