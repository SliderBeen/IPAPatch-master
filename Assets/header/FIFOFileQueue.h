//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FileQueue.h"

@class NSMutableArray;

@interface FIFOFileQueue : FileQueue
{
    NSMutableArray *m_arrItems;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)clear;
- (id)getAll;
- (id)getTop;
- (_Bool)modifyTop:(id)arg1;
- (_Bool)pop;
- (_Bool)push:(id)arg1;
- (void)setUnArchiveResult:(id)arg1;
- (id)getArchiveTarget;
- (void)dealloc;

@end

