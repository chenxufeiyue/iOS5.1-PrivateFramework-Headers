/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSString;

@interface LBSName : PBCodable
{
    NSString *_text;
    NSString *_language;
    CDStruct_56d48c16 _flags;
    BOOL _hasRouteDirection;
    int _routeDirection;
    NSString *_rawText;
    NSString *_shortText;
}

@property(retain, nonatomic) NSString *shortText; // @synthesize shortText=_shortText;
@property(retain, nonatomic) NSString *rawText; // @synthesize rawText=_rawText;
@property(nonatomic) BOOL hasRouteDirection; // @synthesize hasRouteDirection=_hasRouteDirection;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasShortText;
@property(readonly, nonatomic) BOOL hasRawText;
@property(nonatomic) int routeDirection; // @synthesize routeDirection=_routeDirection;
- (void)setFlags:(int *)arg1 count:(unsigned int)arg2;
- (int)flagAtIndex:(unsigned int)arg1;
- (void)addFlag:(int)arg1;
- (void)clearFlags;
@property(readonly, nonatomic) int *flags;
@property(readonly, nonatomic) unsigned int flagsCount;
@property(readonly, nonatomic) BOOL hasLanguage;
- (void)dealloc;

@end

