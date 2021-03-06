/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class SKUIArtworkRequest, UIImageView, UILabel, UIImage, NSString;

@interface MSCLLockupView : UIView <SKUIArtworkRequestDelegate> {

	SKUIArtworkRequest* _artworkRequest;
	UIImageView* _imageView;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)adoptArtworkRequest:(id)arg1 ;
@end

