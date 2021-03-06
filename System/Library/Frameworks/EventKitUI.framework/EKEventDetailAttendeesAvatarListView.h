/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/EKEventDetailAttendeesList.h>

@class NSMutableArray, NSArray, UIColor, UIViewController, NSString;

@interface EKEventDetailAttendeesAvatarListView : UIView <EKEventDetailAttendeesList> {

	NSMutableArray* _avatarViews;
	BOOL _highlighted;
	BOOL _groupsNames;
	NSArray* _accepted;
	NSArray* _maybe;
	NSArray* _declined;
	NSArray* _noReply;
	NSArray* _ungrouped;
	UIColor* _textColor;
	UIColor* _highlightedTextColor;
	UIViewController* _viewController;

}

@property (nonatomic,retain) NSArray * accepted;                                    //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,retain) NSArray * maybe;                                       //@synthesize maybe=_maybe - In the implementation block
@property (nonatomic,retain) NSArray * declined;                                    //@synthesize declined=_declined - In the implementation block
@property (nonatomic,retain) NSArray * noReply;                                     //@synthesize noReply=_noReply - In the implementation block
@property (nonatomic,retain) NSArray * ungrouped;                                   //@synthesize ungrouped=_ungrouped - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                   //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTextColor;                        //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                 //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL groupsNames;                                      //@synthesize groupsNames=_groupsNames - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(UIColor *)textColor;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(UIColor *)highlightedTextColor;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(void)setDeclined:(NSArray *)arg1 ;
-(void)setAccepted:(NSArray *)arg1 ;
-(void)setMaybe:(NSArray *)arg1 ;
-(void)setNoReply:(NSArray *)arg1 ;
-(void)setGroupsNames:(BOOL)arg1 ;
-(void)setUngrouped:(NSArray *)arg1 ;
-(BOOL)groupsNames;
-(NSArray *)accepted;
-(NSArray *)maybe;
-(NSArray *)declined;
-(NSArray *)noReply;
-(NSArray *)ungrouped;
-(id)rowOfFaces:(id)arg1 withStatus:(id)arg2 ;
-(void)setup;
@end

