//
//  ORSettingsViewController.h
//  Puttio
//
//  Created by orta therox on 15/12/2012.
//  Copyright (c) 2012 ortatherox.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ORSettingsViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *subtitlesLabel;

@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *flagButtons;

@end
