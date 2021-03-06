/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, TLCapabilitiesManager;

@interface TLVibrationManager : NSObject
{
    NSDictionary *_vibrationPatterns;
    NSDictionary *_userGeneratedVibrationPatterns;
    id _capabilitiesManager;
    BOOL _allowsAutoRefresh;
    BOOL _needsRefresh;
    BOOL _unitTestingMode;
}

+ (void)_handleSystemVibrationDidChangeNotification;
+ (void)releaseSharedVibrationManager;
+ (id)sharedVibrationManager;
@property(nonatomic) BOOL allowsAutoRefresh; // @synthesize allowsAutoRefresh=_allowsAutoRefresh;
@property(readonly, nonatomic) BOOL needsRefresh; // @synthesize needsRefresh=_needsRefresh;
- (BOOL)_removeAllUserGeneratedVibrationsWithError:(id *)arg1;
- (unsigned int)_numberOfUserGeneratedVibrations;
- (BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id *)arg3;
- (id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (BOOL)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id *)arg2;
- (BOOL)_sendUserGeneratedVibrationPatternsAffectingMessage:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSDictionary *_userGeneratedVibrationPatterns;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (BOOL)vibrationWithIdentifierIsValid:(id)arg1;
- (id)copyUserGeneratedVibrationIdentifiers;
- (id)copyVibrationIdentifiers;
- (id)copyPatternForVibrationWithIdentifier:(id)arg1;
- (id)_copyPatternForVibrationWithIdentifier:(id)arg1;
- (id)copyNameOfVibrationWithIdentifier:(id)arg1;
- (id)_copyNameOfVibrationWithIdentifier:(id)arg1;
- (id)_localizedNameForVibrationWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *_vibrationPatterns;
@property(readonly, nonatomic) BOOL _areCustomVibrationsAllowed;
@property(readonly, nonatomic) TLCapabilitiesManager *_capabilitiesManager;
- (id)noneVibrationName;
- (id)noneVibrationIdentifier;
- (id)defaultVibrationPatternForType:(unsigned int)arg1;
- (id)defaultVibrationNameForType:(unsigned int)arg1;
- (id)defaultVibrationIdentifierForType:(unsigned int)arg1;
- (id)currentVibrationPatternForType:(unsigned int)arg1;
- (id)currentVibrationNameForType:(unsigned int)arg1;
- (id)currentVibrationIdentifierForType:(unsigned int)arg1;
- (void)setCurrentVibrationIdentifier:(id)arg1 forType:(unsigned int)arg2;
- (BOOL)refresh;
- (void)dealloc;
- (id)initWithUnitTestingModeEnabled:(BOOL)arg1;
- (id)init;

@end

