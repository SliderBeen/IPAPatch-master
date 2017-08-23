//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableDictionary, NSString;

@interface FBSDKLoginManagerLogger : NSObject
{
    NSString *_identifier;
    NSMutableDictionary *_extras;
    NSString *_lastResult;
    NSError *_lastError;
    unsigned long long _loginBehavior;
}

+ (id)loggerFromParameters:(id)arg1;
- (void).cxx_destruct;
- (id)parametersForNewEventWithBehavior:(const unsigned long long *)arg1;
- (id)identifierForBehavior:(unsigned long long)arg1;
- (id)clientStateForBehavior:(unsigned long long)arg1;
- (void)systemAuthDidShowDialog:(_Bool)arg1 isUnTOSedDevice:(_Bool)arg2;
- (void)willAttemptAppSwitchingBehavior;
- (id)parametersWithTimeStampAndClientState:(id)arg1 forLoginBehavior:(unsigned long long)arg2;
- (void)endLoginWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)startLoginWithBehavior:(unsigned long long)arg1;
- (void)endEvent;
- (void)startEventWithBehavior:(unsigned long long)arg1 isReauthorize:(_Bool)arg2;
- (id)init;

@end

