/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSArray;

@interface SAStockDelete : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(copy) NSArray * stocks;

+ (id)deleteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)delete;

- (id)groupIdentifier;
- (id)stocks;
- (void)setStocks:(id)arg1;
- (id)encodedClassName;
- (id)targetAppId;
- (void)setTargetAppId:(id)arg1;
- (BOOL)requiresResponse;

@end
