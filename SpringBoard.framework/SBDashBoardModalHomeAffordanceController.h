/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDashBoardModalHomeAffordanceController : NSObject <CSModalHomeAffordanceControlling> {
    SBHomeGestureArbiter * _homeGestureArbiter;
    UIScreenEdgePanGestureRecognizer * _homeGestureRecognizer;
    SBHomeGestureParticipant * _participant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIScreenEdgePanGestureRecognizer *homeGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addGrabberView:(id)arg1;
- (id)homeGestureRecognizer;
- (id)init;
- (void)registerHomeGestureParticipant:(id)arg1;
- (void)setHomeGestureRecognizer:(id)arg1;
- (void)unregisterHomeGestureParticipant;

@end
