#include<iostream>
//#include<string>
using namespace std;

int main()
{
	char name[20];
	float subject1;
	float subject2;
	float subject3;
	cout<<"Enter your name: ";
//	cin<<name;
//	getline(std::cin, name);
	cin.getline(name,sizeof(name));
	cout<<"Enter marks of subject 1: ";
	cin>>subject1;
	cout<<"Enter marks of subject 2: ";
	cin>>subject2;
	cout<<"Enter marks of subject 3: ";
	cin>>subject3;
	
	cout<<name<<", you have ";
	float percentage = (subject1+subject2+subject3)/3;
	if(percentage >= 80)
	{
		cout<<"Distinction!"<<endl;
	}
	else if(percentage >= 70 && percentage <80)
	{
		cout<<"First Division!"<<endl;
	}
	else if(percentage >= 60 && percentage <70)
	{
		cout<<"Second Division!"<<endl;
	}
	else if(percentage >= 50 && percentage <60)
	{
		cout<<"First Division!"<<endl;
	}
	else
	{
		cout<<" failed!"<<endl;
	}
	
	return 0;
}