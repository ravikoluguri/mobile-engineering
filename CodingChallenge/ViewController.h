//
//  ViewController.h
//  CodingChallenge
//
//  Created by Ravi Tega Koluguri on 3/24/14.
//  Copyright (c) 2014 Ravi Tega Koluguri. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end
