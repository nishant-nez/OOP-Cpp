#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
	string color;
	string breed;
	int age;

public:
	Dog() : color("black"), breed("husky"), age(6)
	{
	}
	void setcolor(string colorofthedog)
	{
		color = colorofthedog;
	}
	string getcolor()
	{
		return color;
	}
	void setbreed(string breedofthedog)
	{
		breed = breedofthedog;
	}
	string getbreed()
	{
		return breed;
	}
	void setage(int ageofthedog)
	{
		age = ageofthedog;
	}
	int getage()
	{
		return age;
	}
	string vaccinated(int answer)
	{
		if (answer == 2)
		{
			return "fully";
		}
		else
		{
			return "not";
		}
	}

	bool operator>(Dog);
};

bool Dog::operator>(Dog dg)
{
	return age > dg.getage();
}

int main()
{
	Dog leo;
	int vaccinenumber;
	cout << "how many times has your first dog taken the vaccine for rabies";
	cin >> vaccinenumber;
	cout << "the color of your dog is:" << leo.getcolor() << endl;
	cout << "the breed of your dog is:" << leo.getbreed() << endl;
	cout << "the age of you dog is:" << leo.getage() << endl;
	cout << "your dog is " << leo.vaccinated(vaccinenumber) << " vaccinated against rabies" << endl
		 << endl;

	Dog jacky;
	jacky.setage(9);
	jacky.setbreed("Pitbull");
	jacky.setcolor("Brown");

	cout << "how many times has your second dog taken the vaccine for rabies";
	cin >> vaccinenumber;
	cout << "the color of your dog is:" << jacky.getcolor() << endl;
	cout << "the breed of your dog is:" << jacky.getbreed() << endl;
	cout << "the age of you dog is:" << jacky.getage() << endl;
	cout << "your dog is " << jacky.vaccinated(vaccinenumber) << " vaccinated against rabies" << endl
		 << endl;

	if (leo > jacky)
	{
		cout << leo.getbreed() << " is older." << endl;
	}
	else
	{
		cout << jacky.getbreed() << " is older." << endl;
	}
}