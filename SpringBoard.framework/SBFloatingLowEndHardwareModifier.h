/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBFloatingLowEndHardwareModifier : SBSwitcherModifier {
    bool  _floatingAppVisibleOverExclusiveForegroundApp;
    bool  _floatingAppVisibleOverSplitView;
    bool  _floatingSwitcherVisible;
    unsigned long long  _options;
}

- (bool)_shouldDimAndBlockTouchesToAppsUnderFloating;
- (double)dimmingAlpha;
- (bool)dimmingViewBlocksTouches;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;

@end
