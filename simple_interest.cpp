#include<iostream>
using namespace std;
int main()
{
	float principal, time, rate;
	cout<<"Enter Principal ";
	cin>>principal;
	cout<<"Enter Time ";
	cin>>time;
	cout<<"Enter Rate ";
	cin>>rate;
	float simple_interest = (principal*time*rate)/100;
	cout<<"\nSimple Interest : "<<simple_interest<<endl;
	return 0;
}