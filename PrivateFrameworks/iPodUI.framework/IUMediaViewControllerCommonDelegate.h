/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSDate, IUNowPlayingNavigationButton;

@interface IUMediaViewControllerCommonDelegate : NSObject <UINavigationControllerDelegate, UITabBarControllerDelegate> {
    int _ignoreStatusBarChangeCount;
    IUNowPlayingNavigationButton *_nowPlayingButton;
    int _ignoreNowPlayingChangeCount;
    NSDate *_timeWhenRootViewControllerWasShown;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)timeWhenRootViewControllerWasShown;
- (void)endIgnoringNowPlayingChanges;
- (void)beginIgnoringNowPlayingChanges;
- (void)updateNowPlayingForTopViewController;
- (void)_pushNowPlayingControllerAnimated:(BOOL)arg1;
- (void)_setNowPlayingButtonVisible:(BOOL)arg1 forController:(id)arg2 animated:(BOOL)arg3;
- (void)updateNowPlayingForTopViewControllerAnimated:(BOOL)arg1;
- (void)_nowPlayingChangedNotification:(id)arg1;
- (void)_nowPlayingButtonAction:(id)arg1;
- (void)endIgnoringStatusBarChanges;
- (void)beginIgnoringStatusBarChanges;
- (void)tabBarController:(id)arg1 willSelectViewController:(id)arg2;
- (BOOL)tabBarController:(id)arg1 canSelectViewController:(id)arg2;

@end
