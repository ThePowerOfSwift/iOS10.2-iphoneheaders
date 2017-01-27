/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DDPreviewAction.h>
#import <libobjc.A.dylib/DDParsecCollectionDelegate.h>

@class DDParsecCollectionViewController;

@interface DDParsecAction : DDPreviewAction <DDParsecCollectionDelegate> {

	DDParsecCollectionViewController* _parsecViewController;
	BOOL _previewMode;

}
-(int)interactionType;
-(id)localizedName;
-(id)createViewController;
-(void)dismissParsecCollection:(id)arg1 ;
@end
