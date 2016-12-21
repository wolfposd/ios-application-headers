//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSDictionary, RACDisposable, RACSubject, UIApplicationShortcutItem;

@interface JDLColdHomeViewController : UIViewController
{
    _Bool _jdlUserConfigDownloaded;
    _Bool _rltConfigurationDownloaded;
    _Bool _rltLocalizationDownloaded;
    NSDictionary *_pushData;
    UIApplicationShortcutItem *_shortcutItem;
    RACDisposable *_maximalDelayDisposable;
    RACSubject *_jdlUserConfigReceived;
    RACSubject *_rltConfigurationReceived;
    RACSubject *_rltLocalizationReceived;
    RACDisposable *_combineLatestDisposable;
}

@property(nonatomic) _Bool rltLocalizationDownloaded; // @synthesize rltLocalizationDownloaded=_rltLocalizationDownloaded;
@property(nonatomic) _Bool rltConfigurationDownloaded; // @synthesize rltConfigurationDownloaded=_rltConfigurationDownloaded;
@property(nonatomic) _Bool jdlUserConfigDownloaded; // @synthesize jdlUserConfigDownloaded=_jdlUserConfigDownloaded;
@property(retain, nonatomic) RACDisposable *combineLatestDisposable; // @synthesize combineLatestDisposable=_combineLatestDisposable;
@property(retain, nonatomic) RACSubject *rltLocalizationReceived; // @synthesize rltLocalizationReceived=_rltLocalizationReceived;
@property(retain, nonatomic) RACSubject *rltConfigurationReceived; // @synthesize rltConfigurationReceived=_rltConfigurationReceived;
@property(retain, nonatomic) RACSubject *jdlUserConfigReceived; // @synthesize jdlUserConfigReceived=_jdlUserConfigReceived;
@property(retain, nonatomic) RACDisposable *maximalDelayDisposable; // @synthesize maximalDelayDisposable=_maximalDelayDisposable;
@property(retain, nonatomic) UIApplicationShortcutItem *shortcutItem; // @synthesize shortcutItem=_shortcutItem;
@property(retain, nonatomic) NSDictionary *pushData; // @synthesize pushData=_pushData;
- (void).cxx_destruct;
- (void)dealloc;
- (void)navigate;
- (void)onJDLUserConfigAppliedNotification:(id)arg1;
- (void)onRLTConfigUpdatedNotification:(id)arg1;
- (void)onRLTLocalizationLanguageDictionaryUpdatedNotification:(id)arg1;
- (void)viewDidLoad;

@end
