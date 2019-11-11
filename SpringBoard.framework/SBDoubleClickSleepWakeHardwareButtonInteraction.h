/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDoubleClickSleepWakeHardwareButtonInteraction : SBSleepWakeHardwareButtonInteraction {
    SBHIDUILockAssertion * _proxLockAssertion;
}

@property (nonatomic, retain) SBHIDUILockAssertion *proxLockAssertion;

- (void).cxx_destruct;
- (void)_cancelPreviousResumeProxRequests;
- (void)_performSleep;
- (void)_performWake;
- (void)_resumeProxAfterMultiplePressIntervalForReason:(id)arg1;
- (void)_resumeProxForReason:(id)arg1;
- (void)_suspendProx;
- (bool)consumeInitialPressDown;
- (bool)consumeInitialPressUp;
- (bool)consumeSecondPressDown;
- (void)observeFinalPressUp;
- (void)observeSinglePressDidFail;
- (id)proxLockAssertion;
- (void)setProxLockAssertion:(id)arg1;

@end
