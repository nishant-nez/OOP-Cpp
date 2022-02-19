/* Program that has a function that tells how many times it has been called, using local static as well as global variable. */

#include<iostream>
int count_global = 1;
using namespace std;

void counter_using_local();
void counter_using_global();

int main()
{	
	for(int i=0; i<13; i++)
	{
		counter_using_local();
	}
	cout << endl;
	for(int i=0; i<13; i++)
	{
		counter_using_global();
	}
	
	cout << "\nUsing static variables seems to be more appropriate because static variables are available only on the function that it is delared in." << endl;
	cout << "Unlike global variables, which can be accessed by every function within the program." << endl;
	
	cout << "\nWe cannot use a local variable because the scope of local variable is only within the function or block it is declared within." << endl;
	cout << "If local variable is used, the value of the counting variable gets destroyed the moment the function ends. So the count resets everytime the function is called.";
	return 0;
}

void counter_using_local()
{
	static int count_local = 1;
	cout << "I have been called " << count_local <<" times." << endl;	
	count_local++;
}

void counter_using_global()
{
	cout << "I have been called " << count_global <<" times." << endl;	
	count_global++;
}
