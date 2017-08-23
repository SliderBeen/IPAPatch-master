//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSCrashReportFilter-Protocol.h"

@class NSArray, NSString;

@interface KSCrashReportFilterConcatenate : NSObject <KSCrashReportFilter>
{
    NSString *_separatorFmt;
    NSArray *_keys;
}

+ (id)filterWithSeparatorFmt:(id)arg1 keys:(id)arg2;
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NSString *separatorFmt; // @synthesize separatorFmt=_separatorFmt;
- (void).cxx_destruct;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)initWithSeparatorFmt:(id)arg1 keysArray:(id)arg2;
- (id)initWithSeparatorFmt:(id)arg1 keys:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

