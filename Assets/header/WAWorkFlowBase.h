//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAWorkFlowImplement-Protocol.h"

@class NSMutableArray, NSString;

@interface WAWorkFlowBase : NSObject <WAWorkFlowImplement>
{
    NSString *_workFlowName;
    NSMutableArray *_arrStepInfo;
    id _context;
    _Bool _isStartRun;
    _Bool _isCancel;
    CDUnknownBlockType _completeHandler;
}

- (void).cxx_destruct;
- (void)callSuccess;
- (void)callFail:(id)arg1;
- (void)callCompleteHandler:(_Bool)arg1 error:(id)arg2;
- (void)runStepSubWorkFlow:(id)arg1;
- (void)runStepBlock:(id)arg1;
- (void)onStepFinish:(id)arg1 isSuccess:(_Bool)arg2 error:(id)arg3;
- (void)runSteps;
- (void)cancel;
- (void)run:(CDUnknownBlockType)arg1;
- (void)addStepName:(id)arg1 subWorkFlow:(id)arg2;
- (void)addStepName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 context:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

