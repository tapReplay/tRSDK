//
//  TR_Config.h
//  bumpTrack
//
//  Created by Savalas Colbert on 8/2/16.
//  Copyright © 2016 bumpTrack. All rights reserved.
//

#ifndef TR_Config_h
#define TR_Config_h

// Change this url depending on the name of your web hosting.
#define TR_URL_BASE_STAGE @"http://stage.tapreplay.com/api/app"
#define TR_URL_BASE_PROD @"https://member.tapreplay.com/api/app"

#define TR_Token_Member @"tok"
#define TR_Connect_Code @"connect_code"
#define TR_User_Member @"tr_User"

#define TR_URL_BASE TR_URL_BASE_PROD
#define TR_Info_Plist @"TRInfo"

#define TR_Token @"TR_Token"
#define TR_Secret @"TR_Secret"
#define NULL_TO_NIL(obj) ({ __typeof__ (obj) __obj = (obj); __obj == [NSNull null] ? nil : obj; })
//Helpers
/*#ifdef CURRENT_IDIOM UI_USER_INTERFACE_IDIOM()
 
 #ifdef IS_IPAD UIUserInterfaceIdiomPad
 
 #ifdef IS_IPHONE UIUserInterfaceIdiomPhone
 
 #ifdef DOES_SUPPORT_IOS6_1_OR_BELOW (floor(NSFoundationVersionNumber) <= NSFoundationVersionNumber_iOS_6_1) ? YES : NO
 
 #ifdef DOES_SUPPORT_IOS7 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7) ? YES : NO
 
 #ifdef LOCALIZED(str) NSLocalizedString(str, nil)
 
 #ifdef LOCALIZED_NOT_NULL(str) NSLocalizedString(str, @"")
 
 #ifdef IS_OS_8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
 
 #ifdef IS_IPHONE_6_PLUS_AND_ABOVE ( [[UIScreen mainScreen] scale] > 2.1 ) ? YES : NO
 
 #ifdef NULL_TO_NIL(obj) ({ __typeof__ (obj) __obj = (obj); __obj == [NSNull null] ? nil : obj; })*/


#endif /* TR_Config_h */
