//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtobufEventHandler.h"

@interface NewRegEventHandler : ProtobufEventHandler
{
    struct ec_key_st *ecdh_key;
    unsigned int ct1;
}

- (void)OnProtocolResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)changeForMessage:(id)arg1;
- (void)OnProtocolStart:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)dealloc;
- (id)init;

@end

