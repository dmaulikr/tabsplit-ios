//
//  TabViewItemCell.h
//  TabSplit
//
//  Created by Herbert Poul on 11/16/11.
//  Copyright (c) 2011 N/A. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TabViewItemCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *itemLabel;
@property (weak, nonatomic) IBOutlet UILabel *itemAmount;

@end
