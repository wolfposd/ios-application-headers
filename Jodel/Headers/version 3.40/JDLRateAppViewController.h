//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MFMailComposeViewControllerDelegate.h"

@class NSString, UIButton;

@interface JDLRateAppViewController : UIViewController <MFMailComposeViewControllerDelegate>
{
    int _mark;
    int _minAppStoreRaiting;
    UIButton *_star1;
    UIButton *_star2;
    UIButton *_star3;
    UIButton *_star4;
    UIButton *_star5;
    NSString *_email;
}

@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) int minAppStoreRaiting; // @synthesize minAppStoreRaiting=_minAppStoreRaiting;
@property(nonatomic) int mark; // @synthesize mark=_mark;
@property(retain, nonatomic) UIButton *star5; // @synthesize star5=_star5;
@property(retain, nonatomic) UIButton *star4; // @synthesize star4=_star4;
@property(retain, nonatomic) UIButton *star3; // @synthesize star3=_star3;
@property(retain, nonatomic) UIButton *star2; // @synthesize star2=_star2;
@property(retain, nonatomic) UIButton *star1; // @synthesize star1=_star1;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)sendMail;
- (_Bool)canSendMail;
- (void)animateRateStars;
- (void)dismissAfterMailSent;
- (void)markRated;
- (void)hideRating;
- (void)redirectToRateApp;
- (void)close;
- (void)rateApp;
- (void)setRating:(id)arg1;
- (void)setupControls;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
