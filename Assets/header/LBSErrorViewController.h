//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIImageView, UILabel;

@interface LBSErrorViewController : UIViewController
{
    UILabel *errorMessageLabel;
    UIImageView *m_errorImage;
}

@property(retain, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)setErrorMessage:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

