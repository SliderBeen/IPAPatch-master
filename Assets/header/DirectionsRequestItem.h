//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface DirectionsRequestItem : MMObject
{
    _Bool useGoogleApi;
    struct CLLocationCoordinate2D begin;
    struct CLLocationCoordinate2D end;
}

@property(nonatomic) _Bool useGoogleApi; // @synthesize useGoogleApi;
@property(nonatomic) struct CLLocationCoordinate2D end; // @synthesize end;
@property(nonatomic) struct CLLocationCoordinate2D begin; // @synthesize begin;

@end

