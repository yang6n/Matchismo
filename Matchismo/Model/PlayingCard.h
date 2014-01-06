//
//  PlayingCard.h
//  Matchismo
//
//  Created by Jay on 1/5/14.
//  Copyright (c) 2014 EStudio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *) valueSuits;
+ (NSUInteger) maxRank;

@end
