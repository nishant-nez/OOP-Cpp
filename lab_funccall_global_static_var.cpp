/*Write a function that, when you call it, displays a message telling how many times it has
been called: ?I have been called 3 times?, for instance. Write a main() program that calls
this function at least 10 times. Try implementing this function in two different ways.
First, use a global variable to store the count. Second, use a local static variable. Which
is more appropriate? Why can?t you use a local variable?*/

#include<iostream>

using namespace std;

int count=0;		//global variable declaration
 
void func1();		//function declaration
void func2();

main()
{
	int i;
	
	for ( i=0; i<10; i++)		//loop for func1	
		func1();
		
	cout << endl << endl;
	
	for ( i=0; i<11; i++)		//loop for func2
		func2();	
}


void func1()				//count using global variable
{
	cout << "I have been called " << ++count << " times." << endl;
}

void func2()				//count using local static variable
{
	static int count = 0;
	cout << "I have been called " << ++count << " times." << endl;
}


/* Counting using local static variable (func2) is more appropriate
as nobody can change the calue of count unlike global variable.

A local variable can't be used as it can forget the value everytime
the function is called.  */