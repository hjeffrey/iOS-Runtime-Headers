/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSMutableDictionary, PKPaper;

@interface PKPrintSettings : NSObject  {
    NSMutableDictionary *_dict;
    PKPaper *paper;
}

@property(retain) PKPaper * paper;
@property(retain) NSMutableDictionary * dict;

+ (id)printSettingsForPrinter:(id)arg1;
+ (id)default;
+ (id)photo;

- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)settingsDict;
- (void)setDict:(id)arg1;
- (void)setPaper:(id)arg1;
- (id)paper;
- (id)dict;
- (void)removeObjectForKey:(id)arg1;

@end
