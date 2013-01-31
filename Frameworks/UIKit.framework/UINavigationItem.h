/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINavigationBar, UIImageView, UIView, UIBarButtonItem, NSString, NSMutableDictionary, NSArray;

@interface UINavigationItem : NSObject <NSCoding> {
    NSString *_title;
    NSString *_backButtonTitle;
    UIBarButtonItem *_backBarButtonItem;
    NSString *_prompt;
    int _tag;
    id _context;
    UINavigationBar *_navigationBar;
    UIView *_defaultTitleView;
    UIView *_titleView;
    UIView *_backButtonView;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    NSArray *_customLeftViews;
    NSArray *_customRightViews;
    BOOL _hidesBackButton;
    BOOL _leftItemsSupplementBackButton;
    UIImageView *_frozenTitleView;
    BOOL _barStyleIndependent;
    int _independentBarStyle;
    NSArray *_leftItemSpaceList;
    NSArray *_rightItemSpaceList;
    unsigned int _leftFlexibleSpaceCount;
    unsigned int _rightFlexibleSpaceCount;
    NSMutableDictionary *_backgroundImages;
}

@property(copy) NSString * title;
@property(retain) UIBarButtonItem * backBarButtonItem;
@property(retain) UIView * titleView;
@property(copy) NSString * prompt;
@property BOOL hidesBackButton;
@property(copy) NSArray * leftBarButtonItems;
@property(copy) NSArray * rightBarButtonItems;
@property BOOL leftItemsSupplementBackButton;
@property(retain) UIBarButtonItem * leftBarButtonItem;
@property(retain) UIBarButtonItem * rightBarButtonItem;
@property(getter=_isBarStyleIndependent,setter=_setBarStyleIndependent:) BOOL _barStyleIndependent;
@property(setter=_setIndependentBarStyle:) int _independentBarStyle;
@property(setter=_setLeftFlexibleSpaceCount:) unsigned int _leftFlexibleSpaceCount;
@property(setter=_setRightFlexibleSpaceCount:) unsigned int _rightFlexibleSpaceCount;
@property(setter=_setLeftItemSpaceList:,copy) NSArray * _leftItemSpaceList;
@property(setter=_setRightItemSpaceList:,copy) NSArray * _rightItemSpaceList;
@property(readonly) NSMutableDictionary * _backgroundImages;

+ (id)defaultFont;

