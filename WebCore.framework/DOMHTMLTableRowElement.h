/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLTableRowElement : DOMHTMLElement
{
}

@property(readonly) int rowIndex;
@property(readonly) int sectionRowIndex;
@property(readonly, retain) DOMHTMLCollection *cells;
@property(copy) NSString *align;
@property(copy) NSString *bgColor;
@property(copy) NSString *ch;
@property(copy) NSString *chOff;
@property(copy) NSString *vAlign;
- (id)insertCell:(int)arg1;
- (void)deleteCell:(int)arg1;

@end

