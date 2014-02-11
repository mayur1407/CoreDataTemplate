//
//  DetailViewController.h
//  CoreDataTemplate
//
//  Created by Rahul Mahadik on 28/01/14.
//  Copyright (c) 2014 Rahul Mahadik. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
