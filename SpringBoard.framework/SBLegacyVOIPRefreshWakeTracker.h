/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBLegacyVOIPRefreshWakeTracker : NSObject <SBApplicationWakeLifecycleHandling> {
    BKSProcessAssertion * _appKeepAliveAssertion;
    FBProcessManager * _processManager;
}

@property (nonatomic, retain) BKSProcessAssertion *appKeepAliveAssertion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateAppIfNeeded:(id)arg1;
- (id)_createAssertionForBundleID:(id)arg1;
- (id)appKeepAliveAssertion;
- (bool)beginWakeForApplication:(id)arg1;
- (void)dealloc;
- (void)endWake;
- (id)init;
- (id)initWithProcessManager:(id)arg1;
- (void)setAppKeepAliveAssertion:(id)arg1;
- (double)wakeDuration;

@end
