//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PrtlBase.h"

@class CDownloadVideoWrap;

@interface CDownloadVideoPrtl : PrtlBase
{
    CDownloadVideoWrap *m_wrapVideo;
}

@property(retain, nonatomic) CDownloadVideoWrap *m_wrapVideo; // @synthesize m_wrapVideo;
- (void).cxx_destruct;
- (_Bool)HandleResp:(void *)arg1;
- (void)InitReq:(void *)arg1;
- (id)init;

@end

