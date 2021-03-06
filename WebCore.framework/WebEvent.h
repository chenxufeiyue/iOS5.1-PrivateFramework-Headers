/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface WebEvent : NSObject
{
    int _type;
    double _timestamp;
    struct CGPoint _locationInWindow;
    NSString *_characters;
    NSString *_charactersIgnoringModifiers;
    unsigned int _modifierFlags;
    BOOL _keyRepeating;
    BOOL _popupVariant;
    unsigned short _keyCode;
    BOOL _tabKey;
    int _characterSet;
    float _deltaX;
    float _deltaY;
    unsigned int _touchCount;
    NSArray *_touchLocations;
    NSArray *_touchGlobalLocations;
    NSArray *_touchIdentifiers;
    NSArray *_touchPhases;
    BOOL _isGesture;
    float _gestureScale;
    float _gestureRotation;
}

- (id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint)arg3;
- (id)initWithScrollWheelEventWithTimeStamp:(double)arg1 location:(struct CGPoint)arg2 deltaX:(float)arg3 deltaY:(float)arg4;
- (id)initWithTouchEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint)arg3 modifiers:(unsigned int)arg4 touchCount:(unsigned int)arg5 touchLocations:(id)arg6 touchGlobalLocations:(id)arg7 touchIdentifiers:(id)arg8 touchPhases:(id)arg9 isGesture:(BOOL)arg10 gestureScale:(float)arg11 gestureRotation:(float)arg12;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(BOOL)arg6 isPopupVariant:(BOOL)arg7 keyCode:(unsigned short)arg8 isTabKey:(BOOL)arg9 characterSet:(int)arg10;
- (void)dealloc;
- (id)_typeDescription;
- (id)_modiferFlagsDescription;
- (id)_characterSetDescription;
- (id)_touchLocationsDescription:(id)arg1;
- (id)_touchIdentifiersDescription;
- (id)_touchPhaseDescription:(int)arg1;
- (id)_touchPhasesDescription;
- (id)_eventDescription;
- (id)description;
@property(readonly, nonatomic) struct CGPoint locationInWindow;
@property(readonly, retain, nonatomic) NSString *characters;
@property(readonly, retain, nonatomic) NSString *charactersIgnoringModifiers;
@property(readonly, nonatomic) unsigned int modifierFlags;
@property(readonly, nonatomic, getter=isKeyRepeating) BOOL keyRepeating;
@property(readonly, nonatomic, getter=isPopupVariant) BOOL popupVariant;
@property(readonly, nonatomic) unsigned short keyCode;
@property(readonly, nonatomic, getter=isTabKey) BOOL tabKey;
@property(readonly, nonatomic) int characterSet;
@property(readonly, nonatomic) float deltaX;
@property(readonly, nonatomic) float deltaY;
@property(readonly, nonatomic) unsigned int touchCount;
@property(readonly, retain, nonatomic) NSArray *touchLocations;
@property(readonly, retain, nonatomic) NSArray *touchGlobalLocations;
@property(readonly, retain, nonatomic) NSArray *touchIdentifiers;
@property(readonly, retain, nonatomic) NSArray *touchPhases;
@property(readonly, nonatomic) BOOL isGesture;
@property(readonly, nonatomic) float gestureScale;
@property(readonly, nonatomic) float gestureRotation;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) int type; // @synthesize type=_type;

@end

