//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMMLanguageMgrExt-Protocol.h"
#import "IMMRegionPackageDownloadMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableArray, NSString, SafeDictionaryWrap;

@interface MMRegionCodeMgr : MMService <MMService, IMMRegionPackageDownloadMgrExt, IMMLanguageMgrExt>
{
    SafeDictionaryWrap *m_regionDict;
    NSMutableArray *m_pickedRegionAry;
}

+ (int)numberOfOccurrencesOfString:(id)arg1 inString:(id)arg2;
+ (id)encodeCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (void).cxx_destruct;
- (_Bool)isProvinceMO:(id)arg1;
- (_Bool)isProvinceHK:(id)arg1;
- (_Bool)isProvinceTW:(id)arg1;
- (_Bool)isCountryMO:(id)arg1;
- (_Bool)isCountryHK:(id)arg1;
- (_Bool)isCountryTW:(id)arg1;
- (_Bool)isZhCN:(id)arg1;
- (void)removePickedResult;
- (id)getPickedResult;
- (void)popupData;
- (void)pushData:(id)arg1;
- (void)onLanguageChange;
- (void)onRegionPackageUpdated;
- (_Bool)saveStirng:(id)arg1 toFileForLang:(id)arg2;
- (id)readRegionCodeFileForLang:(id)arg1;
- (void)trySplitRegionCodeFile:(id)arg1;
- (void)splitRegionCodeFile:(id)arg1;
- (id)getRegionCodeLangForCurLang:(id)arg1;
- (id)getLanguagePrefixByLanguage:(id)arg1;
- (id)getChildrenOfCode:(id)arg1;
- (id)getCountries;
- (id)getRegionCodeFromString:(id)arg1 type:(int)arg2;
- (id)getValueForKey:(id)arg1;
- (id)getDisplayRegionWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (void)dealloc;
- (void)setRegionDictForCurLang;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

