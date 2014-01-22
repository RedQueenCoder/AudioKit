//
//  OCSControl.m
//  Objective-C Sound
//
//  Created by Aurelius Prochazka on 6/9/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "OCSControl.h"

@implementation OCSControl


- (instancetype)initWithString:(NSString *)aString
{
    self = [super init];
    if (self) {
        self.parameterString = [NSString stringWithFormat:@"k%@%i", aString, _myID];
    }
    return self;
}

- (instancetype)initGlobalWithString:(NSString *)aString
{
    self = [super init];
    if (self) {
        self.parameterString = [NSString stringWithFormat:@"gk%@%i", aString, _myID];
    }
    return self;
}

- (id)toCPS;
{
    OCSControl *new = [[OCSControl alloc] init];
    [new setParameterString:[NSString stringWithFormat:@"cpspch(%@)", self.parameterString]];
    return new;
}


@end