//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface FTSWebSearchUtil : MMObject
{
}

+ (id)getWebSearchBarTips;
+ (_Bool)isOpenBCSBrandContactEntry;
+ (_Bool)isOpenSuggestionForBASEntry;
+ (_Bool)isOpenSuggestionForBSSEntry;
+ (_Bool)isOpenSuggestionForGlobalEntry:(id)arg1;
+ (void)removeUpdatedH5;
+ (void)removeGuideDataForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2;
+ (void)removeAllGuideData;
+ (id)getSearchGuideDataForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2 andBysinessType:(unsigned long long)arg3;
+ (_Bool)cacheGuideData:(id)arg1 forScene:(unsigned int)arg2 andVersion:(unsigned int)arg3 andBusinessType:(unsigned long long)arg4;
+ (_Bool)cacheGuideData:(id)arg1 forScene:(unsigned int)arg2 andVersion:(unsigned int)arg3;
+ (_Bool)shouldUpdateGuideDataForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2;
+ (id)pathForGuideCacheForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2 andBusinessType:(unsigned long long)arg3;
+ (id)pathForGuideCacheForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2;
+ (id)pathForGuideCacheForScene:(unsigned int)arg1;
+ (id)pathForGuideCache;
+ (id)pathForGuideCacheDir;
+ (id)makeDictionaryFromPath:(id)arg1;
+ (void)reloadDownloadConfig;
+ (void)reloadDefaultConfig;
+ (unsigned int)getVersionForUpdateH5;
+ (unsigned int)getVersionForDefaultH5;
+ (id)pathForUpdatedGuidePage;
+ (id)pathForUpdatedH5;
+ (id)pathForUpdatedH5Dir;
+ (id)pathForH5Root;
+ (id)pathForDefaultH5;
+ (id)pathForMainH5;
+ (unsigned int)getVersion;
+ (_Bool)isUpdatedGuidePageExist;
+ (_Bool)isUpdatedH5Exist;
+ (id)searchTextField:(id)arg1 shouldChangeRange:(struct _NSRange)arg2 replaceText:(id)arg3 shouldNotify:(_Bool *)arg4;
+ (id)formatMultiStageInputText:(id)arg1;

@end

