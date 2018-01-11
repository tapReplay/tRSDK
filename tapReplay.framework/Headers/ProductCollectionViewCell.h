//
//  ProductCollectionViewCell.h
//  MusicVidz
//
//  Created by Savalas Colbert on 2/27/16.
//  Copyright © 2016 MusicVidz. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MerchantOffer;
@class Hotel_Expedia;

@interface ProductCollectionViewCell : UICollectionViewCell


   -(void)purchaseOffer;

   +(NSString*)getReuseIdentifier;
@end
