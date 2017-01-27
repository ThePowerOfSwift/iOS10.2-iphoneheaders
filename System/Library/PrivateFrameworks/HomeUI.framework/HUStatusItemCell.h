/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, HUGridLayoutOptions, UILabel, NSLayoutConstraint, UIView, NSString;

@interface HUStatusItemCell : UITableViewCell <HUCellProtocol> {

	HFItem* _item;
	HUGridLayoutOptions* _gridLayoutOptions;
	UILabel* _titleLabel;
	NSLayoutConstraint* _bottomConstraint;
	UIView* _titleLabelSnapshot;

}

@property (nonatomic,retain) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (nonatomic,retain) UIView * titleLabelSnapshot;                          //@synthesize titleLabelSnapshot=_titleLabelSnapshot - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * gridLayoutOptions;              //@synthesize gridLayoutOptions=_gridLayoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                        //@synthesize item=_item - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HFItem *)item;
-(UILabel *)titleLabel;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(NSLayoutConstraint *)bottomConstraint;
-(void)setItem:(HFItem *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateTitleLabel;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setTitleLabelSnapshot:(UIView *)arg1 ;
-(UIView *)titleLabelSnapshot;
-(HUGridLayoutOptions *)gridLayoutOptions;
-(void)setGridLayoutOptions:(HUGridLayoutOptions *)arg1 ;
@end
