//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface RoundProgressView : UIView
{
    UIColor *_bigRoundColor;
    UIColor *_smallRoundColor;
    double _bigRoundBorderWidth;
    double _smallRoundBorderWidth;
    double _bigRoundRatio;
}

@property(nonatomic) double bigRoundRatio; // @synthesize bigRoundRatio=_bigRoundRatio;
@property(nonatomic) double smallRoundBorderWidth; // @synthesize smallRoundBorderWidth=_smallRoundBorderWidth;
@property(nonatomic) double bigRoundBorderWidth; // @synthesize bigRoundBorderWidth=_bigRoundBorderWidth;
@property(retain, nonatomic) UIColor *smallRoundColor; // @synthesize smallRoundColor=_smallRoundColor;
@property(retain, nonatomic) UIColor *bigRoundColor; // @synthesize bigRoundColor=_bigRoundColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
