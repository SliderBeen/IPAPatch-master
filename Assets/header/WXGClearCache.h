//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

@interface WXGClearCache : NSObject <UIAlertViewDelegate>
{
    unsigned int _cacheMask;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned int cacheMask; // @synthesize cacheMask=_cacheMask;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)parseFileInformationsWithXml:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

