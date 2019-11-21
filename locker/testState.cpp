//
//  test.cpp
//  cs3307 project
//
//  Created by ma c on 2019/11/13.
//  Copyright © 2019 ma c. All rights reserved.
//

#include <stdio.h>
#include "StateFactory.h"
#include "LockerState.h"
#include "EmptyState.h"
#include "FullState.h"
#include "BlockState.h"
#include "ExpiredState.h"
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, const char * argv[]){
    StateFactory SetState;
    //LockerState state;
    string input;
    cout<<"What state would you like to set: ";
    cin >> input;
    try{
        SetState.createState(input);
    }catch(const char* msg){
        cerr <<msg<<endl;
    }
    int action;
    cout<<"what would you like to do (1:open/2:close/3:alarm/4:store/5:lock): ";
    cin>> action;
    if(action == 1){
        try{
            SetState.createState(input)->open();
        }catch(const char* msg){
            cerr <<msg<<endl;
        }
    }
    else if (action == 2){
        try{
            SetState.createState(input)->close();
        }catch(const char* msg){
            cerr <<msg<<endl;
        }
    }
    else if (action == 3){
        try{
            SetState.createState(input)->alarm();
        }catch(const char* msg){
            cerr <<msg<<endl;
        }
    }
    else if (action == 4){
        LockerState * state;
        try{
            state = SetState.createState(input);
            //state = SetState.createState(input);
            state->store();
        }catch(const char* msg){
            cerr <<msg<<endl;
        }
    }
    else if (action == 5){
        try{
            SetState.createState(input)->lock();
        }catch(const char* msg){
            cerr <<msg<<endl;
        }
    }
    else{
        cout<<"invalid action";
    }
    
    return 0;
}
