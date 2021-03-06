/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKComposeRecipient : NSObject  {
    void *_record;
    int _recordID;
    int _property;
    int _identifier;
    NSString *_address;
    NSString *_label;
}

+ (id)recipientWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4;
+ (id)recipientWithProperty:(int)arg1 address:(id)arg2;
+ (id)recipientWithRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3;

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)unlocalizedLabel;
- (id)commentedAddress;
- (void)setRecord:(void*)arg1 recordID:(int)arg2 identifier:(int)arg3;
- (int)recordID;
- (BOOL)isPhone;
- (id)compositeName;
- (BOOL)isEmail;
- (id)uncommentedAddress;
- (id)_unformattedAddress;
- (void*)record;
- (id)initWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5;
- (id)address;
- (id)displayString;
- (id)label;
- (int)identifier;
- (void)setIdentifier:(int)arg1;
- (int)property;

@end
