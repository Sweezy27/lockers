#include "Password.h"

using namespace std;

void Password::createNewPassword(){

	//to avoid produce the same number from rand function
	srand((unsigned)time(NULL));
	//give password a random value of integer from 100000 to 999999
	this->password = (rand() % (900000))+ 100000;
}


bool Password::compare(Password p){

	//compare two integer by call getPassword function
	if(this->password == p.getPassword()){
		return true;
	}
	else{
		return false;
	}
}


int Password::getPassword(){

	return this->password;
}

void Password::setPassword(int pw){

	try{
		if(pw > 999999 || pw < 100000){
				throw "Invalid password";
			}
			else{
				this->password = pw;
			}
	}
	catch (const char* msg) {
	     cerr << msg << endl;
	}
}
