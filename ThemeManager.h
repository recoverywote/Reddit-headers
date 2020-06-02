//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "UITraitEnvironment-Protocol.h"

@class AppSettings, CLLocation, CLLocationManager, EDSunriseSet, NSString, NSTimer, RUITheme, UITraitCollection;

@interface ThemeManager : NSObject <CLLocationManagerDelegate, UITraitEnvironment>
{
    int _authorizationStatus;
    UITraitCollection *_traitCollection;
    RUITheme *_cachedNonAnonymousBrowsingTheme;
    AppSettings *_appSettings;
    CLLocationManager *_locationManager;
    NSTimer *_updateTimer;
    CDUnknownBlockType _enableAutoModeCompletion;
}

+ (id)keyPathsForValuesAffectingIsAutoDarkModeEnabled;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType enableAutoModeCompletion; // @synthesize enableAutoModeCompletion=_enableAutoModeCompletion;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(nonatomic) int authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(readonly, nonatomic) AppSettings *appSettings; // @synthesize appSettings=_appSettings;
@property(retain, nonatomic) RUITheme *cachedNonAnonymousBrowsingTheme; // @synthesize cachedNonAnonymousBrowsingTheme=_cachedNonAnonymousBrowsingTheme;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)setupTimer;
- (id)nextSunsetDate;
- (id)nextSunriseDate;
- (_Bool)isAutoDarkModeOverriden;
- (_Bool)isDaylight;
@property(readonly, nonatomic) EDSunriseSet *sunriseSetTomorrow;
@property(readonly, nonatomic) EDSunriseSet *sunriseSetToday;
- (void)updateLocation;
@property(readonly, nonatomic) CLLocation *currentLocation;
- (_Bool)isLocationAuthorized;
- (void)toggleBetweenLightOrDarkMode;
- (void)toggleAnonymousBrowsingThemeIsEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)switchToDarkTheme;
- (void)switchToLightTheme;
- (void)updateThemeIfNeeded;
- (id)themeForThemeType:(unsigned long long)arg1;
@property(readonly, nonatomic) RUITheme *anonymousBrowsingTheme;
@property(readonly, nonatomic) RUITheme *darkTheme;
@property(readonly, nonatomic) RUITheme *lightTheme;
@property(nonatomic) unsigned long long darkThemeSetting;
@property(nonatomic) unsigned long long lightThemeSetting;
- (void)setIsAutoDarkModeEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isAutoDarkModeEnabled;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)updateFontSizeDelta:(long long)arg1;
- (void)updateCurrentTheme:(id)arg1 onVisibleObserversDidUpdate:(CDUnknownBlockType)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithAppSettings:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

