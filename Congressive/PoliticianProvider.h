//
//  PoliticianProvider.h
//  Congressive
//
//  Created by Jessie Serrino on 5/3/15.
//  Copyright (c) 2015 Jessie Serrino. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

#import "AFNRequestManager.h"

@interface PoliticianProvider : AFNRequestManager
+ (instancetype) sharedProvider;
- (void)loadPoliticiansFromLocation: (CLLocationCoordinate2D) location completion:(SuccessBlock)successBlock error:(ErrorBlock)errorBlock;
@end
