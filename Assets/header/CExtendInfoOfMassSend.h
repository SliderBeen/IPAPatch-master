//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMessageWrapExt-Protocol.h"
#import "IMsgExtendOperation-Protocol.h"
#import "NSCopying-Protocol.h"

@class CMessageWrap, NSString;

@interface CExtendInfoOfMassSend : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    CMessageWrap *m_refMessageWrap;
}

+ (void)CreateExtendInfoWithUserName:(id)arg1 retExtendInfo:(id *)arg2 retIsContinueDispatch:(_Bool *)arg3;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
- (void)UpdateMassSendContent:(id)arg1;
- (void)ChangeForDisplay;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

