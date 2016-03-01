#include <iostream>
#include "Time.h"

using namespace std;

int main(){
	Time teaTime(10, 15, 0);	//create a time object that stores tea time
	Time midnight;	//create a time object with default time, ie. midnight
	teaTime.print();
	midnight.print();

	teaTime.setTime(11, 0, 0);	//changes what time tea time is at
}