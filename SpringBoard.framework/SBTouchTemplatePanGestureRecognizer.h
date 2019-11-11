/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBTouchTemplatePanGestureRecognizer : SBTouchTemplateGestureRecognizer {
    bool  _recognizesHorizontalPanning;
    bool  _recognizesVerticalPanning;
}

@property (nonatomic) bool recognizesHorizontalPanning;
@property (nonatomic) bool recognizesVerticalPanning;

+ (id)defaultTemplates;

- (double)_arcCenter;
- (double)_arcSize;
- (struct CGPoint { double x1; double x2; })_convertPortraitPoint:(struct CGPoint { double x1; double x2; })arg1 toOrientation:(long long)arg2;
- (bool)_directionallyAcceptMotion;
- (bool)hasSignificantMotionToBegin;
- (double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)recognizesHorizontalPanning;
- (bool)recognizesVerticalPanning;
- (void)setRecognizesHorizontalPanning:(bool)arg1;
- (void)setRecognizesVerticalPanning:(bool)arg1;

@end
