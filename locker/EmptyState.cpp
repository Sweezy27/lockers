//
//  EmptyState.cpp
//  cs3307 project
//
//  Created by ma c on 2019/11/13.
//  Copyright © 2019 ma c. All rights reserved.
//

#include "EmptyState.h"
#include <iostream>
#include "EmptyState.h"
#include "LockerState.h"


using std::string;

EmptyState::EmptyState(){
}

std::string EmptyState::getStateName(){
    return "empty";
}
