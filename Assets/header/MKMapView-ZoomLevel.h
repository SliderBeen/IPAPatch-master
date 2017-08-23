//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKMapView.h>

@interface MKMapView (ZoomLevel)
- (unsigned long long)getCurrZoomLevel;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(unsigned long long)arg2 animated:(_Bool)arg3;
- (CDStruct_c3b9c2ee)coordinateSpanWithMapView:(id)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2 andZoomLevel:(unsigned long long)arg3;
- (double)pixelSpaceYToLatitude:(double)arg1;
- (double)pixelSpaceXToLongitude:(double)arg1;
- (double)latitudeToPixelSpaceY:(double)arg1;
- (double)longitudeToPixelSpaceX:(double)arg1;
@end

