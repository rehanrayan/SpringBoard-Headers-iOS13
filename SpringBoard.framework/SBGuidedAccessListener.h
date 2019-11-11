/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBGuidedAccessListener : NSObject {
    bool  _isGuidedAccessActive;
}

@property (nonatomic) bool isGuidedAccessActive;

+ (id)sharedGuidedAccessListener;

- (void)guidedAccessWasActivated;
- (void)guidedAccessWasDeactivated;
- (id)init;
- (bool)isGuidedAccessActive;
- (void)setIsGuidedAccessActive:(bool)arg1;

@end
