//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseModel.h"

@class NSString;

@interface NotificationModel : BaseModel
{
    NSString *_identifity;
    long long _tag;
    unsigned long long _notificationType;
    id _object;
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) unsigned long long notificationType; // @synthesize notificationType=_notificationType;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *identifity; // @synthesize identifity=_identifity;
- (void).cxx_destruct;

@end

