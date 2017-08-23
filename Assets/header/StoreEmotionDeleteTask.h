//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StoreEmotionNotifyTask.h"

@class NSString;
@protocol StoreEmotionDeleteTaskDelegate;

@interface StoreEmotionDeleteTask : StoreEmotionNotifyTask
{
    NSString *_productID;
    id <StoreEmotionDeleteTaskDelegate> _delegate;
}

@property(nonatomic) __weak id <StoreEmotionDeleteTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void).cxx_destruct;
- (_Bool)resumeLogic;
- (id)initWithProductID:(id)arg1 andDelegate:(id)arg2;

@end

