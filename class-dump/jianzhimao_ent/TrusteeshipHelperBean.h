//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChatBaseBean.h"

@class NSString;

@interface TrusteeshipHelperBean : ChatBaseBean
{
    long long _service_type;
    long long _push_code;
    NSString *_push_content;
    NSString *_push_title;
    long long _status;
    long long _trusteeship_id;
    long long _win_code;
    NSString *_win_content;
    NSString *_win_title;
}

@property(retain, nonatomic) NSString *win_title; // @synthesize win_title=_win_title;
@property(retain, nonatomic) NSString *win_content; // @synthesize win_content=_win_content;
@property(nonatomic) long long win_code; // @synthesize win_code=_win_code;
@property(nonatomic) long long trusteeship_id; // @synthesize trusteeship_id=_trusteeship_id;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *push_title; // @synthesize push_title=_push_title;
@property(retain, nonatomic) NSString *push_content; // @synthesize push_content=_push_content;
@property(nonatomic) long long push_code; // @synthesize push_code=_push_code;
@property(nonatomic) long long service_type; // @synthesize service_type=_service_type;
- (void).cxx_destruct;

@end

