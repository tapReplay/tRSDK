//
//  MerchantOffer.h
//  tapReplay
//
//  Created by Savalas Colbert on 2/27/16.
//  Copyright © 2016 tapReplay. All rights reserved.
//

@class Xperience;
@class Merchant;
#import "TapReplay.pch"
@interface MerchantOffer : NSObject
   @property (nonatomic, strong) Xperience * xp;
   @property (nonatomic, strong) Merchant *merchant;
@end
