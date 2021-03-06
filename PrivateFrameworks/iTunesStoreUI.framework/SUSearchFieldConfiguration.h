/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUSearchFieldConfiguration : NSObject <NSCopying> {
    NSString *_cancelString;
    struct __CFDictionary { } *_hintURLs;
    int _location;
    NSString *_placeholder;
    BOOL _rootViewOnly;
    struct __CFDictionary { } *_searchURLs;
    NSString *_userDefaultsKey;
    float _width;
}

@property(readonly) NSString * cancelString;
@property(getter=isRootViewOnly,readonly) BOOL rootViewOnly;
@property(readonly) int location;
@property(readonly) NSString * placeholderString;
@property(readonly) NSString * userDefaultsKey;
@property(readonly) float width;

+ (id)defaultConfiguration;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)placeholderString;
- (int)location;
- (id)initWithDictionary:(id)arg1;
- (float)width;
- (id)userDefaultsKey;
- (id)cancelString;
- (id)hintsURLRequestPropertiesForNetworkType:(int)arg1;
- (id)URLRequestPropertiesWithBaseURL:(id)arg1 forNetworkType:(int)arg2;
- (struct __CFDictionary { }*)_newURLsDictionaryWithDictionary:(id)arg1;
- (id)_newQueryStringDictionaryForNetworkType:(int)arg1;
- (void)_setSearchURLsFromDictionary:(id)arg1;
- (int)_locationForString:(id)arg1;
- (void)_setHintURLsFromDictionary:(id)arg1;
- (id)_urlRequestPropertiesForURLBagKey:(id)arg1 networkType:(int)arg2;
- (id)_initWithoutDictionary;
- (BOOL)isRootViewOnly;
- (id)searchURLRequestPropertiesForNetworkType:(int)arg1;
- (void)loadFromDictionary:(id)arg1;

@end
