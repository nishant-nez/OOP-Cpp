#include<iostream>
using namespace std;

// Default function value
void prnchar(char ch='*', int n=40);

int main()
{
	prnchar();
	prnchar('$');
	prnchar('%', 20);
}

void prnchar()
{
	for(int i=0; i<40; i++)
	{
		cout<<"*";
	}
	cout<<endl;
}

void prnchar(char ch)
{
	for(int i=0; i<40; i++)
	{
		cout<<ch;
	}
	cout<<endl;
}

void prnchar(char ch, int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<ch;
	}
	cout<<endl;
}