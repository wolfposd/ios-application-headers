//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "JDLFeedCellParentProtocol.h"
#import "JDLFeedViewModelSourceProtocol.h"

@class JDLFeedFullScreenPreview, JDLFeedTableViewSource, NSString, SWGPost, UIButton, UILabel, UITableView, UIView;

@interface JDLPictureOfTheDayViewController : UIViewController <JDLFeedViewModelSourceProtocol, JDLFeedCellParentProtocol>
{
    CDUnknownBlockType _dismissCompletionBlock;
    SWGPost *_pictureOfTheDayPost;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    UITableView *_pictureTableView;
    UIButton *_okButton;
    UIView *_popupView;
    JDLFeedFullScreenPreview *_fullscreenPreview;
    JDLFeedTableViewSource *_tableViewSource;
}

@property(retain, nonatomic) JDLFeedTableViewSource *tableViewSource; // @synthesize tableViewSource=_tableViewSource;
@property(retain, nonatomic) JDLFeedFullScreenPreview *fullscreenPreview; // @synthesize fullscreenPreview=_fullscreenPreview;
@property(nonatomic) __weak UIView *popupView; // @synthesize popupView=_popupView;
@property(nonatomic) __weak UIButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) __weak UITableView *pictureTableView; // @synthesize pictureTableView=_pictureTableView;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SWGPost *pictureOfTheDayPost; // @synthesize pictureOfTheDayPost=_pictureOfTheDayPost;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionBlock; // @synthesize dismissCompletionBlock=_dismissCompletionBlock;
- (void).cxx_destruct;
- (void)showPostActionsForPostCellViewModel:(id)arg1;
- (void)voteForPostCellViewModel:(id)arg1 upvote:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openChannelForPostCellViewModel:(id)arg1 channel:(id)arg2;
- (void)openHashtagForPostCellViewModel:(id)arg1 hashtag:(id)arg2;
- (void)openPostForPostCellViewModel:(id)arg1;
- (void)configurePopup;
- (unsigned long long)numberOfRowsInSection:(long long)arg1;
- (id)cellViewModelAtIndexPath:(id)arg1;
- (void)didTapOkay:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

