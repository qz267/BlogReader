//
//  DetailViewController.h
//  BlogReader
//
//  Created by Zheng Qin on 7/29/13.
//  Copyright (c) 2013 Zheng Qin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
