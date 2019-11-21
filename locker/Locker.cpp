#include "Locker.h"

using namespace std;

void Locker :: init(int i, int pwd, std::string state, int t){
    this->lockerID = i;
    this->lockerPassword = pwd;
    StateFactory stateF;
    this->state = stateF.createState(state);
    this->startTime = t;
}

void Locker :: setLockerState(std::string Lstate){
    StateFactory stateF;
    this->state = stateF.createState(Lstate);
}
LockerState* Locker :: getLockerState(){
    return this->state;
}

void Locker :: setLockerID(int lockerId){
    this->lockerID = lockerId;
}

int Locker :: getLockerID(){
    return this->lockerID;
}

void Locker :: setLockerPassword(int lockerp){
    this->lockerPassword = lockerp;
}

int Locker :: getLockerPassword(){
    return this->lockerPassword;
    
}
void Locker :: setStartTime(int t){
    this->startTime = t;
}

int Locker :: getStartTime(){
    return this->startTime;
}

void Locker :: openByManager(){
    cout << "The locker " << this->lockerID << " is opened" << endl;
}

