/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFScrollableIrisWallpaperView : SBFScrollableStaticWallpaperView <ISPlayerViewDelegate, SBFIrisWallpaperView, UIGestureRecognizerDelegate> {
    <SBFIrisWallpaperViewDelegate> * _irisDelegate;
    long long  _playbackState;
    ISPlayerView * _playerView;
    double  _stillTimeInVideo;
    AVAsset * _video;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBFIrisWallpaperViewDelegate> *irisDelegate;
@property (nonatomic, readonly) long long irisPlaybackState;
@property (nonatomic, readonly) bool isIrisInteracting;
@property (nonatomic, readonly) double stillTimeInVideo;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *videoFileURL;

- (void).cxx_destruct;
- (id)_newImageView;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2 wallpaperVideo:(id)arg3 variant:(long long)arg4;
- (id)irisDelegate;
- (id)irisGestureRecognizer;
- (long long)irisPlaybackState;
- (bool)isIrisInteracting;
- (void)playerViewIsInteractingDidChange:(id)arg1;
- (void)playerViewPlaybackStateDidChange:(id)arg1;
- (void)setIrisDelegate:(id)arg1;
- (double)stillTimeInVideo;
- (id)videoFileURL;

@end
