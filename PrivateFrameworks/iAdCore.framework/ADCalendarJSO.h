/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class <ADJSODelegate>, ADCalendarEventJSO, WebScriptObject, EKEventStore;

@interface ADCalendarJSO : ADJavaScriptObject <EKEventEditViewDelegate> {
    BOOL _privilegedClient;
    <ADJSODelegate> *_delegate;
    EKEventStore *_eventStore;
    WebScriptObject *_event;
    WebScriptObject *_listener;
    WebScriptObject *_rect;
    ADCalendarEventJSO *_presentEvent;
    WebScriptObject *_presentListener;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _presentRect;
}

@property(getter=isPrivilegedClient) BOOL privilegedClient;
@property <ADJSODelegate> * delegate;
@property(readonly) EKEventStore * eventStore;
@property(retain) WebScriptObject * event;
@property(retain) WebScriptObject * listener;
@property(retain) WebScriptObject * rect;
@property(retain) ADCalendarEventJSO * presentEvent;
@property(retain) WebScriptObject * presentListener;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } presentRect;

+ (id)inputRequiredProperties;
+ (void)initializeInContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptingKeys;
+ (id)scriptSelectors;

- (id)init;
- (void)dealloc;
- (id)eventStore;
- (id)listener;
- (id)event;
- (void)setEvent:(id)arg1;
- (void)setRect:(id)arg1;
- (id)rect;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPresentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })presentRect;
- (id)presentListener;
- (id)presentEvent;
- (id)eventEditViewControllerDefaultCalendarForNewEvents:(id)arg1;
- (void)setPresentListener:(id)arg1;
- (void)setPresentEvent:(id)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)_popoverDismissed:(id)arg1;
- (void)takePresentRect:(id)arg1;
- (void)takePresentListener:(id)arg1;
- (void)takePresentEvent:(id)arg1;
- (void)presentComposerWithEventProperties:(id)arg1 listener:(id)arg2 popoverRect:(id)arg3;
- (void)setListener:(id)arg1;
- (BOOL)isPrivilegedClient;
- (void)setPrivilegedClient:(BOOL)arg1;

@end
