/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class <NSObject><UIWebPDFViewHandlerDelegate>, UIWebView;

@interface QLPDFHanderDelegateForwarder : NSObject <UIWebPDFViewHandlerDelegate> {
    <NSObject><UIWebPDFViewHandlerDelegate> *_delegate;
    UIWebView *_webView;
}

@property UIWebView * webView;
@property <NSObject><UIWebPDFViewHandlerDelegate> * delegate;


- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setWebView:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)webView;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
