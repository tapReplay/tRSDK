//
//  Xperience.h
//
//  Created by Savalas Colbert on 8/1/16.
//  Copyright © 2016 bumpTrack. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Xperience : NSObject
   @property (nonatomic, strong) NSString * xp_id;
   @property (nonatomic, strong) NSString * mp_name;
   @property (nonatomic, strong) NSString * xp_info;
   @property (nonatomic, strong) NSNumber * mp_price;
   @property (nonatomic, strong) NSNumber * xp_price;
   @property (nonatomic, strong) NSString * mp_img;
   @property (nonatomic,strong)  NSNumber * xp_isLiked;
   @property (nonatomic,strong)  NSNumber * xp_shipping_price;
   
  -(id)initWithJSON:(id)object;
@end
