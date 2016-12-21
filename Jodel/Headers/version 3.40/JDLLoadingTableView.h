//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class UIActivityIndicatorView, UILabel;

@interface JDLLoadingTableView : UITableView
{
    _Bool _showEmptyLabel;
    UIActivityIndicatorView *_loadingIndicatorView;
    long long _footerIndicatorStyle;
    UILabel *_tableViewEmptyLabel;
}

@property(nonatomic) _Bool showEmptyLabel; // @synthesize showEmptyLabel=_showEmptyLabel;
@property(retain, nonatomic) UILabel *tableViewEmptyLabel; // @synthesize tableViewEmptyLabel=_tableViewEmptyLabel;
@property(nonatomic) long long footerIndicatorStyle; // @synthesize footerIndicatorStyle=_footerIndicatorStyle;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
- (void).cxx_destruct;
- (void)stopRefreshing;
- (void)startRefreshing;
- (void)layoutSubviews;
- (double)getVisibleTableHeight;
- (void)adjustEmptyLabelPosition;
- (void)adjustSizeOfLoadingIndicator;
- (void)setupEmptyTableView;
- (void)setupLoadingIndicator;
- (void)hideEmptyLabelAnimated;
- (void)showEmptyLabelAnimated;
- (void)removeFooterActivityAnimated;
- (void)removeFooterActivity;
- (void)setFooterLoadingIndicatorStyle:(long long)arg1;
- (void)showFooterActivity;
- (void)refreshEmptyLabelStatus;
- (void)setEmptyTableLabel:(id)arg1;
- (void)showEmptyTableLabel:(_Bool)arg1;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
