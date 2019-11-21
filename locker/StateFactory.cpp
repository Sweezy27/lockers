//
//  StateFactory.cpp
//  cs3307 project
//
//  Created by ma c on 2019/10/31.
//  Copyright © 2019 ma c. All rights reserved.
//

#include <stdio.h>
#include "StateFactory.h"
#include "EmptyState.h"
#include "FullState.h"
#include "BlockState.h"
#include "ExpiredState.h"
#include "StateName.h"

#include <iostream>
#include <string.h>

using namespace std;

LockerState * StateFactory::createState(string statename){
    if(statename.compare("empty")==0){
        EmptyState * empty = new EmptyState;
        cout<< "the current state is empty"<<endl;
        return empty;
    }
    else if(statename.compare("block")==0){
        BlockState * block = new BlockState;
        cout<< "the current state is block"<<endl;
        return block;
    }
    else if(statename.compare("full")==0){
        FullState * full = new FullState;
        cout<< "the current state is full"<<endl;
        return full;
    }
    else if(statename.compare("expired")==0){
        ExpiredState * expired = new ExpiredState;
        cout<< "the current state is expired"<<endl;
        return expired;
    }
    else{
        //cout<< "the state is invalid"<<endl;
        //cout<< "the state is automaticlly set to empty"<<endl;
        throw "the state is invalid";
    }
    
}
