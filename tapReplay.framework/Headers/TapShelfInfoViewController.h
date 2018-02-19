//
//  TapShelfInfoViewController.h
//
//  Created by tapReplay Office 2 on 18/02/17.
//  Copyright © 2017 bumpTrack. All rights reserved.
//

#import "TapReplay.pch"
@class Xperience;
@protocol TapShelfInfoViewControllerDelegate
@optional
-(void)hideTapShelfInfoWithIfUserBuyProduct:(BOOL)IfUserBuyProduct;
-(void)refreshDataOnLogoutfromServer;
@end
@interface TapShelfInfoViewController : UIViewController

@property (nonatomic, weak)id <TapShelfInfoViewControllerDelegate> delegate;
@property(nonatomic,strong)NSString * theChannelVideoId;
@property(nonatomic,strong)NSString * duration;
@property (nonatomic,weak) Xperience *theXperience;

@property (nonatomic,strong) CLLocationManager * locationManager;

-(void)setUpForMember:(id)sender withHiddenInfoTextView:(BOOL)hideTextView;
-(void)setUpForGuest:(id)sender;
@end
