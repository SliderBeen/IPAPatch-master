//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaseResponseErrMsg;

@interface AccountErrorInfo : NSObject
{
    unsigned int _uiMessage;
    BaseResponseErrMsg *_errMsg;
}

@property(retain, nonatomic) BaseResponseErrMsg *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) unsigned int uiMessage; // @synthesize uiMessage=_uiMessage;
- (void).cxx_destruct;
- (void)parseErrMsgXml:(id)arg1;
- (id)init;

@end

