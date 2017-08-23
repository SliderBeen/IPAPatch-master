//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface TrackPresentMgr : MMService <IMsgExt, MMService>
{
    NSMutableDictionary *_trackRoomList;
    _Bool _isTrackRoomListLoaded;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)getRoomPOIByUsername:(id)arg1;
- (id)getTrackRoomMembersByUsername:(id)arg1;
- (_Bool)isTrackRoomEmpty:(id)arg1;
- (_Bool)loadTrackRoomInfoList;
- (void)saveTrackRoomInfoList;
- (_Bool)writeToFile:(id)arg1 data:(id)arg2;
- (id)getTrackRoomInfoFromMessageWrag:(id)arg1;
- (void)handleTrackRoomInfoMessage:(id)arg1 withMessageWrap:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

