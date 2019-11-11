/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAppExposeSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _activatingAppLayout;
    NSArray * _appLayoutsToKeepDuringIncomingTransition;
    NSString * _bundleIdentifier;
    unsigned long long  _incomingTransitionPhase;
    bool  _isFloating;
    bool  _isShowingReopenClosedWindowsButton;
    <SBFluidSwitcherModifierProviding> * _modifierProvider;
    long long  _numberOfHiddenAppLayouts;
    SBSwitcherModifier * _outgoingTransitionModifier;
}

- (void).cxx_destruct;
- (bool)_canShowReopenClosedWindowsButton;
- (bool)_shouldFilteringIncludeAppLayout:(id)arg1;
- (id)_updateReopenClosedWindowsButtonPresence;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)appLayoutsForInsertionOrRemoval;
- (id)handleAppExposeEvent:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleTetheredInsertionEvent:(id)arg1;
- (id)handleTetheredRemovalEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 modifierProvider:(id)arg2 floating:(bool)arg3;
- (bool)isTetheredScrollingEnabled;
- (long long)liveContentRasterizationStyle;
- (double)plusButtonAlpha;
- (long long)plusButtonStyle;
- (double)reopenClosedWindowsButtonAlpha;
- (double)reopenClosedWindowsButtonScale;

@end
