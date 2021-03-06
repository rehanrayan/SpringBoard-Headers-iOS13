/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBInlineAppExposeLiveContentOverlayCoordinator : NSObject <SBSwitcherLiveContentOverlayCoordinating> {
    long long  _containerOrientation;
    <SBSwitcherLiveContentOverlayCoordinatorDelegate> * _delegate;
    SBDeviceApplicationSceneViewController * _deviceApplicationSceneViewController;
    long long  _environment;
    long long  _layoutRole;
    SBAppLayout * _liveContentAppLayout;
    bool  _liveContentOverlayUpdatesSuspended;
    SBInlineAppExposeLiveContentOverlayView * _liveContentOverlayView;
    bool  _overlay;
}

@property (nonatomic) long long containerOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSwitcherLiveContentOverlayCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=areLiveContentOverlayUpdatesSuspended, nonatomic) bool liveContentOverlayUpdatesSuspended;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(bool)arg3;
- (id)_appLayoutFromLayoutState:(id)arg1;
- (void)_removeLiveContentOverlay;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (bool)areLiveContentOverlayUpdatesSuspended;
- (long long)containerOrientation;
- (id)delegate;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (void)setContainerOrientation:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLiveContentOverlayUpdatesSuspended:(bool)arg1;
- (void)updateSceneViewController:(id)arg1 environment:(long long)arg2 layoutRole:(long long)arg3 overlay:(bool)arg4;

@end
