//
//  BlockState.h
//  cs3307 project
//
//  Created by ma c on 2019/10/31.
//  Copyright © 2019 ma c. All rights reserved.
//

#ifndef BlockState_h
#define BlockState_h
#include "LockerState.h"

class BlockState;

class BlockState: public LockerState{
public:
    BlockState();
    std::string getStateName();
    virtual void open();
    virtual void store();
    virtual void lock();
};

#endif /* BlockState_h */
