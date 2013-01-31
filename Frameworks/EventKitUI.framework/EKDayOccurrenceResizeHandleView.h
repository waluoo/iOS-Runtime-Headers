/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIColor, EKDayOccurrenceView;

@interface EKDayOccurrenceResizeHandleView : UIView  {
    UIColor *_baseColor;
    EKDayOccurrenceView *_occurrenceView;
}

@property(retain) UIColor * baseColor;
@property(readonly) EKDayOccurrenceView * occurrenceView;


- (void)dealloc;
- (id)baseColor;
- (void)willMoveToSuperview:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)occurrenceView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_circleRect;
- (void)setBaseColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 occurrenceView:(id)arg2;

@end