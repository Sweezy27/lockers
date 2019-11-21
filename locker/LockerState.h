//
//  lockerState.h
//  cs3307 project
//
//  Created by ma c on 2019/10/30.
//  Copyright © 2019 ma c. All rights reserved.
//

#ifndef LOCKER_STATE_H
#define LOCKER_STATE_H

class LockerState;
class LockerState
{
public:
    
    LockerState();
    virtual void open();
    virtual void close();
    virtual void alarm();
    virtual void store();
    virtual void timeRecord();
    virtual void lock();
    
    
};

#endif

