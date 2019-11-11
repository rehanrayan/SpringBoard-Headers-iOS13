/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAppPlatterDragPreview : UIView <BSDescriptionProviding, SBIconDragPreview> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    UIView * _anchorPointAdjustmentContainerView;
    id /* block */  _cleanUpHandler;
    UIView * _cornerMaskingView;
    BSCornerRadiusConfiguration * _cornerRadiusConfiguration;
    NSArray * _diffuseShadowFilters;
    struct SBDragPreviewShadowParameters { 
        double shadowOpacity; 
        double shadowRadius; 
        struct CGSize { 
            double width; 
            double height; 
        } shadowOffset; 
    }  _diffuseShadowParameters;
    SBFView * _diffuseShadowView;
    unsigned long long  _dragState;
    bool  _flocked;
    bool  _hasAnimatedToBlurredPlatter;
    bool  _iconAllowsLabelArea;
    bool  _iconCanShowCloseBox;
    UIView * _iconContainerView;
    double  _iconContentScale;
    bool  _iconIsHighlighted;
    SBIconView * _iconView;
    bool  _isBlurredPlatterReady;
    unsigned long long  _mode;
    double  _platterScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _platterSize;
    SBApplicationBlurContentView * _platterView;
    id /* block */  _platterViewAlphaAnimationCompletionBlock;
    unsigned long long  _platterViewAlphaAnimationCount;
    NSArray * _rimShadowFilters;
    struct SBDragPreviewShadowParameters { 
        double shadowOpacity; 
        double shadowRadius; 
        struct CGSize { 
            double width; 
            double height; 
        } shadowOffset; 
    }  _rimShadowParameters;
    SBFView * _rimShadowView;
    double  _rotation;
    SBPortalView * _sourcePortalView;
    UIView * _sourceView;
    UIView * _unclippedSourceContainerView;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic, retain) UIView *anchorPointAdjustmentContainerView;
@property (getter=isAnimatingPlatterViewAlpha, nonatomic, readonly) bool animatingPlatterViewAlpha;
@property (nonatomic, copy) id /* block */ cleanUpHandler;
@property (nonatomic, retain) UIView *cornerMaskingView;
@property (nonatomic, retain) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *diffuseShadowFilters;
@property (nonatomic) struct SBDragPreviewShadowParameters { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; } diffuseShadowParameters;
@property (nonatomic, retain) SBFView *diffuseShadowView;
@property (nonatomic) unsigned long long dragState;
@property (getter=isFlocked, nonatomic) bool flocked;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBIcon *icon;
@property (nonatomic) bool iconAllowsLabelArea;
@property (nonatomic) bool iconCanShowCloseBox;
@property (nonatomic, retain) UIView *iconContainerView;
@property (nonatomic) double iconContentScale;
@property (nonatomic) bool iconIsEditing;
@property (nonatomic) bool iconIsHighlighted;
@property (nonatomic, retain) SBIconView *iconView;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) double platterScale;
@property (nonatomic) struct CGSize { double x1; double x2; } platterSize;
@property (nonatomic, retain) SBApplicationBlurContentView *platterView;
@property (nonatomic, copy) id /* block */ platterViewAlphaAnimationCompletionBlock;
@property (nonatomic, copy) NSArray *rimShadowFilters;
@property (nonatomic) struct SBDragPreviewShadowParameters { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; } rimShadowParameters;
@property (nonatomic, retain) SBFView *rimShadowView;
@property (nonatomic) double rotation;
@property (nonatomic, retain) SBPortalView *sourcePortalView;
@property (nonatomic, retain) UIView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *unclippedSourceContainerView;

