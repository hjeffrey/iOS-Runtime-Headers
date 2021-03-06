/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class DASearchQuery;

@interface ASSearchTask : ASTask  {
    DASearchQuery *_query;
    int _numDownloadedElements;
}

@property(readonly) DASearchQuery * query;


- (id)description;
- (void)dealloc;
- (id)query;
- (id)initWithQuery:(id)arg1;
- (int)commandCode;
- (int)taskStatusForExchangeStatus:(int)arg1;

@end
