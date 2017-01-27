/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Library/Audio/MIDI Drivers/AppleMIDIBluetoothDriver.plugin/AppleMIDIBluetoothDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface BLEMIDITimeStamper : NSObject {

	NSMutableArray* offsetHistory;
	unsigned long long receivedTime;
	unsigned long long lastReceivedTime;
	unsigned long long lastGeneratedTimestamp;
	unsigned long long lastReceivedOffsetTimestamp;
	unsigned long long averageWaitTime_ns;
	unsigned long long connectionInterval_ns;
	int firstOffset;
	unsigned short lastReceivedOffset;
	BOOL hasBeenReset;

}
-(int)modsignWithTimeDifference:(long long)arg1 range:(unsigned short)arg2 ;
-(void)setConnectionIntervalNanos:(unsigned long long)arg1 ;
-(void)setReceiveTime:(unsigned long long)arg1 ;
-(BOOL)offsetIsUsable:(unsigned short)arg1 numberOfWraps:(unsigned short*)arg2 ;
-(void)addOffset:(unsigned short)arg1 ;
-(unsigned long long)generateTimeStampForOffset:(unsigned short)arg1 ;
-(id)init;
-(void)reset;
@end
