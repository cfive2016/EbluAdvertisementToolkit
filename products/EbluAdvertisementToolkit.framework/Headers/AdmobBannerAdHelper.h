//
//  AdmobBannerAdHelper.h
//  emoji
//
//  Created by C on 15/4/4.
//  Copyright (c) 2015年 C. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GoogleMobileAds.h>
#import "EbluAdBaseManager.h"

@interface AdmobBannerAdHelper : EbluAdBaseManager
-(GADBannerView *) getAdView;
-(void)LoadAd;
+ (instancetype)sharedInstance;
-(CGFloat) getBannerAdHegiht;
@end
