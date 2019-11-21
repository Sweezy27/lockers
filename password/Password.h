#ifndef PASSWORD_H_
#define PASSWORD_H_

#include <iostream>
#include <fstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <sstream>

class Password{

private:

	//create the private variable
	int password;


public:

	//give a value to password by a random 6-digit integer
	void createNewPassword();

	//compare the password to an input password
	//if it is same, return true, else return false
	bool compare(Password p);

	//return the password by integer
	int getPassword();

	//set the password by input integer
	void setPassword(int pw);


};




#endif /* PASSWORD_H_ */
