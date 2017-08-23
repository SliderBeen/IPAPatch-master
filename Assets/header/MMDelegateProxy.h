//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSObject;

@interface MMDelegateProxy : MMObject
{
    NSObject *m_delegate;
    id m_owner;
    Class m_delegateClass;
    NSArray *m_arrProtocol;
}

@property(readonly, nonatomic) NSArray *m_arrProtocol; // @synthesize m_arrProtocol;
@property(nonatomic) id m_owner; // @synthesize m_owner;
@property(readonly, nonatomic) __weak NSObject *m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)description;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)updateDelegateByDelegateCenter:(id)arg1;
- (void)clearDelegateByDelegateCenter;
- (id)initWithDelegate:(id)arg1 forProtocols:(id)arg2;

@end

