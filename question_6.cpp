// Program to convert dollars into four other monetary units

#include<iostream>
using namespace std;

int main()
{
	float pound = 1.487;
	float franc = 0.172;
	float deutschemark = 0.584;
	float yen = 0.00955;
	float dollar;
	
	cout<<"Enter amount in dollars : ";
	cin>>dollar;
	
	cout<<"\n$"<<dollar<<" is equivalent to:"<<endl;
	
	cout<<dollar*pound<<" British pound."<<endl;
	cout<<dollar*franc<<" franc."<<endl;
	cout<<dollar*deutschemark<<" deutschemark."<<endl;
	cout<<dollar*yen<<" yen."<<endl;
	
	return 0;
}