//
//  BlockState.cpp
//  cs3307 project
//
//  Created by ma c on 2019/10/31.
//  Copyright © 2019 ma c. All rights reserved.
//

#include <stdio.h>
#include "BlockState.h"
#include "LockerState.h"

BlockState::BlockState(){
    
}

std::string getStateName(){
    return "block";
}

void BlockState::open(){
    throw"cannot open in this state";
}
void BlockState:: store(){
    throw"cannot store in the locker";
}
void BlockState:: lock(){
    throw "the locker is locked";
}
