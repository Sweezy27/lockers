#include <iostream>
#include <string>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "Message.h"

using namespace std;

int main(){
    
    std::string command;
    Message msg;
    int id, pwd;
    string phonenum;

    cout << "Input the locker ID: ";
    cin >> command;
    
    id = stoi(command);
    
    cout << "Input the password: ";
    cin >> command;
    
    pwd = stoi(command);
    
    cout << "Input the phone number: ";
    cin >> command;
    
    phonenum = command;
    
    msg.sendMessage(phonenum, id, pwd);
    
    return 0;
}
