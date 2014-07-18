//
//  JCCharacter.h
//  Pirate Adventure
//
//  Created by Joseph Cheung on 17/7/14.
//  Copyright (c) 2014 Reque.st. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JCArmor.h"
#import "JCWeapon.h"

@interface JCCharacter : NSObject

@property (strong, nonatomic) JCArmor *armor;
@property (strong, nonatomic) JCWeapon *weapon;
@property (nonatomic) int damage;
@property (nonatomic) int health;

@end
