//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ObjectBeanBase.h"

@class NSString;

@interface ReleaseJobTypeBean : ObjectBeanBase
{
    NSString *_job_type_id;
    NSString *_job_type_name;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *job_type_name; // @synthesize job_type_name=_job_type_name;
@property(copy, nonatomic) NSString *job_type_id; // @synthesize job_type_id=_job_type_id;
- (void).cxx_destruct;

@end

