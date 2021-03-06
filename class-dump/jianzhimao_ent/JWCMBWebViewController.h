//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseWebViewController.h"

@class UIView;

@interface JWCMBWebViewController : BaseWebViewController
{
    CDUnknownBlockType _callback;
    UIView *_cmbKeyboardCoverView;
}

@property(retain, nonatomic) UIView *cmbKeyboardCoverView; // @synthesize cmbKeyboardCoverView=_cmbKeyboardCoverView;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)handleSingleTap:(id)arg1;
- (void)back:(id)arg1;
- (void)hiddenKeyboard;
- (void)showKeyboardWith:(id)arg1 andRequest:(id)arg2;
- (void)setCMBCallback:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

