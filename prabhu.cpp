#include <iostream>
#include <string>

using namespace std;

class Author
{
private:
	string name;
	string email;
	char gender;

public:
	Author() {}
	Author(string nam, string mail, char gen) : name(nam), email(mail), gender(gen) {}

	string getname() { return name; }

	void setemail(string mail) { email = mail; }
	string getemail() { return email; }

	char getgender() { return gender; }

	string toString()
	{
		string a;
		a = name + " at " + email;
		return a;
	}
};

class Book
{
private:
	string name;
	Author author;
	float price;
	int quantity;

public:
	Book() {}
	Book(string nam, Author auth, float rate) : name(name), author(auth), price(rate) {}
	Book(string nam, Author auth, float rate, int quant) : name(nam), author(auth), price(rate), quantity(quant) {}

	void setprice(float pri) { price = pri; }
	float getprice() { return price; }

	Author getauthor() { return author; }

	string getname() { return name; }

	void setquantity(float quant) { quantity = quant; }
	float getquantity() { return quantity; }

	string toString()
	{
		string a = name + " by " + author.getname();
		return a;
	}

	void book()
	{
		cout << endl << "Enter the book name ";
		cin >> name;

		cout << "Enter the price of book ";
		cin >> price;

		cout << "Enter the book quantity ";
		cin >> quantity;
	}
};
int main()
{
	string nam;
	string mail;
	char gen;
	int pri;
	int quant;
	string B_name;

	cout << "enter the name of the author " << endl;
	getline(cin, nam);

	cout << "enter the email " << endl;
	cin >> mail;

	cout << "enter gender " << endl;
	cin >> gen;

	Author A(nam, mail, gen);
	Book temp("B_name", A, 500.5, 3);

	Book B[2];

	for (int i = 0; i < 2; i++)
	{
		B[i] = temp;
		B[i].book();
	}

	cout << endl << A.toString() << endl << endl;

	for (int i = 0; i < 2; i++)
	{
		cout << B[i].toString() << endl;
	}
}
