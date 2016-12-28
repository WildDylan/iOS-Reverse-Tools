//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class CorePagesBarBtn, CorePagesViewConfig, NSArray, UIFont, UIView;

@interface CorePagesBarView : UIScrollView
{
    _Bool _hasSelectedFirstBtn;
    _Bool _pageChangeMax;
    NSArray *_pageModels;
    unsigned long long _page;
    CDUnknownBlockType _btnActionBlock;
    CorePagesViewConfig *_config;
    UIFont *_barFont;
    NSArray *_btns;
    CorePagesBarBtn *_selectedBtn;
    UIView *_lineView;
}

@property(nonatomic) _Bool pageChangeMax; // @synthesize pageChangeMax=_pageChangeMax;
@property(nonatomic) _Bool hasSelectedFirstBtn; // @synthesize hasSelectedFirstBtn=_hasSelectedFirstBtn;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) CorePagesBarBtn *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) NSArray *btns; // @synthesize btns=_btns;
@property(retain, nonatomic) UIFont *barFont; // @synthesize barFont=_barFont;
@property(retain, nonatomic) CorePagesViewConfig *config; // @synthesize config=_config;
@property(copy, nonatomic) CDUnknownBlockType btnActionBlock; // @synthesize btnActionBlock=_btnActionBlock;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSArray *pageModels; // @synthesize pageModels=_pageModels;
- (void).cxx_destruct;
- (void)adjustLineViewFrameWithBtn:(id)arg1 isFirstBtn:(_Bool)arg2;
- (void)scrollViewFitContentOffsetWithBtnSelected;
- (void)btnClick:(id)arg1;
- (void)layoutSubviews;
- (void)btnsPrepare;
- (void)dealloc;
- (void)screenRotate;
- (void)awakeFromNib;

@end
