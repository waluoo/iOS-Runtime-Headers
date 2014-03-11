/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIPickerView, UIView, _UIBackdropView;

@interface SKUIPickerWrapperView : UIView {
    _UIBackdropView *_backdropView;
    UIPickerView *_pickerView;
    UIView *_separatorView;
}

@property(readonly) UIPickerView * pickerView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pickerView;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end