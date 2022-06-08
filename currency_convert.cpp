#include<iostream>
using namespace std;

class Currency {
	private:
		int dollar;
		int cents;
		
	public:
		Currency() {}
		Currency(int d, int c) : dollar(d), cents(c) {}
		
		void display();
		Currency(float);
		operator float();
};

void Currency::display() {
	cout << "$" << dollar << " " << cents <<endl;
}

Currency::Currency(float dlr) {
	dollar = int(dlr);
	cents = (dlr-dollar)*100;
}

Currency::operator float() {
	return (dollar+cents/100.0);
}

int main() {
	Currency c1;
	c1=101.56;
	c1.display();
	Currency c2(55,87);
	float d;
	d=c2;
	cout << d << endl;
	
	return 0;
}