/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAppViewController : UIViewController <BSInvalidatable, SBApplicationHosting, SBApplicationSceneViewControlling, SBDeviceApplicationSceneHandleObserver> {
    NSSet * _actionsToDeliver;
    SBActivationSettings * _activationSettings;
    NSMutableSet * _activeTransitions;
    bool  _automatesLifecycle;
    long long  _currentMode;
    <SBAppViewControllerDelegate> * _delegate;
    SBDeviceApplicationSceneViewController * _deviceAppViewController;
    NSString * _identifier;
    bool  _ignoresOcclusions;
    bool  _invalidated;
    <SBScenePlaceholderContentContext> * _placeholderContentContext;
    bool  _placeholderContentEnabled;
    long long  _requestedMode;
    bool  _sceneContentIsReady;
    SBDeviceApplicationSceneHandle * _sceneHandle;
    SBActivationSettings * _supplementalActivationSettings;
    bool  _wantsSecureRendering;
    <SBApplicationSceneViewControllingStatusBarDelegate> * applicationSceneStatusBarDelegate;
}

@property (nonatomic, retain) NSSet *actionsToDeliver;
@property (nonatomic, readonly) SBApplicationSceneView *appView;
@property (nonatomic) <SBApplicationSceneViewControllingStatusBarDelegate> *applicationSceneStatusBarDelegate;
@property (nonatomic) bool automatesLifecycle;
@property (nonatomic, readonly) long long contentInterfaceOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentReferenceSize;
@property (nonatomic, readonly) long long currentMode;
@property (nonatomic, retain) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBAppViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoresOcclusions;
@property (nonatomic, readonly) long long overrideStatusBarStyle;
@property (nonatomic, retain) <SBScenePlaceholderContentContext> *placeholderContentContext;
@property (nonatomic) bool placeholderContentEnabled;
@property (nonatomic) long long requestedMode;
@property (nonatomic, readonly) SBSceneHandle *sceneHandle;
@property (nonatomic, readonly) double statusBarAlpha;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBActivationSettings *supplementalActivationSettings;
@property (nonatomic) bool wantsSecureRendering;

- (void).cxx_destruct;
- (void)_activateApp;
- (bool)_canShowWhileLocked;
- (id)_configureApplicationSceneEntity:(id)arg1 deliveringActions:(bool)arg2;
- (id)_createSceneUpdateTransactionForApplicationSceneEntity:(id)arg1 deliveringActions:(bool)arg2;
- (void)_createSceneViewController;
- (void)_deactivateHostedApp;
- (void)_destroySceneViewController;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_sendActions:(id)arg1;
- (void)_setCurrentMode:(long long)arg1;
- (void)_transformHostedAppViewForRotationToOrientation:(long long)arg1;
- (void)_updateForAppearanceState:(int)arg1;
- (id)actionsToDeliver;
- (id)appView;
- (id)applicationSceneStatusBarDelegate;
- (bool)automatesLifecycle;
- (bool)canHostAnApp;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (long long)contentInterfaceOrientation;
- (struct CGSize { double x1; double x2; })contentReferenceSize;
- (long long)currentMode;
- (id)customContentView;
- (void)dealloc;
- (id)delegate;
- (long long)displayMode;
- (id)hostedAppSceneHandle;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (bool)ignoresOcclusions;
- (id)initWithIdentifier:(id)arg1 andApplicationSceneEntity:(id)arg2;
- (void)invalidate;
- (bool)isHostingAnApp;
- (id)newSnapshot;
- (id)newSnapshotView;
- (void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(id /* block */)arg2;
- (long long)overrideStatusBarStyle;
- (id)placeholderContentContext;
- (bool)placeholderContentEnabled;
- (long long)requestedMode;
- (id)sceneHandle;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)setActionsToDeliver:(id)arg1;
- (void)setApplicationSceneStatusBarDelegate:(id)arg1;
- (void)setAutomatesLifecycle:(bool)arg1;
- (void)setContentReferenceSize:(struct CGSize { double x1; double x2; })arg1 withInterfaceOrientation:(long long)arg2;
- (void)setCustomContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(id /* block */)arg3;
- (void)setIgnoresOcclusions:(bool)arg1;
- (void)setPlaceholderContentContext:(id)arg1;
- (void)setPlaceholderContentEnabled:(bool)arg1;
- (void)setRequestedMode:(long long)arg1;
- (void)setSupplementalActivationSettings:(id)arg1;
- (void)setWantsSecureRendering:(bool)arg1;
- (double)statusBarAlpha;
- (id)supplementalActivationSettings;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsSecureRendering;
- (void)willMoveToParentViewController:(id)arg1;

@end
