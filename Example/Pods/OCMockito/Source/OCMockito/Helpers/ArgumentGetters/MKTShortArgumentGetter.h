//  OCMockito by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2015 Jonathan M. Reid. See LICENSE.txt

#import "MKTArgumentGetter.h"


@interface MKTShortArgumentGetter : MKTArgumentGetter

- (instancetype)initWithSuccessor:(MKTArgumentGetter *)successor;

@end
