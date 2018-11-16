//
//  IntersectAdHelper.h
//  SoundTouchDemo
//
//  Created by C on 16/5/8.
//  Copyright © 2016年 chuliangliang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>



typedef NS_ENUM(NSUInteger, AD_PROVIDER_TYPE) {
    AD_PROVIDER_TYPE_ADMOB = 0,
    AD_PROVIDER_TYPE_FACEBOOK,
    AD_PROVIDER_TYPE_MOPUB,
    AD_PROVIDER_TYPE_COUNT,
};

@interface IntersectAdHelper : NSObject
+ (instancetype)sharedInstance;
-(BOOL)showInterstitial:(UIViewController *)viewController;
-(BOOL) loadInterstitial;
-(BOOL) configureAdSDK;
-(void)setAdEnabled:(BOOL)bFlag;
-(void)setAdUnitId:(NSString*) adUnitID;
-(void)setlargeAdsFrequency:(NSTimeInterval)frequency;
-(void)setlargeAdsProvider:(AD_PROVIDER_TYPE)adProvider;
@end
