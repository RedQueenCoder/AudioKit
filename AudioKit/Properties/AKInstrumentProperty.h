//
//  AKInstrumentProperty.h
//  AudioKit
//
//  Created by Aurelius Prochazka on 7/18/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "AKControl.h"

/** Instrument properties are properties of an instrument that are shared
 amongst all the notes that are created on that instrument.
 */
@interface AKInstrumentProperty : AKControl

/// Optional pretty name for properties useful for debugging.
@property (nonatomic, strong) NSString *name;

// String with the appropriate chnget statement for the CSD File
- (NSString *)stringForCSDGetValue;

// String with the appropriate chnset statement for the CSD File
- (NSString *)stringForCSDSetValue;

/// Scale the property in its own range given another range and value
/// @param value   Source value.
/// @param minimum Minimum value in source range.
/// @param maximum Maximum value in source range.
- (void)scaleWithValue:(float)value
               minimum:(float)minimum
               maximum:(float)maximum;

@end
