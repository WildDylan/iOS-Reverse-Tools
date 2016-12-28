//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AJPopupView.h"

@class TimePicker;

@interface AJTimeSelectView : AJPopupView
{
    id <AJTimeSelectViewDelegate> _delegate;
    TimePicker *_timePicker;
}

@property(retain, nonatomic) TimePicker *timePicker; // @synthesize timePicker=_timePicker;
@property(nonatomic) __weak id <AJTimeSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)show;
- (void)btnClick:(id)arg1;
- (void)setupButton;
- (void)setupTimePicker;
- (void)setupCustomView;
- (id)init;

@end
