/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSString;

@interface FTProfileValidateEmailMessage : FTProfileMessage <NSCopying> {
    NSString *_email;
    NSNumber *_onlyCheck;
}

@property(copy) NSString * emailAddress;
@property(copy) NSNumber * onlyCheck;


- (id)emailAddress;
- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setOnlyCheck:(id)arg1;
- (id)onlyCheck;
- (id)requiredKeys;
- (id)bagKey;
- (void)setEmailAddress:(id)arg1;

@end
