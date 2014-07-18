//
//  JCTile.h
//  Pirate Adventure
//
//  Created by Joseph Cheung on 17/7/14.
//  Copyright (c) 2014 Reque.st. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "JCArmor.h"
#import "JCWeapon.h"

@interface JCTile : NSObject

@property (strong, nonatomic) NSString *story;
@property (strong, nonatomic) UIImage *backgroundImage;
@property (strong, nonatomic) NSString *actionButtonName;
@property (strong, nonatomic) JCArmor *armor;
@property (strong, nonatomic) JCWeapon *weapon;
@property (nonatomic) int healthEffect;

@end
