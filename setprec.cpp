#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float n1 = 5;
	int n2 = 3;
	float result = n1/n2;
	cout<<result<<endl;
	cout<<setprecision(1)<<result<<endl;
	cout<<setprecision(2)<<result<<endl;
	cout<<setprecision(3)<<result<<endl;
	cout<<setprecision(4)<<result<<endl;
	cout<<setprecision(5)<<result<<endl;
	
	cout<<setw(20)<<"Welcome"<<setw(30)<<"to DWIT"<<endl;
	cout<<setprecision(5)<<20.989134791;
	
	return 0;	                 
}