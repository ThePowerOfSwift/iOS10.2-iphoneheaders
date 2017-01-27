/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@interface ICSharedRecentlyDeletedSharedNoteUtilities : NSObject
+(unsigned long long)sharedNoteTypeForNotes:(id)arg1 ;
+(void)showDeletingSharedNotesAlertWithType:(unsigned long long)arg1 displayWindow:(UIWindow*)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)notesSharedViaICloudFromNotes:(id)arg1 ;
+(void)showAlertsIfNecessaryForDeletingSharedNotes:(id)arg1 displayWindow:(UIWindow*)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)titleForSharedNotesType:(unsigned long long)arg1 ;
+(id)messageForSharedNotesType:(unsigned long long)arg1 ;
@end
