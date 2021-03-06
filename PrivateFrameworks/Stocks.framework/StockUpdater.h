/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSError, NSArray;

@interface StockUpdater : XMLHTTPRequest  {
    NSArray *_requestStocks;
    int _responseListCount;
    NSError *_lastError;
    BOOL _ignoreNewRequests;
    BOOL _isComprehensive;
    BOOL _useAlternateDataSource;
}

@property BOOL useAlternateDataSource;
@property BOOL isComprehensive;
@property(retain) NSArray * requestStocks;

+ (void)cancel;
+ (void)resetUpdaters;
+ (void)updateStockComprehensive:(id)arg1;
+ (void)updateAllStocksBasic;
+ (void)_createUpdatersIfNeeded;
+ (BOOL)hadError;
+ (id)_listUpdaterAlternate:(BOOL)arg1;
+ (id)_comprehensiveUpdaterAlternate:(BOOL)arg1;
+ (void)updateAllStocksComprehensive;
+ (BOOL)isLoading;
+ (void)failWithError:(id)arg1;

- (int)parseData:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)useAlternateDataSource;
- (BOOL)isComprehensive;
- (id)requestStocks;
- (void)setIsComprehensive:(BOOL)arg1;
- (void)setUseAlternateDataSource:(BOOL)arg1;
- (BOOL)hadError;
- (void)setRequestStocks:(id)arg1;
- (id)_symbolTagsForRequestStocks;
- (void)_updateWithPostBody:(id)arg1;
- (void)_updateWithPartsTag:(id)arg1 forStocks:(id)arg2;
- (void)_setLastError:(id)arg1;
- (void)didParseData;
- (void)failWithError:(id)arg1;

@end
