#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout<<setiosflags(ios::left)<<setw(12)<<"Last name";
	cout<<setw(13)<<"First name";
	cout<<setw(18)<<"Street address";
	cout<<setw(12)<<"Town";
	cout<<setw(5)<<"State"<<endl;
	
	for(int i=0; i<60; i++)
	{
		cout<<"-";
	}
	
	cout<<endl<<setw(12)<<"Jones";
	cout<<setw(13)<<"Bernard";
	cout<<setw(18)<<"109 Pine Lane";
	cout<<setw(12)<<"Littletown";
	cout<<setw(5)<<"MI"<<endl;
	
	cout<<setw(12)<<"O'Brian'";
	cout<<setw(13)<<"Coleen";
	cout<<setw(18)<<"42 E. 99th Ave.";
	cout<<setw(12)<<"Bigcity";
	cout<<setw(5)<<"NY"<<endl;
	
	cout<<setw(12)<<"Wong";
	cout<<setw(13)<<"Harry";
	cout<<setw(18)<<"121-A Alabama St.";
	cout<<setw(12)<<"Lakeville";
	cout<<setw(5)<<"IL"<<endl;
	
	return 0;	
}