//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FileSealerInfo : NSObject
{
    int _fileDescriptor;
    NSString *_innocentPath;
    NSString *_sealerPath;
    id _userInfo;
}

@property(readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSString *sealerPath; // @synthesize sealerPath=_sealerPath;
@property(readonly, nonatomic) NSString *innocentPath; // @synthesize innocentPath=_innocentPath;
@property(readonly, nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInnocent:(id)arg1 andUserInfo:(id)arg2 error:(id *)arg3;

@end

