/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, NSString, UIColor, _UIGraphicsLetterpressStyle, NSAttributedString;

@interface UIButtonContent : NSObject <NSCoding, NSCopying> {
    NSString *title;
    NSAttributedString *attributedTitle;
    UIImage *image;
    UIImage *background;
    UIColor *titleColor;
    UIColor *shadowColor;
}

@property(retain) NSString * title;
@property(retain) NSAttributedString * attributedTitle;
@property(retain) UIImage * image;
@property(retain) UIImage * background;
@property(retain) UIColor * titleColor;
@property(retain) UIColor * shadowColor;
@property(retain) _UIGraphicsLetterpressStyle * letterpressStyle;
@property(readonly) BOOL isEmpty;


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setTitleColor:(id)arg1;
- (id)titleColor;
- (id)attributedTitle;
- (id)letterpressStyle;
- (void)setLetterpressStyle:(id)arg1;
- (id)background;
- (void)setBackground:(id)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (id)image;
- (id)title;
- (BOOL)isEmpty;
- (void)setTitle:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setImage:(id)arg1;

@end