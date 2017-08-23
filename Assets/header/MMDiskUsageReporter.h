//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol MMDiskUsageRepoterDelegate, OS_dispatch_queue;

@interface MMDiskUsageReporter : NSObject
{
    NSDictionary *m_dicSizeReportIdKeyInfo;
    NSDictionary *m_dicFileNumReportIdKeyInfo;
    _Bool m_isRunning;
    NSObject<OS_dispatch_queue> *m_workQueue;
    id <MMDiskUsageRepoterDelegate> m_delegate;
}

+ (_Bool)IsNeedReport;
+ (_Bool)SaveReportData:(id)arg1;
@property(nonatomic) __weak id <MMDiskUsageRepoterDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_workQueue; // @synthesize m_workQueue;
@property(nonatomic) _Bool m_isRunning; // @synthesize m_isRunning;
- (void).cxx_destruct;
- (void)reportDelFileToIDKey:(id)arg1 vecIDKey:(vector_01fc9dba *)arg2;
- (void)reportFileSize:(unsigned int)arg1 andFileNum:(unsigned int)arg2 toBizType:(int)arg3 vecIDKey:(vector_01fc9dba *)arg4;
- (void)callReportFinishedOnMainThread;
- (void)removeReportDataFile;
- (void)reportOnThread:(id)arg1;
- (void)Report;
- (void)ReleaseWorkQueue;
- (void)SetWorkQueue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

