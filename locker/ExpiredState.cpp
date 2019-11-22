//
//  ExpiredState.cpp
//  cs3307 project
//
//  Created by ma c on 2019/11/13.
//  Copyright © 2019 ma c. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "LockerState.h"
#include "ExpiredState.h"

ExpiredState::ExpiredState(){
    
}

std::string ExpiredState::getStateName(){
    return "expired";
}

void ExpiredState::open(){
    throw "cannot open in this state";
}

void ExpiredState::store(){
    throw "cannot store in this locker";
}

void ExpiredState::lock(){
    throw "the locker is locked";
}

void ExpiredState::alarm(){
    throw "the locker is expired";
}

