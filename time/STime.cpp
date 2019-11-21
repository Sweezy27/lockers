#include "STime.h"

using namespace std;

void STime :: setStorageTime(){
	time_t rawtime;
	struct tm *info;
	char buffer[80];
	time( &rawtime );
	info = localtime( &rawtime );
	strftime(buffer, 80, "%Y%m%d", info);
	int presentTime = atoi(buffer);
	
	int array[8],timeA[3],timeB[3],year = 0,day1 = 0,day2 = 0,days = 0;
	//format present date.
	int number = presentTime;
	for (int i = 7; i >= 0; i--) {
		array[i] = number % 10;
    		number /= 10;
	}
	timeA[0] = array[0]*1000+array[1]*100+array[2]*10+array[3];
	timeA[1] = array[4]*10+array[5];
	timeA[2] = array[6]*10+array[7];
	
	// format start date.
	number = this->starttime;
	for (int i = 7; i >= 0; i--) {
		array[i] = number % 10;
    		number /= 10;
	}
	timeB[0] = array[0]*1000+array[1]*100+array[2]*10+array[3];
	timeB[1] = array[4]*10+array[5];
	timeB[2] = array[6]*10+array[7];
	//Compare date.
	year = timeA[0] - timeB[0];
	
	for (int i = 1; i<timeA[1];i++){
		if(i == 1|| i == 3 || i == 5|| i == 7 || i == 8 || i == 10 || i == 12){
			day1 = day1 + 31; 
		}
		else if (i ==2){
			if (timeA[0] % 400 ==0){
				day1 = day1 + 29;
			}
			else if(timeA[0] % 4 ==0 & timeA[0] % 100 != 0){
				day1 = day1 + 29;
			}
			else{
				day1 = day1 + 28;
			}
		}
		else{
			day1 = day1+30;
		}
	}
	day1 = day1+timeA[2];

	for (int i = 1; i<timeB[1];i++){
		if(i == 1|| i == 3 || i == 5|| i == 7 || i == 8 || i == 10 || i == 12){
			day2 = day2 + 31; 
		}
		else if (i ==2){
			if (timeB[0] % 400 ==0){
				day2 = day2 + 29;
			}
			else if(timeB[0] % 4 ==0 & timeB[0] % 100 != 0){
				day2 = day2 + 29;
			}
			else{
				day2 = day2 + 28;
			}
		}
		else{
			day2 = day2+30;
		}
	}
	day2 = day2 + timeB[2];

	if (year == 0){
		days = day1 - day2;
	}
	else if (year ==1){
		if (timeB[0] % 400 ==0){
			days = 366 - day2 + day1;
		}
		else if(timeB[0] % 4 ==0 & timeB[0] % 100 != 0){
			days = 366 - day2 + day1;
		}
		else{
			days = 365 - day2 + day1;
		}
	}
	else{
		for (int i = 1;i<year;i++){
			if ((timeB[0]+i) % 400 ==0){
				days = 366 + days;
			}
			else if((timeB[0]+i) % 4 ==0 & (timeB[0]+i) % 100 != 0){
				days = 366 + days;
			}
			else{
				days = 365 + days;
			}
		}
		if (timeB[0] % 400 ==0){
			days = 366 - day2 + day1 + days;
		}
		else if(timeB[0] % 4 ==0 & timeB[0] % 100 != 0){
			days = 366 - day2 + day1 + days;
		}
		else{
			days = 365 - day2 + day1 + days;
		}
	}	
	this->storagetime = days;
	
}

int STime :: getTime(){
	return this->storagetime;
}

int STime :: getStartTime(){
	if(this->starttime == 0){
		cout <<"Record time error! Error number:"<<endl;
	}
	else{
		return this->starttime;
	}
}

void STime :: warning(){
	
	if (storagetime >= 7){
		cout << "Please contact reciver for pick-up!"<< endl;
	}
	else{
		cout <<"Good!"<<endl;
	}
}

void STime :: startTime(){
	time_t rawtime;
	struct tm *info;
	char buffer[80];
	time( &rawtime );
	info = localtime( &rawtime );
	strftime(buffer, 80, "%Y%m%d", info);
	int a = atoi(buffer);
	this->starttime = a;
}

void STime :: setStartTime(int t){
    time_t rawtime;
    struct tm *info;
    char buffer[80];
    time( &rawtime );
    info = localtime( &rawtime );
    strftime(buffer, 80, "%Y%m%d", info);
    int a = atoi(buffer);
    if(a<t){
        cerr << "Wrong start time input." <<endl;
    }
    else{
        this->starttime = t;
    }
}
