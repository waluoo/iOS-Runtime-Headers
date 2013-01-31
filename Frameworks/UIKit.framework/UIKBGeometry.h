/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {
    NSString *m_name;
    struct { 
        float amount; 
        int unit; 
    } m_x;
    struct { 
        float amount; 
        int unit; 
    } m_y;
    struct { 
        float amount; 
        int unit; 
    } m_w;
    struct { 
        float amount; 
        int unit; 
    } m_h;
    struct { 
        float amount; 
        int unit; 
    } m_paddingTop;
    struct { 
        float amount; 
        int unit; 
    } m_paddingLeft;
    struct { 
        float amount; 
        int unit; 
    } m_paddingBottom;
    struct { 
        float amount; 
        int unit; 
    } m_paddingRight;
    BOOL m_explicitlySpecified;
}

@property(retain) NSString * name;
@property(setter=setX:) struct { float x1; int x2; } x;
@property(setter=setY:) struct { float x1; int x2; } y;
@property(setter=setW:) struct { float x1; int x2; } w;
@property(setter=setH:) struct { float x1; int x2; } h;
@property(setter=setPaddingTop:) struct { float x1; int x2; } paddingTop;
@property(setter=setPaddingLeft:) struct { float x1; int x2; } paddingLeft;
@property(setter=setPaddingBottom:) struct { float x1; int x2; } paddingBottom;
@property(setter=setPaddingRight:) struct { float x1; int x2; } paddingRight;
@property BOOL explicitlySpecified;

+ (id)geometryWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)geometry;

- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)usesPercentages;
- (id)initWithName:(id)arg1 rect:(struct { struct { float x_1_1_1; int x_1_1_2; } x1[4]; })arg2 padding:(struct { struct { float x_1_1_1; int x_1_1_2; } x1[4]; })arg3;
- (struct { float x1; int x2; })h;
- (struct { float x1; int x2; })w;
- (void)setH:(struct { float x1; int x2; })arg1;
- (void)setW:(struct { float x1; int x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameWithContainingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)overrideGeometry:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paddedFrameWithContainingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)explicitlySpecified;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paddedFrameWithResolvedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setExplicitlySpecified:(BOOL)arg1;
- (id)shortDescription;
- (void)setY:(struct { float x1; int x2; })arg1;
- (struct { float x1; int x2; })y;
- (void)setX:(struct { float x1; int x2; })arg1;
- (struct { float x1; int x2; })x;
- (void)setPaddingRight:(struct { float x1; int x2; })arg1;
- (void)setPaddingBottom:(struct { float x1; int x2; })arg1;
- (void)setPaddingTop:(struct { float x1; int x2; })arg1;
- (void)setPaddingLeft:(struct { float x1; int x2; })arg1;
- (struct { float x1; int x2; })paddingBottom;
- (struct { float x1; int x2; })paddingRight;
- (struct { float x1; int x2; })paddingTop;
- (struct { float x1; int x2; })paddingLeft;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end