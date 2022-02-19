/* Program that has a function hms_to_secs() that takes int values in format (12:59:59) and returns value of seconds. */

#include<iostream>
using namespace std;

long hms_to_secs(int, int, int);

int main()
{
	long hours, minutes, seconds;
	char colon;
	
	cout << "Enter the time value in format (hours:minutes:seconds) = ";
	cin >> hours;
	cin >> colon;
	cin >> minutes;
	cin >> colon;
	cin >> seconds;
	
	cout << "\nThe final value in seconds : " << hms_to_secs(hours, minutes, seconds) << " seconds.";
	
	return 0;	
}

long hms_to_secs(int hours, int minutes, int seconds)
{
	return (hours*60*60 + minutes*60 + seconds);
}
