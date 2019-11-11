/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBLoginAppContainerViewController : SBLockScreenViewControllerBase <SBLockScreenBatteryChargingViewControllerDelegate, SBLockScreenPluginManagerDelegate, SBLoginAppSceneHosterDelegate, SBWallpaperObserver> {
    SBLockScreenBatteryChargingViewController * _batteryChargingViewController;
    <BSInvalidatable> * _deferOrientationUpdatesAssertion;
    long long  _idleTimerMode;
    NSHashTable * _observers;
    SBLockScreenPluginManager * _pluginManager;
    SBLoginAppContainerPluginWrapperViewController * _pluginWrapperViewController;
    <SBLoginAppSceneHoster> * _sceneHoster;
    NSMutableSet * _showStatusBarReasons;
    SBAppStatusBarSettingsAssertion * _statusBarAssertion;
    SBLockScreenTemperatureWarningViewController * _thermalWarningViewController;
    SBWallpaperController * _wallpaperController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addBatteryChargingView;
- (void)_cleanupBatteryChargingViewWithAnimationDuration:(double)arg1;
- (id)_displayLayoutElementIdentifier;
- (void)_fadeViewsForChargingViewVisible:(bool)arg1;
- (void)_handleBacklightFadeEnded;
- (id)_hostedAppBundleID;
- (id)_hostedAppView;
- (id)_hostedSceneIdentifier;
- (id)_initWithSceneHoster:(id)arg1 wallpaperController:(id)arg2;
- (void)_killLoginApp;
- (void)_reallyAcquireStatusBarAssertionIfNecessaryInitiallyVisible:(bool)arg1;
- (void)_reallyRelinquishStatusBarAssertion;
- (void)_removeBatteryChargingView;
- (void)_setupLoginAppHosting;
- (void)_setupLoginScene;
- (void)_showOrHideThermalTrapUIAnimated:(bool)arg1;
- (id)_statusBarSettingsAssertion;
- (void)_updateBatteryChargingViewAnimated:(bool)arg1;
- (void)_updateLegibility;
- (void)addLoginObserver:(id)arg1;
- (bool)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (void)chargingViewControllerFadedOutContent:(id)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (void)dealloc;
- (void)disableLockScreenPluginWithContext:(id)arg1;
- (void)enableLockScreenPluginWithContext:(id)arg1;
- (bool)handleHomeButtonDoublePress;
- (bool)handleVolumeDownButtonPress;
- (bool)handleVolumeUpButtonPress;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 sceneHoster:(id)arg3 wallpaperController:(id)arg4;
- (void)loadView;
- (id)loginContainerView;
- (void)noteDeviceBlockedStatusUpdated;
- (void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2;
- (void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2;
- (void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3;
- (void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2;
- (bool)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3;
- (void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2;
- (void)prepareForUILock;
- (void)prepareForUIUnlock;
- (void)removeLoginObserver:(id)arg1;
- (bool)requiresPasscodeInputForUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (void)sceneInvalidated;
- (void)sceneUpdatedIdleTimerMode:(long long)arg1;
- (void)sceneUpdatedRotationMode:(long long)arg1;
- (void)sceneUpdatedStatusBarUserName:(id)arg1;
- (void)sceneUpdatedWallpaperMode:(unsigned long long)arg1;
- (bool)shouldAutoUnlockForSource:(int)arg1;
- (bool)shouldDisableALS;
- (bool)shouldShowLockStatusBarTime;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (bool)suppressesControlCenter;
- (bool)suppressesScreenshots;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (bool)willUIUnlockFromSource:(int)arg1;

@end
