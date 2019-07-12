//#define _USE_TIME_DEFINES

using namespace std;

#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

	//using std::cout;
	//using std::endl;

	const long SECONDS_PER_MINUTE = 60L;
	const long MINUTES_PER_HOUR = 60L;
	const long HOURS_PER_DAY = 24L;

	long secondsUserInput = 0;

	int days = 0;
	int hours = 0;
	int minutes = 0;
	int seconds = 0;

	//Unneeded << endl
	cout << "Enter a number of seconds: ";

	cin >> secondsUserInput;

	days = secondsUserInput / SECONDS_PER_MINUTE / MINUTES_PER_HOUR / HOURS_PER_DAY;

	double dayCal = (days * (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY));

	hours = secondsUserInput - dayCal;
	hours = hours / SECONDS_PER_MINUTE / MINUTES_PER_HOUR;

	double hoursCal = (hours * (SECONDS_PER_MINUTE * MINUTES_PER_HOUR));

	minutes = secondsUserInput - dayCal - hoursCal;
	minutes = minutes / SECONDS_PER_MINUTE;

	seconds = secondsUserInput - dayCal - hoursCal - (minutes * SECONDS_PER_MINUTE);

	cout << secondsUserInput << " seconds is: " << endl
		<< days << " days, "
		<< hours << " hours, "
		<< minutes << " minutes, "
		<< seconds << " seconds" << endl;

	system("pause");
	return 0;
}