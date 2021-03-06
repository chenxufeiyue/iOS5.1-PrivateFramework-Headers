/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSLocaleController : PSListController
{
    PSSpecifier *_checkedSpecifier;
    BOOL _firstAppearance;
}

- (void)localeChangedAction;
- (id)init;
- (void)dealloc;
- (void)updateChecked:(id)arg1;
- (void)subcategorySelected:(id)arg1 specifier:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)addLanguage:(id)arg1 toSupportedLanguages:(id)arg2;
- (id)specifiers;
- (id)locale:(id)arg1;
- (void)setLocale:(id)arg1 specifier:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end

