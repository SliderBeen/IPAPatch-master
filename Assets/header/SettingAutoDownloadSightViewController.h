//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMTableViewInfo;

@interface SettingAutoDownloadSightViewController : MMUIViewController
{
    MMTableViewInfo *m_tableViewInfo;
    unsigned int curImgSettingValue;
}

- (void).cxx_destruct;
- (void)saveVideoToLibraryChanged:(id)arg1;
- (void)savePhotoToLibraryChanged:(id)arg1;
- (long long)checkMarkOrNoneWithOption:(unsigned int)arg1 toMatch:(unsigned int)arg2;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (id)init;

@end

