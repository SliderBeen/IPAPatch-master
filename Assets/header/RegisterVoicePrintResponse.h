//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, VoicePieceCtx;

@interface RegisterVoicePrintResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) VoicePieceCtx *nextPiece; // @dynamic nextPiece;
@property(nonatomic) unsigned int nextStep; // @dynamic nextStep;
@property(nonatomic) int resgisterRet; // @dynamic resgisterRet;
@property(nonatomic) unsigned int voiceTicket; // @dynamic voiceTicket;

@end

