/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    bool  _addToLockScreenWhenLocked;
    NSSet * _alertSuppressionContexts;
    bool  _alertsWhenLocked;
    NSString * _alternateActionLabel;
    bool  _canPlaySound;
    bool  _canTurnOnDisplay;
    bool  _coalescesWhenLocked;
    unsigned long long  _contentPreviewSetting;
    bool  _dismissAutomatically;
    bool  _hideClearActionInList;
    bool  _lauchUsingSiriForCarPlayDefaultAction;
    unsigned long long  _lockScreenPersistence;
    unsigned long long  _lockScreenPriority;
    unsigned long long  _messageNumberOfLines;
    bool  _overridesDowntime;
    bool  _overridesPocketMode;
    bool  _overridesQuietMode;
    bool  _preemptsPresentedNotification;
    bool  _prefersDarkAppearance;
    bool  _preventsAutomaticLock;
    unsigned long long  _realertCount;
    bool  _requestsFullScreenPresentation;
    bool  _revealsAdditionalContentIfNoDefaultAction;
    bool  _revealsAdditionalContentOnPresentation;
    bool  _silencedByMenuButtonPress;
    bool  _suppressesAlertsWhenAppIsActive;
    bool  _suppressesBodyWhenLocked;
    bool  _suppressesSubtitleWhenLocked;
    bool  _suppressesTitleWhenLocked;
}

@property (nonatomic, readonly) bool addToLockScreenWhenUnlocked;
@property (nonatomic, readonly, copy) NSSet *alertSuppressionContexts;
@property (nonatomic, readonly) bool alertsWhenLocked;
@property (nonatomic, readonly, copy) NSString *alternateActionLabel;
@property (nonatomic, readonly) bool canPlaySound;
@property (nonatomic, readonly) bool canTurnOnDisplay;
@property (nonatomic, readonly) bool coalescesWhenLocked;
@property (nonatomic, readonly) unsigned long long contentPreviewSetting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dismissAutomatically;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideClearActionInList;
@property (nonatomic, readonly) bool lauchUsingSiriForCarPlayDefaultAction;
@property (nonatomic, readonly) unsigned long long lockScreenPersistence;
@property (nonatomic, readonly) unsigned long long lockScreenPriority;
@property (nonatomic, readonly) unsigned long long messageNumberOfLines;
@property (nonatomic, readonly) bool overridesDowntime;
@property (nonatomic, readonly) bool overridesPocketMode;
@property (nonatomic, readonly) bool overridesQuietMode;
@property (nonatomic, readonly) bool preemptsPresentedNotification;
@property (nonatomic, readonly) bool prefersDarkAppearance;
@property (nonatomic, readonly) bool preventsAutomaticLock;
@property (nonatomic, readonly) unsigned long long realertCount;
@property (nonatomic, readonly) bool requestsFullScreenPresentation;
@property (nonatomic, readonly) bool revealsAdditionalContentIfNoDefaultAction;
@property (nonatomic, readonly) bool revealsAdditionalContentOnPresentation;
@property (nonatomic, readonly) bool silencedByMenuButtonPress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressesAlertsWhenAppIsActive;
@property (nonatomic, readonly) bool suppressesBodyWhenLocked;
@property (nonatomic, readonly) bool suppressesSubtitleWhenLocked;
@property (nonatomic, readonly) bool suppressesTitleWhenLocked;

- (void).cxx_destruct;
- (bool)addToLockScreenWhenUnlocked;
- (id)alertSuppressionContexts;
- (bool)alertsWhenLocked;
- (id)alternateActionLabel;
- (bool)canPlaySound;
- (bool)canTurnOnDisplay;
- (bool)coalescesWhenLocked;
- (unsigned long long)contentPreviewSetting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)dismissAutomatically;
- (unsigned long long)hash;
- (bool)hideClearActionInList;
- (id)initWithNotificationOptions:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)lauchUsingSiriForCarPlayDefaultAction;
- (unsigned long long)lockScreenPersistence;
- (unsigned long long)lockScreenPriority;
- (unsigned long long)messageNumberOfLines;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)overridesDowntime;
- (bool)overridesPocketMode;
- (bool)overridesQuietMode;
- (bool)preemptsPresentedNotification;
- (bool)prefersDarkAppearance;
- (bool)preventsAutomaticLock;
- (unsigned long long)realertCount;
- (bool)requestsFullScreenPresentation;
- (bool)revealsAdditionalContentIfNoDefaultAction;
- (bool)revealsAdditionalContentOnPresentation;
- (bool)silencedByMenuButtonPress;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)suppressesAlertsWhenAppIsActive;
- (bool)suppressesBodyWhenLocked;
- (bool)suppressesSubtitleWhenLocked;
- (bool)suppressesTitleWhenLocked;

@end