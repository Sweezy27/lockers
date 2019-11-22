//
//  EmptyState.h
//  cs3307 project
//
//  Created by ma c on 2019/11/13.
//  Copyright © 2019 ma c. All rights reserved.
//

#ifndef EMPTY_STATE_H
#define EMPTY_STATE_H
#include "LockerState.h"
#include <string>

class EmptyState;

class EmptyState: public LockerState{
public:
    EmptyState();
    std::string getStateName();
    
};

#endif
