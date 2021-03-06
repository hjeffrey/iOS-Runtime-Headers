/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSError, NSMutableData, NSURLResponse;

@interface MFMessageURLConnectionDelegate : NSObject <NSURLConnectionDelegate> {
    NSMutableData *_responseBody;
    BOOL _done;
    NSError *_error;
    NSURLResponse *_response;
}


- (void)dealloc;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;

@end
