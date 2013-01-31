/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier, NSMutableSet;

@interface PSRootController : UINavigationController <PSController, UINavigationControllerDelegate> {
    PSSpecifier *_specifier;
    NSMutableSet *_tasks;
    BOOL _deallocating;
    unsigned char _hasTelephony;
}

+ (BOOL)processedBundle:(id)arg1 parentController:(id)arg2 parentSpecifier:(id)arg3 bundleControllers:(id*)arg4 settings:(id)arg5;
+ (void)writePreference:(id)arg1;
+ (id)readPreferenceValue:(id)arg1;
+ (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;

- (void)setRootController:(id)arg1;
- (void)didWake;
- (void)dealloc;
- (void)didDismissFormSheetView;
- (void)willDismissFormSheetView;
- (void)didDismissPopupView;
- (void)willDismissPopupView;
- (id)contentViewForTopController;
- (void)taskFinished:(id)arg1;
- (void)addTask:(id)arg1;
- (BOOL)taskIsRunning:(id)arg1;
- (id)tasksDescription;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (void)_delayedControllerReleaseAfterPop:(id)arg1;
- (void)statusBarWillChangeHeight:(id)arg1;
- (void)sendWillResignActive;
- (void)sendWillBecomeActive;
- (id)aggregateDictionaryPath;
- (BOOL)busy;
- (void)statusBarWillAnimateByHeight:(float)arg1;
- (void)willBecomeActive;
- (void)willResignActive;
- (id)readPreferenceValue:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)pushController:(id)arg1;
- (void)didUnlock;
- (void)willUnlock;
- (void)didLock;
- (BOOL)canBeShownFromSuspendedState;
- (void)handleURL:(id)arg1;
- (id)specifiers;
- (id)rootController;
- (void)setParentController:(id)arg1;
- (id)parentController;
- (BOOL)deallocating;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)showLeftButton:(id)arg1 withStyle:(int)arg2 rightButton:(id)arg3 withStyle:(int)arg4;
- (void)suspend;
- (void)setSpecifier:(id)arg1;
- (id)specifier;

@end