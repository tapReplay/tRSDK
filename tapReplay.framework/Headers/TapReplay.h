//
//  TapReplay.h
//  bumpTrack
//
//  Created by Savalas Colbert on 7/17/16.
//  Copyright © 2016 bumpTrack. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TapReplay.pch"
@class OfferViewController;


@protocol TapReplayDelegate <NSObject>
@optional
//tapShelf will Open
//tapShelf did  Open
//tapShelf will Close
//tapShelf did  Close
//tapShelf purchase made
//tapShelf purchase processing
//tapNotifictaion Will Show
//tapNotifictaion Did Show
//tapNotifictaion will Hide
//tapNotifictaion Did Hide
@end

@interface TapReplay : NSObject
@property(nonatomic,assign) id<TapReplayDelegate> delegate;

- (id)initWithChannelView:(UIView *)theChannelView  andAVPlayer:(AVPlayer *)thePlayer andAuthId:(NSString *)theAuthId andSecret:(NSString *)secret andTRUser:(NSString *)theTRUser;

- (void)setCurrentChannelVideoId:(NSString *)currentChannelVideoId;

- (void)motionSwiped:(UISwipeGestureRecognizer *)swipeGesture;
-(void)initialiseVideoPlayerWithPlayer :(AVPlayer *)thePlayer;
@end
