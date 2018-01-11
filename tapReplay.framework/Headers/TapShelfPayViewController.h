//
//  TapShelfPayViewController.h
//  bumpTrack
//
//  Created by Savalas Colbert on 8/1/16.
//  Copyright © 2016 bumpTrack. All rights reserved.
//

//#import <UIKit/UIKit.h>
#import "TapReplay.pch"
@class Xperience;

@protocol TapShelfPayViewControllerDelegate
@optional
-(void)tapReplayConnectionChanged:(id)sender;
-(void)hideTapShelfPayToShowInfo;
-(void)refreshDataOnLogoutfromServer;
@end

@interface TapShelfPayViewController : UIViewController


      -(void)setUpForGuest:(id)sender ;
      -(void)setUpForMember:(id)sender withHiddenInfoTextView:(BOOL)hideTextView;
       
     @property (nonatomic, weak)id <TapShelfPayViewControllerDelegate> delegate;
     @property (nonatomic,weak) Xperience *theXperience;
     @property(nonatomic,strong)NSString * theChannelVideoId;
     @property(nonatomic,strong)NSString * duration;
     @property(nonatomic,strong)NSString * currentTime;
     @property (nonatomic,strong) NSMutableArray *otherXPs;
     @property (nonatomic,weak)IBOutlet UIButton *cancelBtn;
     @property (nonatomic,assign)BOOL wasConnected;
     @property (nonatomic,strong) UIView * xpCollectionView;
     @property (nonatomic,strong) UIView * viewTapShelf;
     @property (nonatomic,strong) CLLocationManager * locationManager;
@end
