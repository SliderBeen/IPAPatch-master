//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class SnsObjItem;

@interface iWatchAppMsgItem : MMObject
{
    SnsObjItem *_snsObj;
}

@property(retain, nonatomic) SnsObjItem *snsObj; // @synthesize snsObj=_snsObj;
- (void).cxx_destruct;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (void)dealloc;

@end

