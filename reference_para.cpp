//Reference parameter
#include<iostream>

using namespace std;

int main()
{
	int x=5;
	int& y=x;
	
	cout <<"x="<<x<<"\ty="<<y<<endl;
	y+=15;
	cout<<"x="<<x<<"\ty="<<y;
}