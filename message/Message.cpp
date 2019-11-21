#include <iostream>
#include <string>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "Message.h"

using namespace std;


void Message::sendMessage(std::string phonenum, int lockerId, int pwd){
    
    std::string account_sid = "AC8673ae9bdb5cf4ced61f91b96ae21f7d";
    std::string auth_token = "ec7282f7d1cb597a9c33bcbd7aef64e8";
    std::string message;
    std::string from_number = "+12028665409";
    std::string to_number;
    std::string picture_url;
    bool verbose = false;
    //opterr = 0;
    std::string response;
    auto twilio = std::make_shared<twilio::Twilio>(
       account_sid,
       auth_token
    );
    
    to_number = "+1" + phonenum;
    
    message = "Your parcel is in locker " + to_string(lockerId) + " and the password is " + to_string(pwd) + ".";


    bool message_success = twilio->send_message(
           to_number,
           from_number,
           message,
           response,
           picture_url,
           verbose
    );

    // Report success or failure
    if (!message_success) {
           cout << "Message send failed, phone number is invalid." << endl;
                   
    } else{
           cout << "SMS sent successfully!" << endl;
    }
}
