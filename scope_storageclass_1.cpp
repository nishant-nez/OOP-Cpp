#include<iostream>
using namespace std;

void firstfunction();
void countfunction();
int var1;

int main()
{
	cout<<"var1 = "<<var1<<endl;
	firstfunction();
	countfunction();
	countfunction();
}

void firstfunction()
{
	int var1;
	cout<<"var 1 = "<<var1<<endl;
	cout<<"global var1 = "<<::var1<<endl;
}

void countfunction()
{
	int count = 0;
	count++;
	cout<<"count = "<<count<<endl;
}