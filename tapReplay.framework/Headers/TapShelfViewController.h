//
//  TapShelfViewController.h
//
//  Created by Savalas Colbert on 7/17/16.
//  Copyright © 2016 bumpTrack. All rights reserved.
//

//#import <UIKit/UIKit.h>
//#import "TapReplay.pch"
@class ChannelContent;
@class TapReplayNotifViewController;


@interface TapShelfViewController : UIViewController

- (void)motionSwiped:(UISwipeGestureRecognizer *)swipeGestureRecognizer;
- (void)tapForXperiencesForVideoChannelId:(NSString *)theChannelVideoId andChannelContentDuration:(NSString*)duration andChannelContentCurrentTime:(NSString*)currentTime;

@property (nonatomic,weak) AVPlayer *channelPlayer;
@property (nonatomic, weak) UIView *channelView;
@property (nonatomic, strong) NSMutableArray *xperiences;
@property (nonatomic,strong)NSTimer *tapXperienceTimer;

@property (nonatomic, weak) TapReplayNotifViewController *tapReplayNotif;
@end
