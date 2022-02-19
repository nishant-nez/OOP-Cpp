#include<iostream>
using namespace std;

int main()
{
	float amount;
	int years;
	float interest;
	float result = 0;
	
	cout<<"Enter initial amount: ";
	cin>>amount;
	cout<<"Enter number of years: ";
	cin>>years;
	cout<<"Enter interest rate (percent per year): ";
	cin>>interest;
	float temp = amount;
	
	for(int i=1; i<11; i++)
	{
		amount = amount + amount * (interest/100);
	} 
	
	cout<<"At the end of 10 years, you will have "<<amount<<" dollars.";
	
	return 0;
}