//
//  Deck.h
//  Matchismo
//
//  Created by Jay on 1/5/14.
//  Copyright (c) 2014 EStudio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
