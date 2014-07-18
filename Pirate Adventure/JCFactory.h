//
//  JCFactory.h
//  Pirate Adventure
//
//  Created by Joseph Cheung on 17/7/14.
//  Copyright (c) 2014 Reque.st. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JCCharacter.h"
#import "JCBoss.h"

@interface JCFactory : NSObject

- (NSArray *)tiles;
- (JCCharacter *)character;
- (JCBoss *)boss;

@end
