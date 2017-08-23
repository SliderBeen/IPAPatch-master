//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface H5VideoPlayInfo : MMObject
{
    NSString *_videoUrl;
    NSString *_fileID;
    long long _fileSize;
    int _fileType;
    int _fileDuration;
    int _playID;
}

@property(nonatomic) int playID; // @synthesize playID=_playID;
@property(nonatomic) int fileDuration; // @synthesize fileDuration=_fileDuration;
@property(nonatomic) int fileType; // @synthesize fileType=_fileType;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
- (void).cxx_destruct;

@end

