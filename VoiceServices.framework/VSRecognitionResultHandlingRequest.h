/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, VSRecognitionAction;

@interface VSRecognitionResultHandlingRequest : NSObject
{
    id <VSRecognitionResultHandler> _handler;
    NSArray *_results;
    VSRecognitionAction *_action;
}

- (id)initWithHandler:(id)arg1 results:(id)arg2;
- (void)dealloc;
- (id)results;
- (id)handler;
- (void)setNextAction:(id)arg1;
- (id)nextAction;

@end
