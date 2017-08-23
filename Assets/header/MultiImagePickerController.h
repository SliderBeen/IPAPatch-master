//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIImagePickerController.h"

#import "PickedImagePaneDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSDictionary, NSString, PickedImagePane;
@protocol MultiImagePickerControllerDelegate;

@interface MultiImagePickerController : MMUIImagePickerController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, PickedImagePaneDelegate>
{
    id <MultiImagePickerControllerDelegate> _mpdelegate;
    PickedImagePane *_imagePane;
    unsigned int _maxSelectNum;
    NSDictionary *_imageInfo;
    _Bool _isStatusbarHidden;
}

@property(nonatomic) unsigned int _maxSelectNum; // @synthesize _maxSelectNum;
@property(nonatomic) __weak id <MultiImagePickerControllerDelegate> _mpdelegate; // @synthesize _mpdelegate;
- (void).cxx_destruct;
- (void)MultiImagePickerPreviewViewFinishSelectingImages:(id)arg1;
- (void)pickedImagePaneDidFinishPickingImages:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)removeImages;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

