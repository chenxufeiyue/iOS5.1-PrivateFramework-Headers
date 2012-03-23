/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSConditionLock, NSMutableArray;

@interface VSRecognitionResultHandlingThread : NSObject
{
    id <VSRecognitionResultHandlingThreadDelegate> _delegate;
    NSMutableArray *_requests;
    NSConditionLock *_lock;
    struct {
        unsigned int running:1;
        unsigned int delegateDidHandleResults:1;
        unsigned int valid:1;
    } _resultHandlingFlags;
}

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)handleResults:(id)arg1 withHandler:(id)arg2;
- (void)invalidate;
- (void)_notifyRequestHandled:(id)arg1;
- (void)_handleRequests;

@end
