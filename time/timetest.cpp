#include "STime.h"
#include <iostream>

using namespace std;

 int main(){
	std::string command;
	STime time;

	//cout << "Acceptance Tests1:"<<endl;
	cout << "Get present time(Y/N):";
	cin >> command;
	if(command.compare("Y")==0){
		time.startTime();
		cout << " Time : "  << time.getStartTime() <<endl;
	}
	else{
		cout <<"N/A"<<endl;
	}
	
	cout<<"set start time(Test Only)(YYYYMMDD):";
	cin >> command;
	int t  = stoi(command);
	time.starttime = t;

	cout << "Get storage time(Y/N):";
	cin >> command;
	if(command.compare("Y")==0){
		time.setStorageTime();
		cout << " Time : "  << time.getTime() <<endl;
	}
	else{
		cout <<"N/A"<<endl;
	}

	cout << "Check the worning(Y/N):";
	cin >> command;
	if(command.compare("Y")==0){
		time.warning();
	}
	else{
		cout <<"N/A"<<endl;
	}

	cout << "Fail Test:"<<endl;
	cout<<"set wrong start time(Test Only)(YYYYMMDD):";
	cin >> command;
	int t1  = stoi(command);
    time.setStartTime(t1);
	cout << time.getStartTime() <<endl;

	return 0;
}

