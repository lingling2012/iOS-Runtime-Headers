/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class NSArray, NSTimer, TPLockTextView;

@interface TPBottomLockBar : TPBottomBar {
    int _currentLabelIndex;
    NSTimer *_cycleLabelTimer;
    id _delegate;
    float _deltaFromDefaultLabelWidth;
    float _fontSize;
    TPLockTextView *_labelView;
    NSArray *_labels;
    id _representedObject;
}

+ (float)defaultLabelFontSize;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (void)_adjustLabelOrigin;
- (BOOL)_canDrawContent;
- (id)_knobImageForColor:(int)arg1;
- (void)_setLabel:(id)arg1;
- (BOOL)_shouldStopLabelAnimationForGrab;
- (BOOL)allowsTouchTrackingBeyondVerticalThreshold;
- (int)currentLabelIndex;
- (void)cycleToLabelAtIndex:(int)arg1;
- (void)cycleToNextLabel;
- (void)dealloc;
- (float)defaultWellWidth;
- (void)downInKnob;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)finishedCyclingLabelOut;
- (float)fontSize;
- (void)freezeKnobInUnlockedPosition;
- (id)initForIncomingCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobColor:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobImage:(id)arg2;
- (BOOL)isAnimating;
- (id)knob;
- (void)knobDragged:(float)arg1;
- (float)knobTrackInsetLeft;
- (float)knobTrackInsetRight;
- (id)labelView;
- (id)labels;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)relock;
- (id)representedObject;
- (void)setDelegate:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setKnobColor:(int)arg1;
- (void)setKnobImage:(id)arg1;
- (void)setKnobWellWidth:(float)arg1;
- (void)setKnobWellWidthToDefault;
- (void)setLabel:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setTextAlpha:(float)arg1;
- (void)slideBack:(BOOL)arg1;
- (float)slideTouchAreaInsetLeft;
- (float)slideTouchAreaInsetRight;
- (void)startAnimating;
- (void)startCyclingLabels;
- (void)stopAnimating;
- (void)stopCyclingLabels;
- (void)unlock;
- (void)upInKnob;
- (BOOL)usesBackgroundImage;
- (id)well;
- (id)wellImageName;

@end
