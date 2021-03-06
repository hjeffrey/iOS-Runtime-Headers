/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDAxesCollection, OADGraphicProperties, CHDChartTypesCollection;

@interface CHDPlotArea : NSObject  {
    CHDChartTypesCollection *mChartTypes;
    CHDAxesCollection *mAxes;
    OADGraphicProperties *mGraphicProperties;
    boolmCategoryAxesReversed;
    boolmCategoryAxesReversedOverridden;
    boolmContainsVolumeStockType;
}


- (void)dealloc;
- (bool)isCategoryAxesReversed:(bool)arg1;
- (bool)hasSecondaryYAxisDeleted;
- (void)markSecondaryAxes;
- (bool)containsVolumeStockType;
- (bool)hasSecondaryAxis;
- (id)axes;
- (id)chartTypes;
- (void)setContainsVolumeStockType:(bool)arg1;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (id)initWithChart:(id)arg1;

@end
