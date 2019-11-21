#ifndef STIME_H_
#define STIME_H_

#include <iostream>
#include <fstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <sstream>
#include <time.h>
#include <chrono>
#include <ctime> 



class STime{
public:
	int starttime, storagetime;
	// return the item storage time.
	int getTime();
	// send a warning message to user for item pick-up.
	void warning();
	// record the date when the item was stored.
	void startTime();
	// calculate the storage time.
	void  setStorageTime();
	int getStartTime();
    void setStartTime(int t);
};



#endif /* STIME_H_ */
