//
//  Location.h
//  SpeedRunner
//
//  Created by Augustine Rajesh on 07/01/15.
//  Copyright (c) 2015 StraightDriveSolutions. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Run;

@interface Location : NSManagedObject

@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSNumber * longitude;
@property (nonatomic, retain) NSDate * timestamp;
@property (nonatomic, retain) Run *run;

@end
