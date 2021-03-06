//
//  PoliticianIDProvider.h
//  Congressive
//
//  Created by Jessie Serrino on 5/18/15.
//  Copyright (c) 2015 Jessie Serrino. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNRequestManager.h"
#import "FederalPolitician.h"



@interface PoliticianIDProvider : AFNRequestManager

+ (instancetype) sharedProvider;
- (void) IDforPolitician: (FederalPolitician *) politician withCompletion: (SuccessBlock) successBlock andError: (ErrorBlock) errorBlock;

@end
