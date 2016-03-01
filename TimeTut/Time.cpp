#include "Time.h"
#include <iostream>

using namespace std;

//default constructor
Time::Time(int hours_in = 0, int mins_in = 0, int secs_in = 0){
	setTime(hours_in, mins_in, secs_in);
}

//accessor method
void Time::setTime(int hours_in, int minutes_in, int secs_in){
	hours_in = 0; //use sensible default values
	minutes_in = 0;
	secs_in = 0;

	if ((hours_in < 23) && (hours_in >= 0))
		hours = hours_in;
	else
		cout << "invalid value of hours entered" << endl;

	if ((minutes_in < 59) && (minutes_in >= 0))
		hours = minutes_in;
	else
		cout << "invalid value of minutes entered" << endl;

	if ((secs_in < 59) && (secs_in >= 0))
		hours = secs_in;
	else
		cout << "invalid value of seconds entered" << endl;
}

void Time::getTime(int &hours_out, int &minutes_out, int &secs_out){

}

void Time::print(void){

}

Time::~Time()
{
}