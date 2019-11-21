#include <iostream>
#include "Password.h"

using namespace std;

int main() {

	std::string command;
	Password p1, p2, p3;

	cout << "Get a random password(Y/N): ";
	cin >> command;

	if(command.compare("Y") == 0){
		p1.createNewPassword();
		cout << "Password created: " << p1.getPassword() << endl;
	}
	else{
		cout << "Password not created" << endl;
	}

	cout << "Set a 6-digit password to change: ";
	cin >> command;


	p1.setPassword(stoi(command));

	cout << "Password already set: " << p1.getPassword() << endl;

	cout << "Set a 6-digit password to compare: ";
	cin >> command;

	p2.setPassword(stoi(command));

	cout << "First password is: " << p1.getPassword() << endl;
	cout << "Second password is: " << p2.getPassword() << endl;

	if(p1.compare(p2)){
		cout << "Same" << endl;
	}
	else{
		cout << "Different" << endl;
	}
	//fail test

	cout << "Set a not 6-digit password: ";
	cin >> command;

	try{
		p3.setPassword(stoi(command));
	}
	catch(const char* msg){
		cerr << msg << endl;
	}

	return 0;
}
