//
//  XperienceCollectionViewCell.h
//
//  Created by Savalas Colbert on 7/17/16.
//  Copyright © 2016 bumpTrack. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Xperience;

@interface XperienceCollectionViewCell : UICollectionViewCell
-(void)configureCellWithXperience:(Xperience *)theXP andWithIndexPath:(NSIndexPath *)indexPath;

   +(NSString*)getReuseIdentifier;
@end
