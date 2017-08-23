//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "ILocationMgrExt-Protocol.h"
#import "ILocationThumbMgrExt-Protocol.h"

@class LocationMessageViewModel, MMImageView, MMLoadingView, MMUILabel, NSString, UIActivityIndicatorView, UIImageView;

@interface LocationMessageCellView : CommonMessageCellView <ILocationMgrExt, ILocationThumbMgrExt>
{
    unsigned long long m_geotag;
    MMUILabel *m_titleLabel;
    MMUILabel *m_descLabel;
    UIImageView *m_contentBgImageView;
    MMImageView *m_imageView;
    MMLoadingView *m_imageLoadingView;
    UIActivityIndicatorView *m_poiLoadingView;
}

- (void).cxx_destruct;
- (void)OnLocationThumbMgrError:(int)arg1 Task:(id)arg2;
- (void)OnUpdateLocationThumb:(id)arg1 Task:(id)arg2;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)createNewRequest;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (id)operationMenuItems;
- (id)maskLayerWithBounds:(struct CGRect)arg1;
- (void)initLocationThumbImageView;
- (void)initContentBgImageView;
- (void)initTitleLabel;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (void)prepareForReuse;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) LocationMessageViewModel *viewModel; // @dynamic viewModel;

@end

