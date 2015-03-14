//
//  DetailViewController.h
//  hello world
//
//  Created by Leslie on 3/14/15.
//  Copyright (c) 2015 Leslie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

