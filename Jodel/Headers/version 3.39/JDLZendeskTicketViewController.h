//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "WKUIWebViewDelegate.h"

@class JDLLoadingWebView, NSString, NSURL;

@interface JDLZendeskTicketViewController : UIViewController <WKUIWebViewDelegate>
{
    _Bool _shouldPopWebView;
    JDLLoadingWebView *_webView;
    NSURL *_urlToLoad;
}

@property(nonatomic) _Bool shouldPopWebView; // @synthesize shouldPopWebView=_shouldPopWebView;
@property(copy, nonatomic) NSURL *urlToLoad; // @synthesize urlToLoad=_urlToLoad;
@property(nonatomic) __weak JDLLoadingWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (id)javaScriptToEvaluate;
- (id)composeClientInformation;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (id)zendeskInfoFieldID;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
