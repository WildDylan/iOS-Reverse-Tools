//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSString, UIImageView, UIView;

@interface BaseNavgationViewController : UINavigationController <UIGestureRecognizerDelegate>
{
    struct CGPoint startTouch;
    UIImageView *lastScreenShotView;
    UIView *blackMask;
    _Bool _canDragBack;
    _Bool _isMoving;
    UIView *_backgroundView;
    NSMutableArray *_screenShotsList;
    NSMutableArray *_exceptionArray;
    NSMutableArray *_noDragBackVCArray;
}

@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(retain, nonatomic) NSMutableArray *noDragBackVCArray; // @synthesize noDragBackVCArray=_noDragBackVCArray;
@property(retain, nonatomic) NSMutableArray *exceptionArray; // @synthesize exceptionArray=_exceptionArray;
@property(retain, nonatomic) NSMutableArray *screenShotsList; // @synthesize screenShotsList=_screenShotsList;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool canDragBack; // @synthesize canDragBack=_canDragBack;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)paningGestureReceive:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)moveViewWithX:(float)arg1;
- (id)capture;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)initExceptionArray;
- (void)initNoDragBackVCArray;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

