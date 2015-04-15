//
//  staticLib.h
//  staticLib
//
//  Created by Letsgomo Lab on 4/15/15.
//  Copyright (c) 2015 Letsgomo Lab. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface staticLib : NSObject


-(void)initializeAppiraterWithAppID:(NSString*)appID;
-(void)configureAppiraterWithDaysUntilPrompt:(NSInteger)numberOfDays usesUntilPrompt:(NSInteger)numberOFUses significantEventUntilPrompt:(NSInteger)numberOFEvents timeBeforeReminding:(NSInteger)timeBeforeReminding;

-(void)setDebugMode:(BOOL)isDebug;

-(void)appEnteredForeground;

-(void)setSignificantEvent:(BOOL)isSignificant;


@end
