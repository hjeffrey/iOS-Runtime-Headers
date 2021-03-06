/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUTabBarController, UINavigationController, ISOperation, SSRemoteNotificationClient, SUPlaceholderViewController, SULocationObserver, SUSectionsResponse, SUMediaPlayerViewController, NSURL, NSString;

@interface SUClientApplicationController : SUClientController <SUTabBarControllerDelegate> {
    SUMediaPlayerViewController *_activeMediaPlayer;
    SUPlaceholderViewController *_fetchSectionsPlaceholder;
    int _ignoreDownloadQueueChangeCount;
    NSURL *_launchURL;
    SUSectionsResponse *_lastBackgroundSectionsResponse;
    SUSectionsResponse *_lastSectionsResponse;
    ISOperation *_loadSectionsOperation;
    SULocationObserver *_locationObserver;
    NSString *_preMediaDefaultPNG;
    BOOL _reloadForStorefrontChangeAfterAccountSetup;
    BOOL _reloadSectionsOnNextLaunch;
    SSRemoteNotificationClient *_remoteNotificationClient;
    SUTabBarController *_tabBarController;
}

@property(getter=isIgnoringDownloadQueueChanges,readonly) BOOL ignoringDownloadQueueChanges;
@property(readonly) NSString * defaultPNGNameForSuspend;
@property(readonly) NSURL * launchURL;
@property(getter=wasLaunchedFromLibrary,readonly) BOOL launchedFromLibrary;
@property(getter=isTabBarControllerLoaded,readonly) BOOL tabBarControllerLoaded;
@property(readonly) SUTabBarController * tabBarController;
@property(readonly) UINavigationController * topNavigationController;
@property(getter=_activeMediaPlayer,setter=_setActiveMediaPlayer:,retain) SUMediaPlayerViewController * _activeMediaPlayer;

+ (id)sharedController;
+ (void)setSharedController:(id)arg1;

- (void)cancelAllOperations;
- (void)dealloc;
- (id)tabBarController;
- (double)defaultImageSnapshotExpiration;
- (void)_setActiveMediaPlayer:(id)arg1;
- (id)showMainPageForItemKind:(id)arg1 sectionIdentifiers:(id)arg2;
- (BOOL)isIgnoringDownloadQueueChanges;
- (void)endIgnoringDownloadQueueChanges;
- (void)beginIgnoringDownloadQueueChanges;
- (void)_cancelSectionFetchPlaceholder;
- (void)_restorePreMediaPlayerSettings;
- (id)_accountViewController;
- (void)_setupTabBarController;
- (void)_beginObservingLocation;
- (void)_remoteNotificationsAvailableNotification:(id)arg1;
- (void)performActionForRemoteNotification:(id)arg1;
- (id)_activeMediaPlayer;
- (BOOL)presentAccountViewController:(id)arg1 showNavigationBar:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)displayClientURL:(id)arg1;
- (void)bagDidLoadNotification:(id)arg1;
- (void)presentExternalURLViewController:(id)arg1;
- (void)_reloadWithSectionsResponse:(id)arg1;
- (void)_handleSectionsLoadFailedWithError:(id)arg1;
- (id)launchURL;
- (void)_defaultHandleApplicationURLRequestProperties:(id)arg1;
- (void)_handleAccountURL:(id)arg1;
- (void)_handleSearchURL:(id)arg1;
- (BOOL)_showWildcatAccountViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_retrySectionsAfterNetworkTransition;
- (BOOL)_reloadForStorefrontChange;
- (id)_resumableViewController;
- (void)_dialogDidFinishNotification:(id)arg1;
- (void)_cancelSuspendAfterDialogsDismissed;
- (id)topNavigationController;
- (id)defaultPNGNameForSuspend;
- (void)_handleFinishedLoadSectionsOperation:(id)arg1;
- (void)_presentSectionFetchUI;
- (BOOL)_loadSectionsAllowingCache:(BOOL)arg1 withCompletionBlock:(id)arg2;
- (void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1;
- (void)setupUI;
- (void)_cancelLoadSectionsOperation;
- (void)tearDownUI;
- (void)_accountControllerDisappearedNotification:(id)arg1;
- (void)_selectFooterSectionNotification:(id)arg1;
- (void)_storeFrontChangedNotification:(id)arg1;
- (BOOL)wasLaunchedFromLibrary;
- (void)returnToLibrary;
- (BOOL)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;
- (void)_restrictionsChangedNotification:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1;
- (BOOL)dismissTopViewControllerAnimated:(BOOL)arg1;
- (BOOL)gotoStorePage:(id)arg1 animated:(BOOL)arg2;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (BOOL)isTabBarControllerLoaded;
- (BOOL)selectSectionWithIdentifier:(id)arg1;
- (void)dismissOverlayBackgroundViewController;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
- (id)overlayBackgroundViewController;
- (void)exitStoreAfterDialogsDismiss;
- (void)becomeActive;
- (void)resignActive;
- (id)copySuspendSettings;
- (BOOL)openClientURL:(id)arg1;
- (void)dequeueRemoteNotifications;

@end
