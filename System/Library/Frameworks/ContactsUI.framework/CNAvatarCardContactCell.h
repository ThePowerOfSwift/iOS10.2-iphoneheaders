/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNAvatarCardActionCell.h>

@class UIImageView;

@interface CNAvatarCardContactCell : CNAvatarCardActionCell {

	UIImageView* _contactImageView;

}

@property (nonatomic,retain) UIImageView * contactImageView;              //@synthesize contactImageView=_contactImageView - In the implementation block
-(void)reloadData;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(BOOL)moreHighlighted;
-(void)_updateFonts;
-(UIImageView *)contactImageView;
-(void)setContactImageView:(UIImageView *)arg1 ;
@end
