/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKLevelCategoryTimePeriodSeries : HKHorizontalTimePeriodSeries {
    UIColor * _categoryLevelColor;
    UIFont * _categoryLevelFont;
    UIColor * _innerMarkColor;
    double  _markerRadius;
    UIColor * _specialMarkColor;
    NSString * _specialMarkLegendLabel;
}

@property (nonatomic, retain) UIColor *categoryLevelColor;
@property (nonatomic, retain) UIFont *categoryLevelFont;
@property (nonatomic, retain) UIColor *innerMarkColor;
@property (nonatomic) double markerRadius;
@property (nonatomic, retain) UIColor *specialMarkColor;
@property (nonatomic, retain) NSString *specialMarkLegendLabel;

- (void).cxx_destruct;
- (void)_drawCategoryLabels:(struct CGContext { }*)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_interiorCategoryLabels;
- (id)categoryLevelColor;
- (id)categoryLevelFont;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { long long x1; long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)init;
- (id)innerMarkColor;
- (id)marginsForYAxis:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)markerRadius;
- (double)offsetForEnumerationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCategoryLevelColor:(id)arg1;
- (void)setCategoryLevelFont:(id)arg1;
- (void)setInnerMarkColor:(id)arg1;
- (void)setMarkerRadius:(double)arg1;
- (void)setSpecialMarkColor:(id)arg1;
- (void)setSpecialMarkLegendLabel:(id)arg1;
- (id)specialMarkColor;
- (id)specialMarkLegendLabel;

@end