//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDLNetworkCheckingBaseViewController.h"

@class NSString, RACSubject, UIButton, UILabel, UIView;

@interface JDLHomeMapPopupsViewController : JDLNetworkCheckingBaseViewController
{
    _Bool _showSecondAlertAtStart;
    RACSubject *_pressedSetHome;
    RACSubject *_confirmedSetHome;
    NSString *_userCity;
    UIView *_firstAlertContainer;
    UIView *_secondAlertContainer;
    UIView *_firstAlertLoadingView;
    UILabel *_firstAlertTitleLabel;
    UILabel *_firstAlertContentLabel;
    UIButton *_firstAlertYesButton;
    UIButton *_firstAlertNoButton;
    UILabel *_secondAlertTitleLabel;
    UILabel *_secondAlertContentLabel;
    UIButton *_secondAlertOkLabel;
}

@property(nonatomic) __weak UIButton *secondAlertOkLabel; // @synthesize secondAlertOkLabel=_secondAlertOkLabel;
@property(nonatomic) __weak UILabel *secondAlertContentLabel; // @synthesize secondAlertContentLabel=_secondAlertContentLabel;
@property(nonatomic) __weak UILabel *secondAlertTitleLabel; // @synthesize secondAlertTitleLabel=_secondAlertTitleLabel;
@property(nonatomic) __weak UIButton *firstAlertNoButton; // @synthesize firstAlertNoButton=_firstAlertNoButton;
@property(nonatomic) __weak UIButton *firstAlertYesButton; // @synthesize firstAlertYesButton=_firstAlertYesButton;
@property(nonatomic) __weak UILabel *firstAlertContentLabel; // @synthesize firstAlertContentLabel=_firstAlertContentLabel;
@property(nonatomic) __weak UILabel *firstAlertTitleLabel; // @synthesize firstAlertTitleLabel=_firstAlertTitleLabel;
@property(nonatomic) __weak UIView *firstAlertLoadingView; // @synthesize firstAlertLoadingView=_firstAlertLoadingView;
@property(nonatomic) __weak UIView *secondAlertContainer; // @synthesize secondAlertContainer=_secondAlertContainer;
@property(nonatomic) __weak UIView *firstAlertContainer; // @synthesize firstAlertContainer=_firstAlertContainer;
@property(copy, nonatomic) NSString *userCity; // @synthesize userCity=_userCity;
@property(retain, nonatomic) RACSubject *confirmedSetHome; // @synthesize confirmedSetHome=_confirmedSetHome;
@property(retain, nonatomic) RACSubject *pressedSetHome; // @synthesize pressedSetHome=_pressedSetHome;
@property(nonatomic) _Bool showSecondAlertAtStart; // @synthesize showSecondAlertAtStart=_showSecondAlertAtStart;
- (void).cxx_destruct;
- (void)showConfirmationAlert;
- (void)secondAlertOkTapped:(id)arg1;
- (void)firstAlertNoTapped:(id)arg1;
- (id)formattedAttributedStringForText:(id)arg1;
- (void)refreshLabels;
- (void)firstAlertYesTapped:(id)arg1;
- (void)showFirstAlertLoading:(_Bool)arg1;
- (void)setShadowForView:(id)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;

@end

