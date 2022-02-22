#include<iostream>
using namespace std;

void prnchar();
void prnchar(char);
void prnchar(char, int);


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