//
//  StateFactory.h
//  cs3307 project
//
//  Created by ma c on 2019/10/31.
//  Copyright © 2019 ma c. All rights reserved.
//

#ifndef StateFactory_h
#define StateFactory_h
#include "LockerState.h"
#include "StateName.h"
#include <string>

class StateFactory;
class StateFactory{
public:
    LockerState * createState(std::string StateName);
};

#endif /* StateFactory_h */
