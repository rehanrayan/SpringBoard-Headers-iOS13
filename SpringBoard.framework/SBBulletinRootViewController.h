/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBBulletinRootViewController : UIViewController {
    _SBBulletinRootViewControllerTransitionContext * _activeTransitionContext;
    SBBulletinRootView * _rootView;
    SBBulletinWindowController * _windowController;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (id)initWithBulletinWindowController:(id)arg1;
- (void)loadView;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)wantsFullScreenLayout;

@end
