//
//  FullState.h
//  cs3307 project
//
//  Created by ma c on 2019/10/30.
//  Copyright © 2019 ma c. All rights reserved.
//

#ifndef FullState_h
#define FullState_h
#include "LockerState.h"
#include <string>
class FullState;

class FullState: public LockerState{
public:
    FullState();
    std::string getStateName();
    virtual void open();
    virtual void store();
};


#endif /* FullState_h */
