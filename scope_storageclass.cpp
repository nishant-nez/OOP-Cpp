//Scope and storage class

#include<iostream>

using namespace std;

void firstfunction();
void countfunction();

int var1=3;							//Global variable, Declared as 0 initially, Static storage class

main()
{
	cout<<"var1="<<var1<<endl;
	firstfunction();
	countfunction();
	countfunction();
}

void firstfunction()
{
	int var1;						//Local variable, Undefined data, Automatic storage class
	cout<<"var1="<<var1<<endl;
	cout<<"Global var1="<<::var1<<endl;
}

void countfunction()
{
	static int count=0;				//Static variable, Only declares 1 time so value persists throughout the program
	count++;
	cout<<endl<<"Count="<<count<<endl;
}