//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseCell.h"

@class UIImageView, UILabel;

@interface TrusteeshipConditionStateListCell : BaseCell
{
    UIImageView *_iconView;
    UILabel *_timeLab;
    UILabel *_stateLab;
}

@property(retain, nonatomic) UILabel *stateLab; // @synthesize stateLab=_stateLab;
@property(retain, nonatomic) UILabel *timeLab; // @synthesize timeLab=_timeLab;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateStatusLabel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
