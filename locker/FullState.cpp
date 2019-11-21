//
//  main.cpp
//  cs3307 project
//

#include <iostream>
#include "LockerState.h"
#include "FullState.h"
using std::string;

FullState::FullState() : LockerState(){
    
}

std::string getStateName(){
    return "full";
}

void FullState::open(){
    throw "cannot open in this state";
}
void FullState::store(){
    throw "cannot store in this locker";
}

