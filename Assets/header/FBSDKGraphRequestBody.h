//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface FBSDKGraphRequestBody : NSObject
{
    NSMutableData *_data;
}

+ (id)mimeContentType;
- (void).cxx_destruct;
- (void)_appendWithKey:(id)arg1 contentBlock:(CDUnknownBlockType)arg2;
@property(readonly, retain, nonatomic) NSData *data;
- (void)appendWithKey:(id)arg1 formValue:(id)arg2;
- (void)appendUTF8:(id)arg1;
- (id)init;

@end

