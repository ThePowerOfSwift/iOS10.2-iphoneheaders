/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Calendar.siriUIBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKDayViewDelegate <NSObject>
@optional
-(void)dayViewDidFinishScrollingToOccurrence:(id)arg1;
-(void)dayView:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
-(void)dayView:(id)arg1 didUpdateScrollPosition:(CGPoint)arg2;
-(void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned long long)arg2;
-(void)dayView:(id)arg1 didScaleDayViewWithScale:(double)arg2;
-(void)dayView:(id)arg1 didSelectEvent:(id)arg2;
-(void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;
-(void)dayViewDidTapEmptySpace:(id)arg1;
-(void)dayView:(id)arg1 isPinchingDayViewWithScale:(double)arg2;

@end

