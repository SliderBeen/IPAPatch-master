//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WXGMapTableObject : NSObject
{
    NSMutableDictionary *m_dicMediaIDPath;
    NSMutableArray *m_arrDumpInfo;
    NSString *m_folderPath;
}

- (void).cxx_destruct;
- (void)clearDumpInfo;
- (id)getMediaIDPathDictionary;
- (id)getBufferMediaIDPathDictionary;
- (void)setObjectForMediaPath:(id)arg1 forKey:(id)arg2;
- (id)initWithFolderPath:(id)arg1;
- (id)init;

@end

