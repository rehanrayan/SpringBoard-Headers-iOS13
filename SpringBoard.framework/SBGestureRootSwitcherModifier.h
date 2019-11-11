/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBGestureRootSwitcherModifier : SBSwitcherModifier {
    NSString * _activeTransitionKey;
    long long  _currentEnvironmentMode;
    SBAppLayout * _selectedAppLayout;
    bool  _shouldVerifyModifierStackCoherencyCheckAfterHandlingEvent;
}

@property (nonatomic, readonly) long long currentEnvironmentMode;
@property (nonatomic, readonly) SBAppLayout *selectedAppLayout;

- (void).cxx_destruct;
- (id)_forwardEventAndUpdateInternalState:(id)arg1;
- (id)_gestureModifier;
- (void)_performModifierStackCoherencyCheckIfNeededAfterHandlingEvent:(id)arg1;
- (id)_transitionModifier;
- (long long)currentEnvironmentMode;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)handleGestureEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)initWithStartingEnvironmentMode:(long long)arg1;
- (id)selectedAppLayout;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;

@end
