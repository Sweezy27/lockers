//
//  lockerState.cpp
//  cs3307 project
//
//  Created by ma c on 2019/10/30.
//  Copyright © 2019 ma c. All rights reserved.
//

#include "LockerState.h"
#include <iostream>
using namespace std;

LockerState::LockerState()
{
   
}

void LockerState::open()
{
    cout<<"the locker is opened"<<endl;
}

void LockerState::close()
{
    cout<<"the locker is closed"<<endl;
}

void LockerState::alarm()
{
    cout<<"the locker is alarming"<<endl;
}

void LockerState::store()
{
    cout<<"the locker can store now"<<endl;
}

void LockerState::timeRecord()
{
    
}

void LockerState::lock()
{
    cout<<"the locker is locked"<<endl;
}
