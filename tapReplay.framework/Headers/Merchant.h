//
//  Merchant.h
//  tapReplay
//
//  Created by Savalas Colbert on 2/27/16.
//  Copyright © 2016 tapReplay. All rights reserved.
//

#import "TapReplay.pch"
@interface Merchant : NSObject
   @property (nonatomic, strong) NSString * name;
   @property (nonatomic, strong) NSArray * users;

   +(void)load;
@end
