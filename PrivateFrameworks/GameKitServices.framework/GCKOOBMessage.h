/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSData;

@interface GCKOOBMessage : NSObject <NSCoding> {
    unsigned int type;
    unsigned int band;
    NSData *data;
}


- (id)init;
- (void)dealloc;
- (unsigned int)type;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)band;

@end