- (void)dealloc;
- (unsigned int)_rightFlexibleSpaceCount;
- (unsigned int)_leftFlexibleSpaceCount;
- (id)_rightItemSpaceList;
- (id)_leftItemSpaceList;
- (int)_independentBarStyle;
- (BOOL)_isBarStyleIndependent;
- (id)_independentShadowImage;
- (id)_independentBackgroundImageForBarMetrics:(int)arg1;
- (void)_setIndependentBackgroundImage:(id)arg1 shadowImage:(id)arg2 forBarMetrics:(int)arg3;
- (BOOL)leftItemsSupplementBackButton;
- (void)_setIndependentBarStyle:(int)arg1;
- (void)setCustomRightItem:(id)arg1 animated:(BOOL)arg2;
- (id)customRightItem;
- (void)setCustomRightItem:(id)arg1;
- (void)setCustomLeftItem:(id)arg1 animated:(BOOL)arg2;
- (id)customLeftItem;
- (void)setCustomLeftItem:(id)arg1;
- (id)customTitleView;
- (void)setCustomTitleView:(id)arg1;
- (id)_titleView;
- (void)_updateViewsForBarSizeChangeAndApply:(BOOL)arg1;
- (void)setLeftItemsSupplementBackButton:(BOOL)arg1;
- (id)_leftBarButtonItems;
- (id)_rightBarButtonItems;
- (id)rightBarButtonItems;
- (void)setRightBarButtonItems:(id)arg1;
- (id)leftBarButtonItems;
- (void)setLeftBarButtonItems:(id)arg1;
- (void)setCustomRightView:(id)arg1;
- (id)customRightView;
- (void)setCustomLeftView:(id)arg1;
- (id)customLeftView;
- (void)set_customRightViews:(id)arg1;
- (void)set_customLeftViews:(id)arg1;
- (void)set_leftBarButtonItems:(id)arg1;
- (void)set_rightBarButtonItems:(id)arg1;
- (void)set_customLeftView:(id)arg1;
- (void)set_customRightView:(id)arg1;
- (void)set_rightBarButtonItem:(id)arg1;
- (void)set_leftBarButtonItem:(id)arg1;
- (void)setHidesBackButton:(BOOL)arg1;
- (void)setPrompt:(id)arg1;
- (id)prompt;
- (void)_replaceCustomLeftRightViewAtIndex:(unsigned int)arg1 withView:(id)arg2 left:(BOOL)arg3;
- (void)setContext:(id)arg1;
- (void)setWidth:(float)arg1;
- (float)width;
- (id)backBarButtonItem;
- (id)currentBackButtonTitle;
- (void)setBackBarButtonItem:(id)arg1;
- (void)setBackButtonTitle:(id)arg1;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2;
- (void)setNavigationBar:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (void)_setBackButtonPressed:(BOOL)arg1;
- (id)_backgroundImages;
- (void)_setBarStyleIndependent:(BOOL)arg1;
- (id)rightBarButtonItem;
- (void)setRightBarButtonItem:(id)arg1;
- (id)leftBarButtonItem;
- (void)setLeftBarButtonItem:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)_setRightFlexibleSpaceCount:(unsigned int)arg1;
- (void)_setLeftFlexibleSpaceCount:(unsigned int)arg1;
- (void)setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomRightView:(id)arg1 animated:(BOOL)arg2;
- (id)_customRightView;
- (void)setCustomLeftView:(id)arg1 animated:(BOOL)arg2;
- (id)_customLeftView;
- (void)_setCustomLeftRightView:(id)arg1 left:(BOOL)arg2;
- (id)_customRightViewsCreating:(BOOL)arg1;
- (id)_customRightViewCreating:(BOOL)arg1;
- (id)_customLeftViewCreating:(BOOL)arg1;
- (id)_customLeftViewsCreating:(BOOL)arg1;
- (BOOL)_accumulateViewsFromItems:(id)arg1 isLeft:(BOOL)arg2 refreshViews:(BOOL)arg3;
- (void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (id)_rightBarButtonItem;
- (void)setObject:(id)arg1 forLeftRightKeyPath:(id)arg2 animated:(BOOL)arg3;
- (void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (id)_leftBarButtonItem;
- (void)updateNavigationBarButtonsAnimated:(BOOL)arg1;
- (void)_setCustomLeftView:(id)arg1;
- (void)_setCustomRightView:(id)arg1;
- (void)_setRightBarButtonItem:(id)arg1;
- (void)_setLeftBarButtonItem:(id)arg1;
- (BOOL)hidesBackButton;
- (void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_customRightViews;
- (id)_customLeftViews;
- (id)navigationBar;
- (id)titleView;
- (id)backButtonTitle;
- (id)title;
- (id)backButtonView;
- (void)_removeBackButtonView;
- (void)_setBackButtonTitle:(id)arg1 lineBreakMode:(int)arg2;
- (void)_setTitleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_freezeCurrentTitleView;
- (void)_cleanupFrozenTitleView;
- (void)_setRightItemSpaceList:(id)arg1;
- (void)_setLeftItemSpaceList:(id)arg1;
- (void)_setRightBarButtonItems:(id)arg1;
- (void)_setLeftBarButtonItems:(id)arg1;
- (void)_setCustomRightViews:(id)arg1;
- (void)_setCustomLeftViews:(id)arg1;
- (void)_removeTitleAndButtonViews;
- (id)existingBackButtonView;
- (int)tag;
- (id)context;
- (void)setTag:(int)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)_automationID;
- (void)setTitle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTitleView:(id)arg1 animated:(BOOL)arg2;
- (void)fadeInTitleView;
- (void)fadeOutTitleView;
- (void)mergeValuesFromItem:(id)arg1;
- (void)resetAllValues;

@end