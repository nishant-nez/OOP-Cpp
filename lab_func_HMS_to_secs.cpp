/*Write a function called hms_to_secs() that takes three int values?for hours, minutes,
and seconds?as arguments, and returns the equivalent time in seconds (type long).
Create a program that exercises this function by repeatedly obtaining a time value in
hours, minutes, and seconds from the user (format 12:59:59), calling the function, and
displaying the value of seconds it returns.*/

#include<iostream>

using namespace std;

long hms_to_secs( int, int, int );		//function declaration

main()
{
	int hours, minutes, seconds;
	char a1,a2;
	
	cout << "Enter time in (hours:minutes:seconds) format = ";
	
	//Checking whether the input is formatted properly or not
	if ((cin >> hours >> a1 >> minutes >> a2 >> seconds) && a1 == ':' && a2 == ':'	)
	{		
		//Main output
		cout	<< endl 
			<< "The total value of given time in seconds = " 
			<< hms_to_secs(hours,minutes,seconds)
			<< " seconds";
					
	}
	else 	cout << "Bad input !"<<endl;
}

long hms_to_secs( int hr, int min, int secs)
{
	return (hr*3600+min*60+secs);
}