- (void).cxx_destruct;
- (double)_blurContentViewIconViewCenterYOffset;
- (double)_effectiveCornerRadius;
- (id)_effectiveCornerRadiusConfiguration;
- (double)_effectiveIconAccessoryAlpha;
- (bool)_effectiveIconAllowsLabelArea;
- (bool)_effectiveIconCanShowCloseBox;
- (struct CGPoint { double x1; double x2; })_effectiveIconContainerCenter;
- (double)_effectiveIconContentScale;
- (bool)_effectiveIconIsHighlighted;
- (unsigned long long)_effectiveMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_effectivePlatterFrame;
- (bool)_isDragging;
- (void)_matchMoveView:(id)arg1 toContainerView:(id)arg2;
- (void)_setSourcePortalViewHidden:(bool)arg1;
- (void)_updateContainerViewPositionForAnchorPoint;
- (void)_updateIconViewComponentVisibility;
- (void)_updateShadowView;
- (void)_updateSubviewVisibility;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (id)anchorPointAdjustmentContainerView;
- (id /* block */)cleanUpHandler;
- (void)configurePlatterForSceneHandle:(id)arg1 withTargetView:(id)arg2 completion:(id /* block */)arg3;
- (id)cornerMaskingView;
- (id)cornerRadiusConfiguration;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)diffuseShadowFilters;
- (struct SBDragPreviewShadowParameters { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })diffuseShadowParameters;
- (id)diffuseShadowView;
- (unsigned long long)dragState;
- (void)draggingSourceCancelAnimationCompleted;
- (void)draggingSourceDroppedWithOperation:(unsigned long long)arg1;
- (void)dropDestinationAnimationCompleted;
- (void)handleCleanup;
- (id)icon;
- (bool)iconAllowsLabelArea;
- (bool)iconCanShowCloseBox;
- (id)iconContainerView;
- (double)iconContentScale;
- (bool)iconIsEditing;
- (bool)iconIsHighlighted;
- (id)iconView;
- (id)initWithReferenceIconView:(id)arg1 sourceView:(id)arg2;
- (void)invalidateSourceView;
- (bool)isAnimatingPlatterViewAlpha;
- (bool)isFlocked;
- (void)layoutSubviews;
- (unsigned long long)mode;
- (double)platterScale;
- (struct CGSize { double x1; double x2; })platterSize;
- (id)platterView;
- (id /* block */)platterViewAlphaAnimationCompletionBlock;
- (id)rimShadowFilters;
- (struct SBDragPreviewShadowParameters { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })rimShadowParameters;
- (id)rimShadowView;
- (double)rotation;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnchorPointAdjustmentContainerView:(id)arg1;
- (void)setCleanUpHandler:(id /* block */)arg1;
- (void)setCornerMaskingView:(id)arg1;
- (void)setCornerRadiusConfiguration:(id)arg1;
- (void)setDiffuseShadowFilters:(id)arg1;
- (void)setDiffuseShadowParameters:(struct SBDragPreviewShadowParameters { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1;
- (void)setDiffuseShadowView:(id)arg1;
- (void)setDragState:(unsigned long long)arg1;
- (void)setFlocked:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconAllowsLabelArea:(bool)arg1;
- (void)setIconCanShowCloseBox:(bool)arg1;
- (void)setIconContainerView:(id)arg1;
- (void)setIconContentScale:(double)arg1;
- (void)setIconIsEditing:(bool)arg1;
- (void)setIconIsHighlighted:(bool)arg1;
- (void)setIconView:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setPlatterScale:(double)arg1;
- (void)setPlatterSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlatterView:(id)arg1;
- (void)setPlatterViewAlphaAnimationCompletionBlock:(id /* block */)arg1;
- (void)setRimShadowFilters:(id)arg1;
- (void)setRimShadowParameters:(struct SBDragPreviewShadowParameters { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1;
- (void)setRimShadowView:(id)arg1;
- (void)setRotation:(double)arg1;
- (void)setSourcePortalView:(id)arg1;
- (void)setSourceView:(id)arg1;
- (void)setUnclippedSourceContainerView:(id)arg1;
- (id)sourcePortalView;
- (id)sourceView;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)unclippedSourceContainerView;
- (void)updateSourceView:(id)arg1;

@end
