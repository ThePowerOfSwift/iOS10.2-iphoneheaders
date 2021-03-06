/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:59:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IMActivityItemSource <UIActivityItemSource,NSObject>
@property (nonatomic,retain) NSString * activityType; 
@optional
-(void)activityViewController:(id)arg1 didShareItems:(id)arg2 success:(BOOL)arg3;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;

@required
-(id)supportedActivityTypes;
-(NSString *)activityType;
-(id)activityViewControllerPlaceholderItem:(id)arg1;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
-(void)setActivityType:(id)arg1;

@end

