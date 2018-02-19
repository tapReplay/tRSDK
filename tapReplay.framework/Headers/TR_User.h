//
//  TR_User.h
//
//  Created by Savalas Colbert on 8/5/16.
//  Copyright © 2016 bumpTrack. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TR_User : NSObject<NSCoding>
   @property (nonatomic,strong) NSString * firstName;
   @property (nonatomic,strong) NSString * lastName;
   @property (nonatomic,strong) NSString * profileName;
   @property (nonatomic,strong) NSString * usernameEmail;
   @property (nonatomic,strong) NSString * img_url;
   @property (nonatomic,strong) NSNumber * gender_id;

  - (id)initWithJSON:(id)object;
@end
