#include <iostream>
#include "Locker.h"

using namespace std;

int main(){
	std::string input;
	Locker locker;
	bool flag = true;

	int id, pwd, st;
	string state;
	cout << "Initialize a locker:" << endl;
	cout << "ID: ";
	cin >> input;
	while(flag){
                try{
                        id = stoi(input);
                        flag = false;
                }
                catch(std::invalid_argument&){
                        cout << "Invalid input" << endl;
                }
        }
	flag = true;
	cout << "Password: ";
        cin >> input;
        while(flag){
		try{
                        pwd = stoi(input);
                        flag = false;
                }
                catch(std::invalid_argument&){
                        cout << "Invalid input" << endl;
                }
        }
	flag = true;
        cout << "State: ";
        cin >> input;
	state = input;

        cout << "StartTime: ";
	cin >> input;
	while(flag){
                try {
                     	st = stoi(input);
                        flag = false;
                }
                catch (std::invalid_argument&){
                        cout << "Invalid input" << endl;
                }
        }
	flag = true;
	locker.init(id,pwd,state,st);
	cout << "Locker is initialized to: " << "ID is "<< locker.getLockerID() << ", password is "<<locker.getLockerPassword() << " state time is " <<locker.getStartTime()<< "." << endl;
    cout<< "Locker State (try open):";
    try{
        locker.getLockerState()->open();
    }
    catch(const char* msg){
        cerr << msg << endl;
    }

	cout << "Change locker start time(int):";
	cin >> input;
	while(flag){
		try {
			locker.setStartTime(stoi(input));
			flag = false;
		}
		catch (std::invalid_argument&){
			cout << "Invalid input" << endl;
		}
	}
	flag = true;
	cout << "Locker start time is changed to: " << locker.getStartTime() << endl;

	cout << "Change locker state(string):";
	cin >> input;
	locker.setLockerState(input);
    cout << "Locker state changed(try open):" ;
    try{
        locker.getLockerState()->open();
    }
    catch(const char* msg){
        cerr << msg << endl;
    }

	cout << "Change locker ID(int):";
	cin >> input;
	while(flag){
		try{
			locker.setLockerID(stoi(input));
			flag = false;
		}
		catch(std::invalid_argument&){
               		cout << "Invalid input" << endl;
		}
	}
	flag = true;
	cout << "Locker Id is changed to: " << locker.getLockerID() << endl;

	cout << "Change locker Password(int):";
	cin >> input;
	while(flag){
		try{
			locker.setLockerPassword(stoi(input));
			flag = false;
		}
		catch(std::invalid_argument&){
                	cout << "Invalid input" << endl;
		}
	}
	cout << "Locker password is changed to: " << locker.getLockerPassword() << endl;
}
