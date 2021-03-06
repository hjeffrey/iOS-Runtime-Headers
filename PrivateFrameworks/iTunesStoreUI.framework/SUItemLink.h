/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, NSString;

@interface SUItemLink : NSObject <NSCopying> {
    int _linkTarget;
    int _linkType;
    NSString *_title;
    NSURL *_url;
}

@property int linkTarget;
@property int linkType;
@property(copy) NSString * title;
@property(retain) NSURL * URL;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setURL:(id)arg1;
- (id)URL;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setLinkType:(int)arg1;
- (void)setLinkTarget:(int)arg1;
- (int)linkTarget;
- (int)linkType;

@end
