//
//  ExpiredState.h
//  cs3307 project
//
//  Created by ma c on 2019/11/13.
//  Copyright © 2019 ma c. All rights reserved.
//

#ifndef ExpiredState_h
#define ExpiredState_h
#ifndef EXPIRED_STATE_H
#define EXPIRED_STATE_H
#include "LockerState.h"
#include <string>
class ExpiredState;

class ExpiredState: public LockerState{
public:
    ExpiredState();
    std::string getStateName();
    virtual void open();
    virtual void store();
    virtual void lock();
    virtual void alarm();
};

#endif

#endif /* ExpiredState_h */
