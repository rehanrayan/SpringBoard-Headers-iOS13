/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBLockdownManager : NSObject {
    SBDismissOnlyAlertItem * _activatingAlertItem;
    bool  _settingUpActivationState;
    int  _state;
    NSString * _unqiueDeviceIdentifier;
}

+ (bool)_isDeveloperDevice;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_resetActivationState;
- (void)_setupActivationState;
- (bool)brickedDevice;
- (id)init;
- (int)lockdownState;

@end
