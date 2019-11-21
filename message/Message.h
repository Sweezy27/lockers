#ifndef MESSAGE_H_
#define MESSAGE_H_

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <sstream>
#include "twilio.hh"

class Message{

public:

    void sendMessage(std::string phonenum, int lockerId, int pwd);

};




#endif

