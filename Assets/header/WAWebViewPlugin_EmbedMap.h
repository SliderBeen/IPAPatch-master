//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "WAMapViewDelegate-Protocol.h"

@class NSString;

@interface WAWebViewPlugin_EmbedMap : WAWebViewPlugin_embedView <WAMapViewDelegate>
{
}

- (void)onMapTap:(id)arg1;
- (void)onRegionDidChange:(id)arg1;
- (void)onRegionWillChange:(id)arg1;
- (void)onControlClick:(id)arg1 data:(id)arg2;
- (void)onMarkerClick:(id)arg1 data:(id)arg2;
- (void)closurePoints:(unsigned int)arg1 points:(id)arg2;
- (struct CLLocationCoordinate2D)getUserLocation:(unsigned int)arg1;
- (_Bool)moveToUserLocation:(unsigned int)arg1;
- (void)setMapScale:(double)arg1 mapId:(unsigned int)arg2;
- (void)setCenterLocation:(struct CLLocationCoordinate2D)arg1 mapId:(unsigned int)arg2;
- (void)addMapControl:(unsigned int)arg1 annotation:(id)arg2;
- (void)addMapCircle:(unsigned int)arg1 circle:(id)arg2;
- (void)addMapLine:(unsigned int)arg1 line:(id)arg2 closed:(_Bool)arg3;
- (void)addMapAnnotation:(unsigned int)arg1 annotation:(id)arg2;
- (void)updateMapCovers:(unsigned int)arg1 covers:(id)arg2;
- (void)clearMapControls:(unsigned int)arg1;
- (void)clearCircles:(unsigned int)arg1;
- (void)clearLines:(unsigned int)arg1 closed:(_Bool)arg2;
- (void)clearMapMarkers:(unsigned int)arg1;
- (void)clearMapCovers:(unsigned int)arg1;
- (void)enableUserLocation:(unsigned int)arg1 show:(_Bool)arg2;
- (_Bool)removeMap:(unsigned int)arg1;
- (_Bool)insertMap:(id)arg1 result:(id *)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

