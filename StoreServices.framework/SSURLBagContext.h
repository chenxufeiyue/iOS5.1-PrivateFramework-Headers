/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "SSCoding-Protocol.h"
#import "SSXPCCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface SSURLBagContext : NSObject <SSCoding, SSXPCCoding, NSCopying>
{
    int _bagType;
    NSMutableDictionary *_httpHeaders;
    NSNumber *_userIdentifier;
}

+ (id)contextWithBagType:(int)arg1;
@property(retain, nonatomic) NSNumber *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(nonatomic) int bagType; // @synthesize bagType=_bagType;
- (void *)copyXPCEncoding;
- (id)initWithXPCEncoding:(void *)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)valueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
@property(copy, nonatomic) NSDictionary *allHTTPHeaders;
@property(readonly, nonatomic) NSString *cacheKey;
- (void)dealloc;

@end

