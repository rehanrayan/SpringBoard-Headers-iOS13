/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBSceneLayoutWorkspaceTransaction : SBWorkspaceTransaction <FBApplicationUpdateScenesTransactionObserver, FBSynchronizedTransaction, FBSynchronizedTransactionGroupDelegate> {
    NSMutableSet * _backgroundingAppSceneEntities;
    <SBSceneLayoutWorkspaceTransactionDelegate> * _delegate;
    bool  _delegateTransitionComplete;
    FBDisplayLayoutTransition * _fbLayoutTransition;
    NSMutableSet * _foregroundingAppSceneEntities;
    NSMutableSet * _fromAppSceneEntities;
    SBWorkspaceTransitionRequest * _interruptingTransitionRequest;
    bool  _isTransitioning;
    unsigned long long  _options;
    bool  _performSceneUpdates;
    FBSynchronizedTransactionGroup * _sceneUpdateTransactionGroup;
    SBSceneBackgroundedStatusAssertion * _scenesBackgroundedStatusAssertion;
    NSMutableSet * _scenesToBackground;
    <FBSynchronizedTransactionDelegate> * _synchronizationDelegate;
    SBSceneLayoutSynchronizeTransitionTransaction * _synchronizeAddSlavesTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction * _synchronizeBeginTransitionTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction * _synchronizePrepareTransitionTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction * _synchronizeSendActivationResultTransaction;
    SBWorkspaceApplicationSceneTransitionContext * _transitionContext;
    bool  _transitionFailed;
    NSMutableSet * _updateTransactions;
    bool  _waitForSceneUpdates;
    bool  _waitingForSynchronizedCommit;
}

@property (nonatomic, readonly) NSSet *backgroundingApplicationSceneEntities;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSceneLayoutWorkspaceTransactionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *foregroundingApplicationSceneEntities;
@property (nonatomic, readonly) NSSet *fromApplicationSceneEntities;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly) NSSet *sceneUpdateTransactions;
@property (readonly) Class superclass;
@property (nonatomic) <FBSynchronizedTransactionDelegate> *synchronizationDelegate;
@property (nonatomic, readonly) NSSet *toApplicationSceneEntities;
@property (nonatomic, readonly) SBWorkspaceApplicationSceneTransitionContext *transitionContext;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;

- (void).cxx_destruct;
- (void)_begin;
- (void)_beginLayoutTransition;
- (bool)_canBeInterrupted;
- (void)_captureAppsForTransition;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_completeTransition;
- (void)_didComplete;
- (void)_evaluateTransitionCompletion;
- (void)_mainDisplayUpdateAggregateDictionaryForLayoutRoleWithApplication:(id)arg1;
- (long long)_orientationForFollowOnRotationIfNeeded;
- (bool)_overrideInterfaceOrientationForOrientationMismatch:(long long*)arg1;
- (void)_performTransition;
- (void)_prepareLayoutTransition;
- (void)_prepareScenesForSceneUpdates;
- (void)_prepareScenesForTransition;
- (bool)_sceneEntities:(id)arg1 hasEntityRepresentingSceneID:(id)arg2;
- (void)_sendActivationResultWithSuccess:(bool)arg1;
- (void)_updateAggregateDictionary;
- (void)_updateKeyboardContextMaskStyles:(bool)arg1;
- (void)_updateScenesForTransitionCompletion;
- (void)_willBegin;
- (void)_willFailWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (id)backgroundingApplicationSceneEntities;
- (bool)canInterruptForTransitionRequest:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)foregroundingApplicationSceneEntities;
- (id)fromApplicationSceneEntities;
- (id)initWithTransitionRequest:(id)arg1;
- (bool)isReadyForSynchronizedCommit;
- (bool)isTransitioning;
- (unsigned long long)options;
- (void)performSynchronizedCommit;
- (id)sceneManager;
- (id)sceneUpdateTransactions;
- (void)setDelegate:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setSynchronizationDelegate:(id)arg1;
- (id)synchronizationDelegate;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (bool)synchronizedTransactionGroup:(id)arg1 shouldFailForSynchronizedTransaction:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (id)toApplicationSceneEntities;
- (void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;
- (void)transaction:(id)arg1 didCreateScene:(id)arg2;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)transaction:(id)arg1 willUpdateScene:(id)arg2;
- (id)transitionContext;

@end
