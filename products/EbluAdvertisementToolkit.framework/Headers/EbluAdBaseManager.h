//
//  EbluAdvertisementBaseManager.h
//  EbluAdvertisementToolkit
//
//  Created by Five CHEN on 2018/11/15.
//  Copyright © 2018年 eblu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EbluAdBaseManager : NSObject
@property(nonatomic) BOOL adEnable;
@property(nonatomic, strong) NSString *adUnitID;
-(void)setAdEnabled:(BOOL)bFlag;
-(void)setAdUnitId:(NSString*) adUnitID;
@end
