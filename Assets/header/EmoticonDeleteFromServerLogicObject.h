//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EmoticonServerNotifyTask.h"

@class NSArray;
@protocol EmoticonDeleteFromServerLogicObjectDelegate;

@interface EmoticonDeleteFromServerLogicObject : EmoticonServerNotifyTask
{
    NSArray *m_deleteMd5Array;
    id <EmoticonDeleteFromServerLogicObjectDelegate> m_delegate;
}

@property(nonatomic) __weak id <EmoticonDeleteFromServerLogicObjectDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSArray *m_deleteMd5Array; // @synthesize m_deleteMd5Array;
- (void).cxx_destruct;
- (_Bool)resumeLogic;
- (id)initWithDelegate:(id)arg1 withMd5ObjectArray:(id)arg2;
- (void)dealloc;

@end

