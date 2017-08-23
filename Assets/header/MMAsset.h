//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"

@interface MMAsset : MMObject <NSCopying>
{
    _Bool _m_isNeedOriginImage;
    _Bool _m_isFailedFromIcloud;
    _Bool _m_isLoadingFromIcloud;
    int _sourceForSNSUploadStat;
}

+ (_Bool)isAsset:(id)arg1 CreateWithInSecond:(double)arg2;
+ (struct CGSize)LongImageSizeWithTargetEdge:(double)arg1 originSize:(struct CGSize)arg2;
+ (id)decodeXmlString:(id)arg1;
@property(nonatomic) int sourceForSNSUploadStat; // @synthesize sourceForSNSUploadStat=_sourceForSNSUploadStat;
@property(nonatomic) _Bool m_isLoadingFromIcloud; // @synthesize m_isLoadingFromIcloud=_m_isLoadingFromIcloud;
@property(nonatomic) _Bool m_isFailedFromIcloud; // @synthesize m_isFailedFromIcloud=_m_isFailedFromIcloud;
@property(nonatomic) _Bool m_isNeedOriginImage; // @synthesize m_isNeedOriginImage=_m_isNeedOriginImage;
- (_Bool)getIsEdited;
- (id)getDrawLayerArray;
- (void)setEditedImage:(id)arg1 withDrawLayer:(id)arg2 withEdited:(_Bool)arg3;
- (void)asyncGetMetadata:(CDUnknownBlockType)arg1;
- (void)stopGetBigImageICloudActivity;
- (void)stopICloudActivity;
- (struct CGSize)getImageRatioSize;
- (id)getCreatedDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)asyncGetVideoFileSizeWithBlock:(CDUnknownBlockType)arg1;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (id)getVideoUrl;
- (void)getVideoDurationForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (id)videoDuration;
- (_Bool)isTimeLapseVideo;
- (_Bool)isSlowMotionVideo;
- (_Bool)isVideo;
- (id)getOriginImageDataSize;
- (_Bool)isGif;
- (_Bool)isPicture;
- (id)encodeXmlString;
- (double)longitude;
- (double)latitude;
- (_Bool)hasLocation;
- (id)alAssetReferenceUrl;
- (id)assetUrl;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (id)getThumbnail;
- (id)getThumbImage;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2 ErrorBlock:(CDUnknownBlockType)arg3;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(_Bool)arg2;

@end

