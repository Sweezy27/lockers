#ifndef LOCKER_H
#define LOCKER_H

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "StateFactory.h"

class Locker{

private:
    //Attributes
    int lockerID;
    int lockerPassword;
    LockerState* state;
    int startTime;

public:
    void init(int i, int pwd, std::string state, int t);
    //set locker state function
    void setLockerState(std::string Lstate);
    //get locker state function
    LockerState* getLockerState();
    //set function of lockerID
    void setLockerID(int lockerId);
    //get method of lockerID
    int getLockerID();
    //set method of  locker's password
    void setLockerPassword(int locerp);
    //get method of locker's password
    int getLockerPassword();
    void setStartTime(int t);
    int getStartTime();
    
    void openByManager();
};

#endif
