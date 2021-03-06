/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class CKMessagePart, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface CKBalloonView : UIView
{
    id _delegate;
    id <CKBalloonViewActionDelegate> _actionDelegate;
    int _orientation;
    int _outgoingColor;
    float _tightenedWidth;
    CKMessagePart *_messagePart;
    NSString *_subject;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_oneFingerDoubleTapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    NSString *_balloonCacheKey;
    unsigned int _hasSolidBackground:1;
    unsigned int _balloonHighlighted:1;
    unsigned int _preview:1;
    unsigned int _isIgnoringSingleTap:1;
    unsigned int _calloutRegistered:1;
    unsigned int _tapEnabled:1;
    unsigned int _isEditing:1;
}

+ (float)fixedHeight;
+ (void)flushBalloonImageCache;
+ (struct CGSize)defaultSize;
+ (BOOL)needsSingleTapGestureRecognizer;
+ (BOOL)showsSubject;
+ (struct CGSize)balloonSizeConstrainedToWidth:(float)arg1 text:(id)arg2 subject:(id)arg3 textBalloonSize:(struct CGSize *)arg4 subjectBalloonSize:(struct CGSize *)arg5;
+ (float)heightForText:(id)arg1 width:(float)arg2 subject:(id)arg3;
+ (struct CGSize)sizeForMessagePart:(id)arg1 width:(float)arg2 withSubject:(BOOL)arg3;
+ (struct CGPoint)entryFieldBalloonOffset;
+ (float)entryFieldBalloonAdditionalHeight;
+ (float)heightForText:(id)arg1 width:(float)arg2 includeBuffers:(BOOL)arg3;
+ (struct CGContext *)sharedSizingContext;
+ (id)_tintImage:(id)arg1 withColor:(id)arg2;
+ (struct UIEdgeInsets)contentInsetsForBalloonOrientation:(int)arg1;
+ (BOOL)usesColoredBalloon;
@property(nonatomic) BOOL isEditing;
- (void)setPreview:(BOOL)arg1;
- (BOOL)isPreview;
- (void)copy:(id)arg1;
- (void)sendAsTextMessage:(id)arg1;
- (void)_stopIgnoringSingleTapGesture;
- (void)_temporarilyIgnoreSingleTapGesture;
- (void)calloutWillHide:(id)arg1;
- (void)restoreBalloonStateAfterRotation;
- (void)_toggleCopyCallout;
- (void)hideCopyCallout;
- (void)_hideCopyCallout;
- (void)_showCopyCallout;
- (void)copyToPasteboard;
@property(nonatomic, getter=isBalloonHighlighted) BOOL balloonHighlighted;
@property(nonatomic) int outgoingColor; // @synthesize outgoingColor=_outgoingColor;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)flashHighlight;
- (BOOL)shouldHaveAccessoryDiclosure;
- (void)oneFingerDoubleTap:(id)arg1;
- (void)longPressGesture:(id)arg1;
- (void)singleTap:(id)arg1;
- (void)setupSingleTapRecognizerOnView:(id)arg1;
- (void)_setupGestureRecognizers;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)_clearCacheKey;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (void)setComposition:(id)arg1;
- (void)setText:(id)arg1;
- (id)messagePart;
- (void)setMessagePart:(id)arg1;
- (id)text;
- (void)setFrame:(struct CGRect)arg1;
- (void)setTapEnabled:(BOOL)arg1;
- (void)setEnableSingleTap:(BOOL)arg1;
- (BOOL)isTapEnabled;
- (float)tightenedWidth;
- (void)tighten;
- (id)_cachedImageForBalloonImage:(id)arg1 makeStrechable:(BOOL)arg2;
- (void)drawBalloonImage:(id)arg1 inRect:(struct CGRect)arg2;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets;
- (struct CGRect)_tightenedBounds;
- (struct CGRect)contentBounds;
- (struct CGRect)balloonBounds;
- (id)textShadowColor;
- (void)updateTextShadowColor;
- (void)updateTextColor;
- (id)__bubbleImageStretchable:(BOOL)arg1;
- (BOOL)_canUseLayerBackedBalloon;
- (void)updateBubbleContents;
- (void)drawRect:(struct CGRect)arg1;
- (void)manuallyDrawBackgroundInRect:(struct CGRect)arg1;
- (BOOL)shouldManuallyDrawBackground;
- (BOOL)isSubjectAndTextBalloon;
- (void)prepareForReuse;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)_becomeFirstResponderWhenPossible;
- (void)_windowBecameKey;
- (void)_windowResignedKey;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)dealloc;
@property(nonatomic) id <CKBalloonViewActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;

@end

