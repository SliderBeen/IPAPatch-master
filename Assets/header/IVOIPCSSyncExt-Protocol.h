//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, VoipMultiRelayData;

@protocol IVOIPCSSyncExt

@optional
- (void)OnCSVoipNotify:(NSData *)arg1;
- (void)OnGotRemoteControlStatus:(unsigned int)arg1;
- (void)OnGotRemoteRelayData:(NSData *)arg1;
- (void)OnGotRemoteConnectData:(VoipMultiRelayData *)arg1;
- (void)OnGotRemoteStatus:(unsigned int)arg1;
- (void)OnSyncError:(int)arg1;
@end

