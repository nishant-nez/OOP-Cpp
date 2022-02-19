#include<iostream>
using namespace std;

int main()
{
	float amount;
	int years=0;
	float interest;
	float final;
	
	cout<<"Enter initial amount: ";
	cin>>amount;
	float temp = amount;
	cout<<"Enter interest rate (percent per year): ";
	cin>>interest;
	cout<<"Enter final amount: ";
	cin>>final;
	
	while(amount != final)
	{
		amount = amount + amount * (interest/100);
		years++;
		cout<<"1";
	}
	
	cout<<"Time : "<<years<<" years.";
	
	return 0;
}