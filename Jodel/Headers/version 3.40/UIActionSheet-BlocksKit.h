//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActionSheet.h"

#import "UIActionSheetDelegate.h"

@class NSString;

@interface UIActionSheet (BlocksKit) <UIActionSheetDelegate>
+ (id)bk_actionSheetWithTitle:(id)arg1;
+ (void)load;
@property(copy, nonatomic, setter=bk_setCancelBlock:) CDUnknownBlockType bk_cancelBlock;
- (CDUnknownBlockType)bk_handlerForButtonAtIndex:(long long)arg1;
- (void)bk_setHandler:(CDUnknownBlockType)arg1 forButtonAtIndex:(long long)arg2;
- (long long)bk_setCancelButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (long long)bk_setDestructiveButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (long long)bk_addButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)bk_initWithTitle:(id)arg1;

// Remaining properties
@property(copy, nonatomic, setter=bk_setDidDismissBlock:) CDUnknownBlockType bk_didDismissBlock; // @dynamic bk_didDismissBlock;
@property(copy, nonatomic, setter=bk_setDidShowBlock:) CDUnknownBlockType bk_didShowBlock; // @dynamic bk_didShowBlock;
@property(copy, nonatomic, setter=bk_setWillDismissBlock:) CDUnknownBlockType bk_willDismissBlock; // @dynamic bk_willDismissBlock;
@property(copy, nonatomic, setter=bk_setWillShowBlock:) CDUnknownBlockType bk_willShowBlock; // @dynamic bk_willShowBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

