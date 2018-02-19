//
//  TapReplayManager.h
//
//  Created by Savalas Colbert on 8/5/16.
//  Copyright © 2016 bumpTrack. All rights reserved.
//

#import <Foundation/Foundation.h>
@class TR_User;

@protocol TapReplayManagerDelegate
@optional
@end

@interface TapReplayManager : NSObject
@property (nonatomic, strong) NSString * tok;
@property (nonatomic, strong) NSString * tr_Token;
@property (nonatomic, strong) NSString * tr_Secret;
@property (nonatomic,strong)  NSString * connectCode;
@property (nonatomic, strong) TR_User  * member;

+ (id)sharedManager;
- (void)deleteTok;

@end
