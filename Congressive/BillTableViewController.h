//
//  BillTableViewController.h
//  Congressive
//
//  Created by Jessie Serrino on 5/19/15.
//  Copyright (c) 2015 Jessie Serrino. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FederalPolitician.h"
#import "PoliticianDetail.h"

@interface BillTableViewController : UITableViewController <PoliticianDetailProtocol, UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, weak) FederalPolitician *politician;
@property (nonatomic, strong) NSArray *bills;

@end
